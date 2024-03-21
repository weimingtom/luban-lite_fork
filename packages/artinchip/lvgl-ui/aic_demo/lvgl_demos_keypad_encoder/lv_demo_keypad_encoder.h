/**
 * @file lv_demo_keypad_encoder.h
 *
 */

#ifndef LV_DEMO_KEYPAD_ENCODER_H
#define LV_DEMO_KEYPAD_ENCODER_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include <lvgl.h>

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_demo_keypad_encoder(void);

/**********************
 *      MACROS
 **********************/
#define HAVE_KEYPAD_ENCODER_PNG 1
#define HAVE_KEYPAD_ENCODER_FONT 0

#if HAVE_KEYPAD_ENCODER_PNG
#include "../../../artinchip/lvgl-apps/aic_ui.h"
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_KEYPAD_ENCODER_H*/
