// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.3
// PROJECT: TelaSAM

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Tela_Inicial;
lv_obj_t * ui_Background1;
lv_obj_t * ui_Top1;
lv_obj_t * ui_Titulo;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_TextoButton1;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
lv_obj_t * ui_TextoButton2;
lv_obj_t * ui_Bot;
lv_obj_t * ui_ImagemIDV;
lv_obj_t * ui_Image6;
lv_obj_t * ui_ImagemFACEPE;
lv_obj_t * ui_Image5;
lv_obj_t * ui_Imagem_Button1;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Imagem_Button2;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Tela_Configurar;
lv_obj_t * ui_Background2;
lv_obj_t * ui_Top2;
lv_obj_t * ui_Titulo2;
void ui_event_Button3(lv_event_t * e);
lv_obj_t * ui_Button3;
lv_obj_t * ui_Texto_Button3;
lv_obj_t * ui_TituloVel;
void ui_event_Slider1(lv_event_t * e);
lv_obj_t * ui_Slider1;
lv_obj_t * ui_TituloAngulacao;
void ui_event_Slider3(lv_event_t * e);
lv_obj_t * ui_Slider3;
lv_obj_t * ui_TextoValorMinVel;
lv_obj_t * ui_TextoValorMinAng;
lv_obj_t * ui_TextoValorMaxVel;
lv_obj_t * ui_TextoValorMaxAng;
lv_obj_t * ui_Tela_Arquivos;
lv_obj_t * ui_Background3;
lv_obj_t * ui_Top3;
lv_obj_t * ui_Label2;
void ui_event_Button5(lv_event_t * e);
lv_obj_t * ui_Button5;
lv_obj_t * ui_Label1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Tela_Configurar, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Tela_Arquivos, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Tela_Inicial, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Slider1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        valor_velocidade(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_TextoValorMaxVel, target, "", "");
    }
}
void ui_event_Slider3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_TextoValorMaxAng, target, "", "");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        valor_angulo(e);
    }
}
void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Tela_Inicial, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Tela_Inicial_screen_init(void)
{
    ui_Tela_Inicial = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Tela_Inicial, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Background1 = lv_obj_create(ui_Tela_Inicial);
    lv_obj_set_width(ui_Background1, 320);
    lv_obj_set_height(ui_Background1, 480);
    lv_obj_set_align(ui_Background1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Background1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Background1, lv_color_hex(0xDCE0E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Background1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Top1 = lv_obj_create(ui_Background1);
    lv_obj_set_height(ui_Top1, 72);
    lv_obj_set_width(ui_Top1, lv_pct(80));
    lv_obj_set_x(ui_Top1, 0);
    lv_obj_set_y(ui_Top1, -20);
    lv_obj_set_align(ui_Top1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Top1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Top1, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Top1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Top1, lv_color_hex(0xDCE0E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Top1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titulo = lv_label_create(ui_Background1);
    lv_obj_set_width(ui_Titulo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Titulo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Titulo, 0);
    lv_obj_set_y(ui_Titulo, -145);
    lv_obj_set_align(ui_Titulo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Titulo, "Controle da Luva Robotica");
    lv_obj_set_style_text_color(ui_Titulo, lv_color_hex(0x2B567F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Titulo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Titulo, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_Background1);
    lv_obj_set_width(ui_Button1, 150);
    lv_obj_set_height(ui_Button1, 43);
    lv_obj_set_x(ui_Button1, 2);
    lv_obj_set_y(ui_Button1, 70);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextoButton1 = lv_label_create(ui_Background1);
    lv_obj_set_width(ui_TextoButton1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextoButton1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextoButton1, 12);
    lv_obj_set_y(ui_TextoButton1, 69);
    lv_obj_set_align(ui_TextoButton1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextoButton1, "Configurar");
    lv_obj_set_style_text_color(ui_TextoButton1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextoButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Background1);
    lv_obj_set_width(ui_Button2, 150);
    lv_obj_set_height(ui_Button2, 43);
    lv_obj_set_x(ui_Button2, 2);
    lv_obj_set_y(ui_Button2, 131);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextoButton2 = lv_label_create(ui_Background1);
    lv_obj_set_width(ui_TextoButton2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextoButton2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextoButton2, 9);
    lv_obj_set_y(ui_TextoButton2, 131);
    lv_obj_set_align(ui_TextoButton2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextoButton2, "Audios");

    ui_Bot = lv_obj_create(ui_Background1);
    lv_obj_set_width(ui_Bot, 342);
    lv_obj_set_height(ui_Bot, 58);
    lv_obj_set_x(ui_Bot, 0);
    lv_obj_set_y(ui_Bot, 23);
    lv_obj_set_align(ui_Bot, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Bot, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Bot, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bot, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Bot, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Bot, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImagemIDV = lv_obj_create(ui_Bot);
    lv_obj_set_width(ui_ImagemIDV, 120);
    lv_obj_set_height(ui_ImagemIDV, 40);
    lv_obj_set_x(ui_ImagemIDV, -85);
    lv_obj_set_y(ui_ImagemIDV, -3);
    lv_obj_set_align(ui_ImagemIDV, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ImagemIDV, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ImagemIDV, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ImagemIDV, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ImagemIDV, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ImagemIDV, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image6 = lv_img_create(ui_ImagemIDV);
    lv_img_set_src(ui_Image6, &ui_img_logoteste2_png);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image6, 4);
    lv_obj_set_y(ui_Image6, -2);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image6, 78);

    ui_ImagemFACEPE = lv_obj_create(ui_Bot);
    lv_obj_set_width(ui_ImagemFACEPE, 100);
    lv_obj_set_height(ui_ImagemFACEPE, 41);
    lv_obj_set_x(ui_ImagemFACEPE, 72);
    lv_obj_set_y(ui_ImagemFACEPE, -5);
    lv_obj_set_align(ui_ImagemFACEPE, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ImagemFACEPE, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ImagemFACEPE, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ImagemFACEPE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ImagemFACEPE, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ImagemFACEPE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image5 = lv_img_create(ui_ImagemFACEPE);
    lv_img_set_src(ui_Image5, &ui_img_2011542280);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image5, 130);

    ui_Imagem_Button1 = lv_obj_create(ui_Tela_Inicial);
    lv_obj_set_width(ui_Imagem_Button1, 21);
    lv_obj_set_height(ui_Imagem_Button1, 22);
    lv_obj_set_x(ui_Imagem_Button1, -49);
    lv_obj_set_y(ui_Imagem_Button1, 69);
    lv_obj_set_align(ui_Imagem_Button1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Imagem_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Imagem_Button1, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Imagem_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Imagem_Button1, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Imagem_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Imagem_Button1);
    lv_img_set_src(ui_Image1, &ui_img_settings_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image1, -1);
    lv_obj_set_y(ui_Image1, 0);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 9);

    ui_Panel1 = lv_obj_create(ui_Tela_Inicial);
    lv_obj_set_width(ui_Panel1, 122);
    lv_obj_set_height(ui_Panel1, 120);
    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, -51);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xDCE0E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0xDCE0E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image3 = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_Image3, &ui_img_hands_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image3, 1);
    lv_obj_set_y(ui_Image3, 3);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Imagem_Button2 = lv_obj_create(ui_Tela_Inicial);
    lv_obj_set_width(ui_Imagem_Button2, 24);
    lv_obj_set_height(ui_Imagem_Button2, 24);
    lv_obj_set_x(ui_Imagem_Button2, -47);
    lv_obj_set_y(ui_Imagem_Button2, 132);
    lv_obj_set_align(ui_Imagem_Button2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Imagem_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Imagem_Button2, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Imagem_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Imagem_Button2, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Imagem_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image4 = lv_img_create(ui_Imagem_Button2);
    lv_img_set_src(ui_Image4, &ui_img_282859964);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image4, 80);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);

}
void ui_Tela_Configurar_screen_init(void)
{
    ui_Tela_Configurar = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Tela_Configurar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Background2 = lv_obj_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_Background2, 320);
    lv_obj_set_height(ui_Background2, 480);
    lv_obj_set_align(ui_Background2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Background2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Background2, lv_color_hex(0xDCE0E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Background2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Top2 = lv_obj_create(ui_Background2);
    lv_obj_set_width(ui_Top2, 320);
    lv_obj_set_height(ui_Top2, 53);
    lv_obj_set_x(ui_Top2, 0);
    lv_obj_set_y(ui_Top2, -20);
    lv_obj_set_align(ui_Top2, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Top2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Top2, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Top2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Top2, lv_color_hex(0xDCE0E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Top2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titulo2 = lv_label_create(ui_Background2);
    lv_obj_set_width(ui_Titulo2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Titulo2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Titulo2, 0);
    lv_obj_set_y(ui_Titulo2, 46);
    lv_obj_set_align(ui_Titulo2, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Titulo2, "Configurar Luva");
    lv_obj_set_style_text_color(ui_Titulo2, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Titulo2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Titulo2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_Background2);
    lv_obj_set_width(ui_Button3, 114);
    lv_obj_set_height(ui_Button3, 35);
    lv_obj_set_x(ui_Button3, 0);
    lv_obj_set_y(ui_Button3, 177);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Texto_Button3 = lv_label_create(ui_Background2);
    lv_obj_set_width(ui_Texto_Button3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Texto_Button3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Texto_Button3, 0);
    lv_obj_set_y(ui_Texto_Button3, 177);
    lv_obj_set_align(ui_Texto_Button3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Texto_Button3, "Voltar");
    lv_obj_set_style_text_color(ui_Texto_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Texto_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TituloVel = lv_label_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_TituloVel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TituloVel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TituloVel, -77);
    lv_obj_set_y(ui_TituloVel, -110);
    lv_obj_set_align(ui_TituloVel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TituloVel, "Velocidade");
    lv_obj_set_style_text_color(ui_TituloVel, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TituloVel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TituloVel, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider1 = lv_slider_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_Slider1, 185);
    lv_obj_set_height(ui_Slider1, 12);
    lv_obj_set_x(ui_Slider1, 0);
    lv_obj_set_y(ui_Slider1, -67);
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0x567EBB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0x567EBB), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Slider1, lv_color_hex(0xBEC3CB), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Slider1, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0x2B4C7E), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_TituloAngulacao = lv_label_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_TituloAngulacao, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TituloAngulacao, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TituloAngulacao, -77);
    lv_obj_set_y(ui_TituloAngulacao, -19);
    lv_obj_set_align(ui_TituloAngulacao, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TituloAngulacao, "Angulacao");
    lv_obj_set_style_text_color(ui_TituloAngulacao, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TituloAngulacao, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TituloAngulacao, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider3 = lv_slider_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_Slider3, 185);
    lv_obj_set_height(ui_Slider3, 12);
    lv_obj_set_x(ui_Slider3, 0);
    lv_obj_set_y(ui_Slider3, 30);
    lv_obj_set_align(ui_Slider3, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Slider3, lv_color_hex(0x567EBB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider3, lv_color_hex(0x567EBB), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Slider3, lv_color_hex(0xBEC3CB), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Slider3, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider3, lv_color_hex(0x2B4C7E), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider3, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_TextoValorMinVel = lv_label_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_TextoValorMinVel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextoValorMinVel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextoValorMinVel, -123);
    lv_obj_set_y(ui_TextoValorMinVel, -68);
    lv_obj_set_align(ui_TextoValorMinVel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextoValorMinVel, "0");
    lv_obj_set_style_text_color(ui_TextoValorMinVel, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextoValorMinVel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextoValorMinVel, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextoValorMinAng = lv_label_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_TextoValorMinAng, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextoValorMinAng, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextoValorMinAng, -123);
    lv_obj_set_y(ui_TextoValorMinAng, 30);
    lv_obj_set_align(ui_TextoValorMinAng, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextoValorMinAng, "0");
    lv_obj_set_style_text_color(ui_TextoValorMinAng, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextoValorMinAng, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextoValorMinAng, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextoValorMaxVel = lv_label_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_TextoValorMaxVel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextoValorMaxVel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextoValorMaxVel, 122);
    lv_obj_set_y(ui_TextoValorMaxVel, -67);
    lv_obj_set_align(ui_TextoValorMaxVel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextoValorMaxVel, "");
    lv_obj_set_style_text_color(ui_TextoValorMaxVel, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextoValorMaxVel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextoValorMaxVel, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextoValorMaxAng = lv_label_create(ui_Tela_Configurar);
    lv_obj_set_width(ui_TextoValorMaxAng, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextoValorMaxAng, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextoValorMaxAng, 122);
    lv_obj_set_y(ui_TextoValorMaxAng, 30);
    lv_obj_set_align(ui_TextoValorMaxAng, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextoValorMaxAng, "");
    lv_obj_set_style_text_color(ui_TextoValorMaxAng, lv_color_hex(0x606D80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextoValorMaxAng, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextoValorMaxAng, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider1, ui_event_Slider1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider3, ui_event_Slider3, LV_EVENT_ALL, NULL);

}
void ui_Tela_Arquivos_screen_init(void)
{
    ui_Tela_Arquivos = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Tela_Arquivos, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Tela_Arquivos, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Tela_Arquivos, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Background3 = lv_obj_create(ui_Tela_Arquivos);
    lv_obj_set_width(ui_Background3, 320);
    lv_obj_set_height(ui_Background3, 480);
    lv_obj_set_align(ui_Background3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Background3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Background3, lv_color_hex(0xDCE0E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Background3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Top3 = lv_obj_create(ui_Background3);
    lv_obj_set_width(ui_Top3, 320);
    lv_obj_set_height(ui_Top3, 53);
    lv_obj_set_x(ui_Top3, 0);
    lv_obj_set_y(ui_Top3, -20);
    lv_obj_set_align(ui_Top3, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Top3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Top3, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Top3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Top3, lv_color_hex(0xDCE0E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Top3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Background3);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 46);
    lv_obj_set_align(ui_Label2, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label2, "Arquivos de audios");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button5 = lv_btn_create(ui_Background3);
    lv_obj_set_width(ui_Button5, 114);
    lv_obj_set_height(ui_Button5, 35);
    lv_obj_set_x(ui_Button5, 0);
    lv_obj_set_y(ui_Button5, 177);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button5, lv_color_hex(0x2B4C7E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Background3);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 177);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Voltar");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Tela_Inicial_screen_init();
    ui_Tela_Configurar_screen_init();
    ui_Tela_Arquivos_screen_init();
    lv_disp_load_scr(ui_Tela_Inicial);
}
