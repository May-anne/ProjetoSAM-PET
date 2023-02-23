// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.3
// PROJECT: TelaSAM

#ifndef _TELASAM_UI_H
#define _TELASAM_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

extern lv_obj_t * ui_Tela_Inicial;
extern lv_obj_t * ui_Background1;
extern lv_obj_t * ui_Top1;
extern lv_obj_t * ui_Titulo;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_TextoButton1;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
extern lv_obj_t * ui_TextoButton2;
extern lv_obj_t * ui_Bot;
extern lv_obj_t * ui_ImagemIDV;
extern lv_obj_t * ui_Image6;
extern lv_obj_t * ui_ImagemFACEPE;
extern lv_obj_t * ui_Image5;
extern lv_obj_t * ui_Imagem_Button1;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_Imagem_Button2;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_Tela_Configurar;
extern lv_obj_t * ui_Background2;
extern lv_obj_t * ui_Top2;
extern lv_obj_t * ui_Titulo2;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
extern lv_obj_t * ui_Texto_Button3;
extern lv_obj_t * ui_TituloVel;
void ui_event_Slider1(lv_event_t * e);
extern lv_obj_t * ui_Slider1;
extern lv_obj_t * ui_TituloAngulacao;
void ui_event_Slider3(lv_event_t * e);
extern lv_obj_t * ui_Slider3;
extern lv_obj_t * ui_TextoValorMinVel;
extern lv_obj_t * ui_TextoValorMinAng;
extern lv_obj_t * ui_TextoValorMaxVel;
extern lv_obj_t * ui_TextoValorMaxAng;
extern lv_obj_t * ui_Tela_Arquivos;
extern lv_obj_t * ui_Background3;
extern lv_obj_t * ui_Top3;
extern lv_obj_t * ui_Label2;
void ui_event_Button5(lv_event_t * e);
extern lv_obj_t * ui_Button5;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_TituloAudio1;
void ui_event_ImageSong1(lv_event_t * e);
extern lv_obj_t * ui_ImageSong1;
extern lv_obj_t * ui_Image7;
extern lv_obj_t * ui_Bar2;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label5;
void ui_event_ImageSong2(lv_event_t * e);
extern lv_obj_t * ui_ImageSong2;
extern lv_obj_t * ui_Image8;
extern lv_obj_t * ui_Bar1;
extern int ValueVel;
extern int ValueAng;

void valor_velocidade(lv_event_t * e);
void valor_angulo(lv_event_t * e);

LV_IMG_DECLARE(ui_img_logoteste2_png);    // assets\logoteste2.png
LV_IMG_DECLARE(ui_img_2011542280);    // assets\facepe-teste.png
LV_IMG_DECLARE(ui_img_settings_png);    // assets\settings.png
LV_IMG_DECLARE(ui_img_logotipo_png);    // assets\logotipo.png
LV_IMG_DECLARE(ui_img_282859964);    // assets\playlist (1).png
LV_IMG_DECLARE(ui_img_1280743751);    // assets\play-button.png


LV_FONT_DECLARE(ui_font_Fonte_14);
LV_FONT_DECLARE(ui_font_Fonte_18);
LV_FONT_DECLARE(ui_font_Fonte_20);
LV_FONT_DECLARE(ui_font_Fonte_22);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
