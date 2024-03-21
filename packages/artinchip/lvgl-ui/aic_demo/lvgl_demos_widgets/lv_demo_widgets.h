/**
 * @file lv_demo_widgets.h
 *
 */

#ifndef LV_DEMO_WIDGETS_H
#define LV_DEMO_WIDGETS_H

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
void lv_demo_widgets(void);

/**********************
 *      MACROS
 **********************/
#define HAVE_WIDGETS_PNG 1
#define HAVE_WIDGETS_FONT 0

#define LV_DEMO_WIDGETS_SLIDESHOW 0

#if HAVE_WIDGETS_PNG
#include "../../../../artinchip/lvgl-ui/aic_ui.h"
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_WIDGETS_H*/
