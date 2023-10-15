#pragma once
#include "raylib.h"

// -- OPACITY
#define OPACITY_TRANSPARENT 0
#define OPACITY_10          25
#define OPACITY_20          51
#define OPACITY_30          76
#define OPACITY_40          102
#define OPACITY_50          127
#define OPACITY_60          153
#define OPACITY_70          178
#define OPACITY_80          204
#define OPACITY_90          230
#define OPACITY_SOLID       255

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

// -- CYAN
#define CYAN_50(opacity) CLITERAL(Color){236, 254, 255, (opacity)}
#define CYAN_100(opacity) CLITERAL(Color){207, 250, 254, (opacity)}
#define CYAN_200(opacity) CLITERAL(Color){165, 243, 252, (opacity)}
#define CYAN_300(opacity) CLITERAL(Color){103, 232, 249, (opacity)}
#define CYAN_400(opacity) CLITERAL(Color){34, 211, 238, (opacity)}
#define CYAN_500(opacity) CLITERAL(Color){6, 182, 212, (opacity)}
#define CYAN_600(opacity) CLITERAL(Color){8, 145, 178, (opacity)}
#define CYAN_700(opacity) CLITERAL(Color){14, 116, 144, (opacity)}
#define CYAN_800(opacity) CLITERAL(Color){21, 94, 117, (opacity)}
#define CYAN_900(opacity) CLITERAL(Color){22, 78, 99, (opacity)}

// -- BLUELIGHT
#define BLUELIGHT_50(opacity) CLITERAL(Color){240, 249, 255, (opacity)}
#define BLUELIGHT_100(opacity) CLITERAL(Color){224, 242, 254, (opacity)}
#define BLUELIGHT_200(opacity) CLITERAL(Color){224, 242, 254, (opacity)}
#define BLUELIGHT_300(opacity) CLITERAL(Color){125, 211, 252, (opacity)}
#define BLUELIGHT_400(opacity) CLITERAL(Color){56, 189, 248, (opacity)}
#define BLUELIGHT_500(opacity) CLITERAL(Color){14, 165, 233, (opacity)}
#define BLUELIGHT_600(opacity) CLITERAL(Color){2, 132, 199, (opacity)}
#define BLUELIGHT_700(opacity) CLITERAL(Color){3, 105, 161, (opacity)}
#define BLUELIGHT_800(opacity) CLITERAL(Color){7, 89, 133, (opacity)}
#define BLUELIGHT_900(opacity) CLITERAL(Color){12, 74, 110, (opacity)}

// -- BLUE
#define BLUE_50(opacity) CLITERAL(Color){239, 246, 255, (opacity)}
#define BLUE_100(opacity) CLITERAL(Color){219, 234, 254, (opacity)}
#define BLUE_200(opacity) CLITERAL(Color){191, 219, 254, (opacity)}
#define BLUE_300(opacity) CLITERAL(Color){147, 197, 253, (opacity)}
#define BLUE_400(opacity) CLITERAL(Color){96, 165, 250, (opacity)}
#define BLUE_500(opacity) CLITERAL(Color){59, 130, 246, (opacity)}
#define BLUE_600(opacity) CLITERAL(Color){59, 130, 246, (opacity)}
#define BLUE_700(opacity) CLITERAL(Color){59, 130, 246, (opacity)}
#define BLUE_800(opacity) CLITERAL(Color){30, 64, 175, (opacity)}
#define BLUE_900(opacity) CLITERAL(Color){30, 58, 138, (opacity)}

// -- INDIGO
#define INDIGO_50(opacity) CLITERAL(Color){238, 242, 255, (opacity)}
#define INDIGO_100(opacity) CLITERAL(Color){224, 231, 255, (opacity)}
#define INDIGO_200(opacity) CLITERAL(Color){199, 210, 254, (opacity)}
#define INDIGO_300(opacity) CLITERAL(Color){165, 180, 252, (opacity)}
#define INDIGO_400(opacity) CLITERAL(Color){129, 140, 248, (opacity)}
#define INDIGO_500(opacity) CLITERAL(Color){99, 102, 241, (opacity)}
#define INDIGO_600(opacity) CLITERAL(Color){79, 70, 229, (opacity)}
#define INDIGO_700(opacity) CLITERAL(Color){67, 56, 202, (opacity)}
#define INDIGO_800(opacity) CLITERAL(Color){55, 48, 163, (opacity)}
#define INDIGO_900(opacity) CLITERAL(Color){49, 46, 129, (opacity)}

