/*
 * Copyright (c) 2018-2020
 * Jianjia Ma
 * majianjia@live.com
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-05-03     Jianjia Ma   The first version
 */

#ifndef __NNOM_SUMPOOL_H__
#define __NNOM_SUMPOOL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include "nnom.c"
#include "nnom_layers.c"
#include "nnom_local.c"
#include "nnom_tensor.c"

#include "nnom_maxpool.c"

// Sum Pooling
typedef nnom_maxpool_layer_t nnom_sumpool_layer_t;

// method
nnom_status_t sumpool_build(nnom_layer_t *layer);
nnom_status_t sumpool_run(nnom_layer_t *layer);

// API
nnom_layer_t *sumpool_s(const nnom_pool_config_t * config);
nnom_layer_t *SumPool(nnom_3d_shape_t k, nnom_3d_shape_t s, nnom_padding_t pad_type);

#ifdef __cplusplus
}
#endif

#endif /* __NNOM_SUMPOOL_H__ */
