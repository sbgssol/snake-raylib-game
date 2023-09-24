﻿#include "raylib.h"
#include <string_view>
#include <iostream>
#include "Colors.h"

//----------------------------------------------------------------------------------
// Some Defines
//----------------------------------------------------------------------------------
#define SNAKE_LENGTH   256
#define SQUARE_SIZE     11

//----------------------------------------------------------------------------------
// Types and Structures Definition
//----------------------------------------------------------------------------------
typedef struct Snake {
  Vector2 position;
  Vector2 size;
  Vector2 speed;
  Color color;
} Snake;

typedef struct Food {
  Vector2 position;
  Vector2 size;
  bool active;
  Color color;
} Food;

//------------------------------------------------------------------------------------
// Global Variables Declaration
//------------------------------------------------------------------------------------
static const int screenWidth = 800;
static const int screenHeight = 600;

static int framesCounter = 0;
static bool gameOver = false;
static bool pause = false;

static Food fruit = { 0 };
static Snake snake[SNAKE_LENGTH] = { 0 };
static Vector2 snakePosition[SNAKE_LENGTH] = { 0 };
static bool allowMove = false;
static Vector2 offset = { 0 };
static int counterTail = 0;
Image icon;
Texture2D texture;
Font font;

//------------------------------------------------------------------------------------
// Module Functions Declaration (local)
//------------------------------------------------------------------------------------
static void InitGame(void);         // Initialize game
static void UpdateGame(void);       // Update game (one frame)
static void DrawGame(void);         // Draw game (one frame)
static void UnloadGame(void);       // Unload game
static void UpdateDrawFrame(void);  // Update and Draw (one frame)

void drawMessage(std::string_view);

int main(void)
{
  InitWindow(screenWidth, screenHeight, "classic game: snake");

  icon = LoadImage("resources/ami.png");

  ImageResize(&icon, 100, 100);

  texture = LoadTextureFromImage(icon);

  font = LoadFont("resources/signika.ttf");

  if (IsFontReady(font)) {
    std::cout << "Font size: " << font.baseSize << '\n';
  }

  if (IsImageReady(icon)) {
    SetWindowIcon(icon);
  }

  SetWindowState(FLAG_WINDOW_RESIZABLE);

  InitGame();

  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    UpdateDrawFrame();
  }
  UnloadGame();

  CloseWindow();

  return 0;
}

void InitGame(void)
{
  framesCounter = 0;
  gameOver = false;
  pause = false;

  counterTail = 1;
  allowMove = false;

  offset.x = screenWidth % SQUARE_SIZE;
  offset.y = screenHeight % SQUARE_SIZE;

  for (int i = 0; i < SNAKE_LENGTH; i++)
  {
    snake[i].position = Vector2{ offset.x / 2, offset.y / 2 };
    snake[i].size = Vector2{ SQUARE_SIZE, SQUARE_SIZE };
    snake[i].speed = Vector2{ SQUARE_SIZE, 0 };

    if (i == 0) snake[i].color = TEAL_600(255);
    else snake[i].color = TEAL_300(255);
  }

  for (int i = 0; i < SNAKE_LENGTH; i++)
  {
    snakePosition[i] = Vector2{ 0.0f, 0.0f };
  }

  fruit.size = Vector2{ SQUARE_SIZE, SQUARE_SIZE };
  fruit.color = LIME_400(255);
  fruit.active = false;
}

