/* Copyright (c) 2003-2016, LogMeIn, Inc. All rights reserved.
 *
 * This is part of the Xively C Client library,
 * it is licensed under the BSD 3-Clause license.
 */

#ifndef __XI_MQTT_LOGIC_LAYER_KEEPALIVE_HANDLER_H__
#define __XI_MQTT_LOGIC_LAYER_KEEPALIVE_HANDLER_H__

#include "xi_layer_api.h"

#ifdef __cplusplus
extern "C" {
#endif

xi_state_t do_mqtt_keepalive_once( void* data );

xi_state_t
do_mqtt_keepalive_task( void* context, void* task, xi_state_t state, void* msg_memory );

xi_state_t on_keepalive_timeout_expiry( void* context,
                                        void* task,
                                        xi_state_t state,
                                        void* msg_memory );

#ifdef __cplusplus
}
#endif

#endif /* __XI_MQTT_LOGIC_LAYER_KEEPALIVE_HANDLER_H__ */