// -- VIOLET
#define VIOLET_50(opacity) CLITERAL(Color){245, 243, 255, (opacity)}
#define VIOLET_100(opacity) CLITERAL(Color){237, 233, 254, (opacity)}
#define VIOLET_200(opacity) CLITERAL(Color){221, 214, 254, (opacity)}
#define VIOLET_300(opacity) CLITERAL(Color){196, 181, 253, (opacity)}
#define VIOLET_400(opacity) CLITERAL(Color){167, 139, 250, (opacity)}
#define VIOLET_500(opacity) CLITERAL(Color){139, 92, 246, (opacity)}
#define VIOLET_600(opacity) CLITERAL(Color){124, 58, 237, (opacity)}
#define VIOLET_700(opacity) CLITERAL(Color){109, 40, 217, (opacity)}
#define VIOLET_800(opacity) CLITERAL(Color){91, 33, 182, (opacity)}
#define VIOLET_900(opacity) CLITERAL(Color){76, 29, 149, (opacity)}

// -- PURPLE
#define PURPLE_50(opacity) CLITERAL(Color){250, 245, 255, (opacity)}
#define PURPLE_100(opacity) CLITERAL(Color){243, 232, 255, (opacity)}
#define PURPLE_200(opacity) CLITERAL(Color){233, 213, 255, (opacity)}
#define PURPLE_300(opacity) CLITERAL(Color){216, 180, 254, (opacity)}
#define PURPLE_400(opacity) CLITERAL(Color){192, 132, 252, (opacity)}
#define PURPLE_500(opacity) CLITERAL(Color){168, 85, 247, (opacity)}
#define PURPLE_600(opacity) CLITERAL(Color){147, 51, 234, (opacity)}
#define PURPLE_700(opacity) CLITERAL(Color){126, 34, 206, (opacity)}
#define PURPLE_800(opacity) CLITERAL(Color){107, 33, 168, (opacity)}
#define PURPLE_900(opacity) CLITERAL(Color){88, 28, 135, (opacity)}

// -- FUCHISA
#define FUCHISA_50(opacity) CLITERAL(Color){253, 244, 255, (opacity)}
#define FUCHISA_100(opacity) CLITERAL(Color){250, 232, 255, (opacity)}
#define FUCHISA_200(opacity) CLITERAL(Color){245, 208, 254, (opacity)}
#define FUCHISA_300(opacity) CLITERAL(Color){240, 171, 252, (opacity)}
#define FUCHISA_400(opacity) CLITERAL(Color){232, 121, 249, (opacity)}
#define FUCHISA_500(opacity) CLITERAL(Color){217, 70, 239, (opacity)}
#define FUCHISA_600(opacity) CLITERAL(Color){192, 38, 211, (opacity)}
#define FUCHISA_700(opacity) CLITERAL(Color){162, 28, 175, (opacity)}
#define FUCHISA_800(opacity) CLITERAL(Color){134, 25, 143, (opacity)}
#define FUCHISA_900(opacity) CLITERAL(Color){112, 26, 117, (opacity)}

// -- PINK
#define PINK_50(opacity) CLITERAL(Color){253, 242, 248, (opacity)}
#define PINK_100(opacity) CLITERAL(Color){252, 231, 243, (opacity)}
#define PINK_200(opacity) CLITERAL(Color){251, 207, 232, (opacity)}
#define PINK_300(opacity) CLITERAL(Color){249, 168, 212, (opacity)}
#define PINK_400(opacity) CLITERAL(Color){244, 114, 182, (opacity)}
#define PINK_500(opacity) CLITERAL(Color){236, 72, 153, (opacity)}
#define PINK_600(opacity) CLITERAL(Color){219, 39, 119, (opacity)}
#define PINK_700(opacity) CLITERAL(Color){190, 24, 93, (opacity)}
#define PINK_800(opacity) CLITERAL(Color){157, 23, 77, (opacity)}
#define PINK_900(opacity) CLITERAL(Color){131, 24, 67, (opacity)}

// -- ROSE
#define ROSE_50(opacity) CLITERAL(Color){255, 241, 242, (opacity)}
#define ROSE_100(opacity) CLITERAL(Color){255, 228, 230, (opacity)}
#define ROSE_200(opacity) CLITERAL(Color){254, 205, 211, (opacity)}
#define ROSE_300(opacity) CLITERAL(Color){253, 164, 175, (opacity)}
#define ROSE_400(opacity) CLITERAL(Color){251, 113, 133, (opacity)}
#define ROSE_500(opacity) CLITERAL(Color){244, 63, 94, (opacity)}
#define ROSE_600(opacity) CLITERAL(Color){225, 29, 72, (opacity)}
#define ROSE_700(opacity) CLITERAL(Color){190, 18, 60, (opacity)}
#define ROSE_800(opacity) CLITERAL(Color){159, 18, 57, (opacity)}
#define ROSE_900(opacity) CLITERAL(Color){136, 19, 55, (opacity)}

