/*
 * waysome - wayland based window manager
 *
 * Copyright in alphabetical order:
 *
 * Copyright (C) 2014-2015 Julian Ganz
 * Copyright (C) 2014-2015 Manuel Messner
 * Copyright (C) 2014-2015 Marcel Müller
 * Copyright (C) 2014-2015 Matthias Beyer
 * Copyright (C) 2014-2015 Nadja Sommerfeld
 *
 * This file is part of waysome.
 *
 * waysome is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * waysome is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with waysome. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @addtogroup serializer "Serializer"
 *
 * @{
 */

/**
 * @addtogroup serializer_json "Serializer JSON backend"
 *
 * @{
 */

/**
 * @addtogroup serializer_json_serializer "JSON backend serializer"
 *
 * @{
 *
 * @copydoc json_statemachine
 */

#ifndef __WS_SERIALIZE_JSON_SERIALIZER_STATE_H__
#define __WS_SERIALIZE_JSON_SERIALIZER_STATE_H__

/**
 * State identifier
 */
enum serializer_state {
    STATE_NO_STATE = 0,
    STATE_INIT_STATE,
    STATE_MESSAGE_STATE,

    STATE_READY,
};

/**
 * Internal context helper type
 *
 * @extends serializer_yajl_state
 */
struct serializer_context {
    yajl_gen yajlgen;
    enum serializer_state current_state; //!< @public Current state

    unsigned char*  yajl_buffer;
    size_t          yajl_buffer_size;
};

/*
 *
 * Helper functions
 *
 */

/**
 * Generate a new serializer context object
 *
 * @return new `struct serializer_context` object or NULL on failure
 */
struct serializer_context*
serializer_context_new(void);

#endif //__WS_SERIALIZE_JSON_SERIALIZER_STATE_H__

/**
 * @}
 */

/**
 * @}
 */

/**
 * @}
 */