// Update game (one frame)
void UpdateGame(void)
{
  if (!gameOver)
  {
    if (IsKeyPressed('P')) pause = !pause;

    if (IsKeyPressed('M')) {
      MaximizeWindow();
    }

    if (IsKeyPressed('R')) {
      RestoreWindow();
    }

    if (!pause)
    {
      // Player control
      if (IsKeyPressed(KEY_RIGHT) && (snake[0].speed.x == 0) && allowMove)
      {
        snake[0].speed = Vector2{ SQUARE_SIZE, 0 };
        allowMove = false;
      }
      if (IsKeyPressed(KEY_LEFT) && (snake[0].speed.x == 0) && allowMove)
      {
        snake[0].speed = Vector2{ -SQUARE_SIZE, 0 };
        allowMove = false;
      }
      if (IsKeyPressed(KEY_UP) && (snake[0].speed.y == 0) && allowMove)
      {
        snake[0].speed = Vector2{ 0, -SQUARE_SIZE };
        allowMove = false;
      }
      if (IsKeyPressed(KEY_DOWN) && (snake[0].speed.y == 0) && allowMove)
      {
        snake[0].speed = Vector2{ 0, SQUARE_SIZE };
        allowMove = false;
      }

      // Snake movement
      for (int i = 0; i < counterTail; i++) snakePosition[i] = snake[i].position;

      if ((framesCounter % 5) == 0)
      {
        for (int i = 0; i < counterTail; i++)
        {
          if (i == 0)
          {
            snake[0].position.x += snake[0].speed.x;
            snake[0].position.y += snake[0].speed.y;
            allowMove = true;
          }
          else snake[i].position = snakePosition[i - 1];
        }
      }

      // Wall behaviour
      if (((snake[0].position.x) > (screenWidth - offset.x)) ||
        ((snake[0].position.y) > (screenHeight - offset.y)) ||
        (snake[0].position.x < 0) || (snake[0].position.y < 0))
      {
        gameOver = true;
      }

      // Collision with yourself
      for (int i = 1; i < counterTail; i++)
      {
        if ((snake[0].position.x == snake[i].position.x) && (snake[0].position.y == snake[i].position.y)) gameOver = true;
      }

      // Fruit position calculation
      if (!fruit.active)
      {
        fruit.active = true;
        fruit.position = Vector2{ GetRandomValue(0, (screenWidth / SQUARE_SIZE) - 1) * SQUARE_SIZE + offset.x / 2, GetRandomValue(0, (screenHeight / SQUARE_SIZE) - 1) * SQUARE_SIZE + offset.y / 2 };

        for (int i = 0; i < counterTail; i++)
        {
          while ((fruit.position.x == snake[i].position.x) && (fruit.position.y == snake[i].position.y))
          {
            fruit.position = Vector2{ GetRandomValue(0, (screenWidth / SQUARE_SIZE) - 1) * SQUARE_SIZE + offset.x / 2, GetRandomValue(0, (screenHeight / SQUARE_SIZE) - 1) * SQUARE_SIZE + offset.y / 2 };
            i = 0;
          }
        }
      }

      // Collision
      if ((snake[0].position.x < (fruit.position.x + fruit.size.x) && (snake[0].position.x + snake[0].size.x) > fruit.position.x) &&
        (snake[0].position.y < (fruit.position.y + fruit.size.y) && (snake[0].position.y + snake[0].size.y) > fruit.position.y))
      {
        snake[counterTail].position = snakePosition[counterTail - 1];
        counterTail += 1;
        fruit.active = false;
      }

      framesCounter++;
    }
  }
  else
  {
    if (IsKeyPressed(KEY_ENTER))
    {
      InitGame();
      gameOver = false;
    }
  }
}

// Draw game (one frame)
void DrawGame(void)
{
  BeginDrawing();

  ClearBackground(RAYWHITE);

  if (!gameOver)
  {
    // Draw grid lines
    for (int i = 0; i < screenWidth / SQUARE_SIZE + 1; i++)
    {
      DrawLineV(Vector2{ SQUARE_SIZE * i + offset.x / 2, offset.y / 2 }, Vector2{ SQUARE_SIZE * i + offset.x / 2, screenHeight - offset.y / 2 }, LIGHTGRAY);
    }

    for (int i = 0; i < screenHeight / SQUARE_SIZE + 1; i++)
    {
      DrawLineV(Vector2{ offset.x / 2, SQUARE_SIZE * i + offset.y / 2 }, Vector2{ screenWidth - offset.x / 2, SQUARE_SIZE * i + offset.y / 2 }, LIGHTGRAY);
    }

    // Draw snake
    for (int i = 0; i < counterTail; i++) {
      DrawRectangleV(snake[i].position, snake[i].size, snake[i].color);
    }

    // Draw fruit to pick
    DrawRectangleV(fruit.position, fruit.size, fruit.color);

    if (pause) DrawText("GAME PAUSED", screenWidth / 2 - MeasureText("GAME PAUSED", 40) / 2, screenHeight / 2 - 40, 40, GRAY);
  
    //DrawTexture(texture, 10, 10, WHITE);
  }
  else {
    /*DrawTextEx(font, "a ă â o ơ ô e ê u ư i", { 10, 10 }, font.baseSize, 0, BLACK);
    DrawTextEx(font, "á ắ ấ ó ớ ố é ế ú ứ í", { 10, 50 }, font.baseSize, 0, BLACK);
    DrawTextEx(font, "à ằ ầ ò ờ ồ è ề ù ừ ì", { 10, 90 }, font.baseSize, 0, BLACK);
    DrawTextEx(font, "ả ẳ ẩ ỏ ở ổ ẻ ể ủ ử ỉ", { 10, 130 }, font.baseSize, 0, BLACK);
    DrawTextEx(font, "ã ẵ ẫ õ ỡ ỗ ẽ ễ ũ ữ ĩ", { 10, 130 }, font.baseSize, 0, BLACK);
    DrawTextEx(font, "ạ ặ ậ ọ ợ ộ ẹ ệ ụ ự ị", { 10, 170 }, font.baseSize, 0, BLACK);*/
    DrawTextEx(font, "Press [Enter] to play again noob!", { 10, 170 }, font.baseSize, 0, EMERAL_900(255));
  } //DrawText("PRESS [ENTER] TO PLAY AGAIN", GetScreenWidth() / 2 - MeasureText("PRESS [ENTER] TO PLAY AGAIN", 20) / 2, GetScreenHeight() / 2 - 50, 20, GRAY);

  EndDrawing();
}

void drawMessage(std::string_view msg) {
  DrawText(msg.data(), screenWidth / 2 - MeasureText("GAME PAUSED", 40) / 2, screenHeight / 2 - 40, 40, GRAY);
}

// Unload game variables
void UnloadGame(void)
{
  // TODO: Unload all dynamic loaded data (textures, sounds, models...)
}

// Update and Draw (one frame)
void UpdateDrawFrame(void)
{
  UpdateGame();
  DrawGame();
}