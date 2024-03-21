/*
 * Copyright (C) 2022-2023 ArtinChip Technology Co., Ltd.
 * Authors:  Ning Fang <ning.fang@artinchip.com>
 */

#include "lvgl.h"
#include "aic_ui.h"
#include "aic_osal.h"

void aic_ui_init()
{
#ifdef AIC_LVGL_BASE_DEMO
#include "base_ui.h"
    base_ui_init();
#endif

#ifdef AIC_LVGL_METER_DEMO
#include "meter_ui.h"
    meter_ui_init();
#endif

#ifdef AIC_LVGL_LAUNCHER_DEMO
    extern void launcher_ui_init();
    launcher_ui_init();
#endif

#ifdef AIC_LVGL_MUSIC_DEMO
    extern void lv_demo_music(void);
    lv_demo_music();
#endif

#ifdef AIC_LVGL_MUSIC_PLAYER_DEMO
    extern void lv_demo_music(void);
    lv_demo_music();
#endif

#ifdef AIC_LVGL_WIDGETS_DEMO
    extern void lv_demo_widgets(void);
    lv_demo_widgets();
#endif

#ifdef AIC_LVGL_STRESS_DEMO
	extern void lv_demo_stress(void);
	lv_demo_stress();
#endif	

#ifdef AIC_LVGL_KEYPAD_ENCODER_DEMO
	extern void lv_demo_keypad_encoder(void);
	lv_demo_keypad_encoder();
#endif	

#ifdef AIC_LVGL_BENCHMARK_DEMO
	extern void lv_demo_benchmark(void);
	lv_demo_benchmark();
#endif	
    return;
}
