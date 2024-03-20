/**
 * @file lv_demo_benchmark.h
 *
 */

#ifndef LV_DEMO_BENCHMARK_H
#define LV_DEMO_BENCHMARK_H

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
typedef void finished_cb_t(void);


/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_demo_benchmark(void);

void lv_demo_benchmark_run_scene(int_fast16_t scene_no);

void lv_demo_benchmark_set_finished_cb(finished_cb_t * finished_cb);

/**
 * Make the benchmark work at the highest frame rate
 * @param en true: highest frame rate; false: default frame rate
 */
void lv_demo_benchmark_set_max_speed(bool en);

/**********************
 *      MACROS
 **********************/

#define HAVE_BENCHMARK_PNG 1
#define HAVE_BENCHMARK_FONT 0

/*Benchmark your system*/
//#define LV_USE_DEMO_BENCHMARK 0
//#if LV_USE_DEMO_BENCHMARK
/*Use RGB565A8 images with 16 bit color depth instead of ARGB8565*/
#define LV_DEMO_BENCHMARK_RGB565A8 0
//#endif

#if HAVE_BENCHMARK_PNG
#include "../../../artinchip/lvgl-apps/aic_ui.h"
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_BENCHMARK_H*/