// -- GRAYWARM
#define GRAYWARM_50(opacity) CLITERAL(Color){250, 250, 249, (opacity)}
#define GRAYWARM_100(opacity) CLITERAL(Color){245, 245, 244, (opacity)}
#define GRAYWARM_200(opacity) CLITERAL(Color){231, 229, 228, (opacity)}
#define GRAYWARM_300(opacity) CLITERAL(Color){214, 211, 209, (opacity)}
#define GRAYWARM_400(opacity) CLITERAL(Color){168, 162, 158, (opacity)}
#define GRAYWARM_500(opacity) CLITERAL(Color){120, 113, 108, (opacity)}
#define GRAYWARM_600(opacity) CLITERAL(Color){87, 83, 78, (opacity)}
#define GRAYWARM_700(opacity) CLITERAL(Color){68, 64, 60, (opacity)}
#define GRAYWARM_800(opacity) CLITERAL(Color){41, 37, 36, (opacity)}
#define GRAYWARM_900(opacity) CLITERAL(Color){28, 25, 23, (opacity)}

// -- GRAYTRUE
#define GRAYTRUE_50(opacity) CLITERAL(Color){250, 250, 250, (opacity)}
#define GRAYTRUE_100(opacity) CLITERAL(Color){245, 245, 245, (opacity)}
#define GRAYTRUE_200(opacity) CLITERAL(Color){229, 229, 229, (opacity)}
#define GRAYTRUE_300(opacity) CLITERAL(Color){212, 212, 212, (opacity)}
#define GRAYTRUE_400(opacity) CLITERAL(Color){212, 212, 212, (opacity)}
#define GRAYTRUE_500(opacity) CLITERAL(Color){115, 115, 115, (opacity)}
#define GRAYTRUE_600(opacity) CLITERAL(Color){82, 82, 82, (opacity)}
#define GRAYTRUE_700(opacity) CLITERAL(Color){64, 64, 64, (opacity)}
#define GRAYTRUE_800(opacity) CLITERAL(Color){38, 38, 38, (opacity)}
#define GRAYTRUE_900(opacity) CLITERAL(Color){23, 23, 23, (opacity)}

// -- GRAY
#define GRAY_50(opacity) CLITERAL(Color){250, 250, 250, (opacity)}
#define GRAY_100(opacity) CLITERAL(Color){244, 244, 245, (opacity)}
#define GRAY_200(opacity) CLITERAL(Color){228, 228, 231, (opacity)}
#define GRAY_300(opacity) CLITERAL(Color){212, 212, 216, (opacity)}
#define GRAY_400(opacity) CLITERAL(Color){161, 161, 170, (opacity)}
#define GRAY_500(opacity) CLITERAL(Color){113, 113, 122, (opacity)}
#define GRAY_600(opacity) CLITERAL(Color){82, 82, 91, (opacity)}
#define GRAY_700(opacity) CLITERAL(Color){63, 63, 70, (opacity)}
#define GRAY_800(opacity) CLITERAL(Color){63, 63, 70, (opacity)}
#define GRAY_900(opacity) CLITERAL(Color){24, 24, 27, (opacity)}

// -- GRAYCOOL
#define GRAYCOOL_50(opacity) CLITERAL(Color){249, 250, 251, (opacity)}
#define GRAYCOOL_100(opacity) CLITERAL(Color){243, 244, 246, (opacity)}
#define GRAYCOOL_200(opacity) CLITERAL(Color){229, 231, 235, (opacity)}
#define GRAYCOOL_300(opacity) CLITERAL(Color){209, 213, 219, (opacity)}
#define GRAYCOOL_400(opacity) CLITERAL(Color){156, 163, 175, (opacity)}
#define GRAYCOOL_500(opacity) CLITERAL(Color){107, 114, 128, (opacity)}
#define GRAYCOOL_600(opacity) CLITERAL(Color){75, 85, 99, (opacity)}
#define GRAYCOOL_700(opacity) CLITERAL(Color){55, 65, 81, (opacity)}
#define GRAYCOOL_800(opacity) CLITERAL(Color){31, 41, 55, (opacity)}
#define GRAYCOOL_900(opacity) CLITERAL(Color){17, 24, 39, (opacity)}

// -- GRAYBLUE
#define GRAYBLUE_50(opacity) CLITERAL(Color){248, 250, 252, (opacity)}
#define GRAYBLUE_100(opacity) CLITERAL(Color){241, 245, 249, (opacity)}
#define GRAYBLUE_200(opacity) CLITERAL(Color){226, 232, 240, (opacity)}
#define GRAYBLUE_300(opacity) CLITERAL(Color){203, 213, 225, (opacity)}
#define GRAYBLUE_400(opacity) CLITERAL(Color){148, 163, 184, (opacity)}
#define GRAYBLUE_500(opacity) CLITERAL(Color){100, 116, 139, (opacity)}
#define GRAYBLUE_600(opacity) CLITERAL(Color){71, 85, 105, (opacity)}
#define GRAYBLUE_700(opacity) CLITERAL(Color){51, 65, 85, (opacity)}
#define GRAYBLUE_800(opacity) CLITERAL(Color){30, 41, 59, (opacity)}
#define GRAYBLUE_900(opacity) CLITERAL(Color){15, 23, 42, (opacity)}