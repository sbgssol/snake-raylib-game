#include "raylib.h"
#include <string_view>
#include <iostream>
#include <string>
#include "Colors.h"
#include "Snake.hpp"

#define START_FUNCTION std::cout << "START -> " << __func__ << '\n'
#define END_FUNCTION std::cout << __func__ << " -> END" << '\n'

//------------------------------------------------------------------------------------
// Global Variables Declaration
//------------------------------------------------------------------------------------
static const int screenWidth = 800;
static const int screenHeight = 600;
static unsigned int call_time = 0;
static unsigned int frame_counter = 0;
const int scroll_speed = 1;
bool allowMove = true;
bool allowDraw = false;
auto paused = false;
float cube_size = 30;
float speed = 1;
auto direction = Vector2{ 0, 0 };
auto previous_direction = direction;
auto cube = Vector2{ 10, 10 };
void drawMessage(std::string_view);



void InitGame(void)
{
  START_FUNCTION;
  END_FUNCTION;
}
#define SNAKE_SPEED  3
// Update game (one frame)

void HandleKeyPress() {
  if (IsKeyPressed(KEY_P)) {
    paused = !paused;
  }
  if (IsKeyPressed(KEY_LEFT) && allowMove) {
    direction = { -speed, 0 };
    allowMove = false;
    paused = false;
  }
  if (IsKeyPressed(KEY_RIGHT) && allowMove) {
    direction = { speed, 0 };
    allowMove = false;
    paused = false;
  }
  if (IsKeyPressed(KEY_UP) && allowMove) {
    direction = { 0, -speed };
    allowMove = false;
    paused = false;
  }
  if (IsKeyPressed(KEY_DOWN) && allowMove) {
    direction = { 0, speed };
    allowMove = false;
    paused = false;
  }
  if (IsKeyPressed(KEY_W)) {
    ++speed;
  }
  if (IsKeyPressed(KEY_S)) {
    --speed;
  }

  speed += GetMouseWheelMove() ? GetMouseWheelMove() * scroll_speed : 0;

  if (!speed) {
    speed = 1;
  }
}

void UpdateGame(void)
{
  START_FUNCTION;
  
  HandleKeyPress();

  if (!paused) {
    if (allowMove) { // No key is pressed
      direction = previous_direction;
      allowMove = false;
    }

    if (!allowMove) {
      cube.x += direction.x;
      cube.y += direction.y;
      previous_direction = direction;
      allowMove = true;
    }
  }

  DrawRectangle(cube.x, cube.y, cube_size, cube_size, ROSE_500(255));

  DrawCircle(GetMouseX(), GetMouseY(), cube_size/2, EMERAL_400(OPACITY_50));

  END_FUNCTION;
}

// Draw game (one frame)
void DrawGame(void)
{
  START_FUNCTION;
  BeginDrawing();

  ClearBackground(RAYWHITE);
  ++frame_counter;
  auto message = paused
    ? "Paused"
    : "Cube position: (" + std::to_string(int(cube.x)) + ", " + std::to_string(int(cube.y)) + ")";
  
  DrawText(message.data(), 10, 500, 20, GRAYBLUE_600(OPACITY_50));
  DrawText(std::string("Speed: " + std::to_string(int(speed))).data(), 10, 520, 20, CYAN_500(OPACITY_50));
  DrawText("Scroll the wheel to control speed", 10, 540, 20, VIOLET_300(OPACITY_50));
  DrawText("Press W to increase, S to descrease speed", 10, 560, 20, ORANGE_600(OPACITY_50));
  DrawText("Press P to pause", 10, 580, 20, LIME_600(OPACITY_50));
  
  EndDrawing();

  END_FUNCTION;
}

void drawMessage(std::string_view msg) {
  DrawText(msg.data(), screenWidth / 10 - MeasureText("GAME PAUSED", 40) / 10, screenHeight / 2 - 40, 40, GRAY);
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
  DrawFPS(10, 10);
}

int main(void)
{
  InitWindow(screenWidth, screenHeight, "classic game: snake");

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