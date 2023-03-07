// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.3
// PROJECT: TelaSAM

#include "ui.h"

int ValueVel;
int ValueAng;
int ValueRepeat;

void valor_velocidade(lv_event_t * e)
{
	lv_obj_t * slider = lv_event_get_target(e);
  int32_t v = lv_slider_get_value(slider);
  ValueVel = v;
}

void valor_angulo(lv_event_t * e)
{
	lv_obj_t * slider = lv_event_get_target(e);
  int32_t a = lv_slider_get_value(slider);
  ValueAng = a;
}

void put_data(lv_event_t * e)
{
	// Your code here
}

void Tocar_Audio1(lv_event_t * e)
{
	// Your code here
}

void valor_repetir(lv_event_t * e)
{
	lv_obj_t * slider = lv_event_get_target(e);
  int32_t r = lv_slider_get_value(slider);
  ValueRepeat = r;
}
