#pragma once
#include "raylib.h"

// -- RED
#define RED_50(opacity) CLITERAL(Color){254, 242, 242, (opacity)}
#define RED_100(opacity) CLITERAL(Color){254, 226, 226, (opacity)}
#define RED_200(opacity) CLITERAL(Color){254, 202, 202, (opacity)}
#define RED_300(opacity) CLITERAL(Color){252, 165, 165, (opacity)}
#define RED_400(opacity) CLITERAL(Color){248, 113, 113, (opacity)}
#define RED_500(opacity) CLITERAL(Color){239, 68, 68, (opacity)}
#define RED_600(opacity) CLITERAL(Color){220, 38, 38, (opacity)}
#define RED_700(opacity) CLITERAL(Color){185, 28, 28, (opacity)}
#define RED_800(opacity) CLITERAL(Color){153, 27, 27, (opacity)}
#define RED_900(opacity) CLITERAL(Color){127, 29, 29, (opacity)}

// -- ORANGE
#define ORANGE_50(opacity) CLITERAL(Color){255, 247, 237, (opacity)}
#define ORANGE_100(opacity) CLITERAL(Color){255, 237, 213, (opacity)}
#define ORANGE_200(opacity) CLITERAL(Color){254, 215, 170, (opacity)}
#define ORANGE_300(opacity) CLITERAL(Color){253, 186, 116, (opacity)}
#define ORANGE_400(opacity) CLITERAL(Color){251, 146, 60, (opacity)}
#define ORANGE_500(opacity) CLITERAL(Color){249, 115, 22, (opacity)}
#define ORANGE_600(opacity) CLITERAL(Color){234, 88, 12, (opacity)}
#define ORANGE_700(opacity) CLITERAL(Color){194, 65, 12, (opacity)}
#define ORANGE_800(opacity) CLITERAL(Color){154, 52, 18, (opacity)}
#define ORANGE_900(opacity) CLITERAL(Color){124, 45, 18, (opacity)}

// -- AMBER
#define AMBER_50(opacity) CLITERAL(Color){255, 251, 235, (opacity)}
#define AMBER_100(opacity) CLITERAL(Color){254, 243, 199, (opacity)}
#define AMBER_200(opacity) CLITERAL(Color){253, 230, 138, (opacity)}
#define AMBER_300(opacity) CLITERAL(Color){252, 211, 77, (opacity)}
#define AMBER_400(opacity) CLITERAL(Color){252, 211, 77, (opacity)}
#define AMBER_500(opacity) CLITERAL(Color){245, 158, 11, (opacity)}
#define AMBER_600(opacity) CLITERAL(Color){217, 119, 6, (opacity)}
#define AMBER_700(opacity) CLITERAL(Color){180, 83, 9, (opacity)}
#define AMBER_800(opacity) CLITERAL(Color){146, 64, 14, (opacity)}
#define AMBER_900(opacity) CLITERAL(Color){120, 53, 15, (opacity)}

// -- YELLOW
#define YELLOW_50(opacity) CLITERAL(Color){254, 252, 232, (opacity)}
#define YELLOW_100(opacity) CLITERAL(Color){254, 249, 195, (opacity)}
#define YELLOW_200(opacity) CLITERAL(Color){254, 240, 138, (opacity)}
#define YELLOW_300(opacity) CLITERAL(Color){253, 224, 71, (opacity)}
#define YELLOW_400(opacity) CLITERAL(Color){250, 204, 21, (opacity)}
#define YELLOW_500(opacity) CLITERAL(Color){234, 179, 8, (opacity)}
#define YELLOW_600(opacity) CLITERAL(Color){202, 138, 4, (opacity)}
#define YELLOW_700(opacity) CLITERAL(Color){161, 98, 7, (opacity)}
#define YELLOW_800(opacity) CLITERAL(Color){133, 77, 14, (opacity)}
#define YELLOW_900(opacity) CLITERAL(Color){113, 63, 18, (opacity)}

