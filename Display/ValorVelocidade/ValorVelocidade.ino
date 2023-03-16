#include "ui.h"

void valor_velocidade(lv_event_t * e{
  lv_obj_t * slider = lv_event_get_target(e);
  int32_t v = lv_slider_get_value(slider);
  Serial.print("Velocidade: ");
  Serial.println(v);
}