// -- LIME
#define LIME_50(opacity) CLITERAL(Color){247, 254, 231, (opacity)}
#define LIME_100(opacity) CLITERAL(Color){236, 252, 203, (opacity)}
#define LIME_200(opacity) CLITERAL(Color){217, 249, 157, (opacity)}
#define LIME_300(opacity) CLITERAL(Color){190, 242, 100, (opacity)}
#define LIME_400(opacity) CLITERAL(Color){163, 230, 53, (opacity)}
#define LIME_500(opacity) CLITERAL(Color){132, 204, 22, (opacity)}
#define LIME_600(opacity) CLITERAL(Color){101, 163, 13, (opacity)}
#define LIME_700(opacity) CLITERAL(Color){77, 124, 15, (opacity)}
#define LIME_800(opacity) CLITERAL(Color){63, 98, 18, (opacity)}
#define LIME_900(opacity) CLITERAL(Color){54, 83, 20, (opacity)}

// -- GREEN
#define GREEN_50(opacity) CLITERAL(Color){240, 253, 244, (opacity)}
#define GREEN_100(opacity) CLITERAL(Color){220, 252, 231, (opacity)}
#define GREEN_200(opacity) CLITERAL(Color){217, 249, 157, (opacity)}
#define GREEN_300(opacity) CLITERAL(Color){134, 239, 172, (opacity)}
#define GREEN_400(opacity) CLITERAL(Color){74, 222, 128, (opacity)}
#define GREEN_500(opacity) CLITERAL(Color){34, 197, 94, (opacity)}
#define GREEN_600(opacity) CLITERAL(Color){22, 163, 74, (opacity)}
#define GREEN_700(opacity) CLITERAL(Color){21, 128, 61, (opacity)}
#define GREEN_800(opacity) CLITERAL(Color){22, 101, 52, (opacity)}
#define GREEN_900(opacity) CLITERAL(Color){20, 83, 45, (opacity)}

// -- EMERAL
#define EMERAL_50(opacity) CLITERAL(Color){236, 253, 245, (opacity)}
#define EMERAL_100(opacity) CLITERAL(Color){209, 250, 229, (opacity)}
#define EMERAL_200(opacity) CLITERAL(Color){167, 243, 208, (opacity)}
#define EMERAL_300(opacity) CLITERAL(Color){110, 231, 183, (opacity)}
#define EMERAL_400(opacity) CLITERAL(Color){52, 211, 153, (opacity)}
#define EMERAL_500(opacity) CLITERAL(Color){16, 185, 129, (opacity)}
#define EMERAL_600(opacity) CLITERAL(Color){5, 150, 105, (opacity)}
#define EMERAL_700(opacity) CLITERAL(Color){4, 120, 87, (opacity)}
#define EMERAL_800(opacity) CLITERAL(Color){6, 95, 70, (opacity)}
#define EMERAL_900(opacity) CLITERAL(Color){6, 78, 59, (opacity)}

// -- TEAL
#define TEAL_50(opacity) CLITERAL(Color){240, 253, 250, (opacity)}
#define TEAL_100(opacity) CLITERAL(Color){204, 251, 241, (opacity)}
#define TEAL_200(opacity) CLITERAL(Color){153, 246, 228, (opacity)}
#define TEAL_300(opacity) CLITERAL(Color){94, 234, 212, (opacity)}
#define TEAL_400(opacity) CLITERAL(Color){45, 212, 191, (opacity)}
#define TEAL_500(opacity) CLITERAL(Color){20, 184, 166, (opacity)}
#define TEAL_600(opacity) CLITERAL(Color){13, 148, 136, (opacity)}
#define TEAL_700(opacity) CLITERAL(Color){15, 118, 110, (opacity)}
#define TEAL_800(opacity) CLITERAL(Color){17, 94, 89, (opacity)}
#define TEAL_900(opacity) CLITERAL(Color){19, 78, 74, (opacity)}