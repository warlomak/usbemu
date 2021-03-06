/* usbemu - USB Emulation Library
 * Copyright (C) 2016 You-Sheng Yang
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#if !defined (__USBEMU_USBEMU_H_INSIDE__) && !defined (LIBUSBEMU_COMPILATION)
#error "Only <usbemu/usbemu.h> can be included directly."
#endif

#include <glib.h>

G_BEGIN_DECLS

/**
 * UsbemuError:
 * @USBEMU_ERROR_FAILED: unknown or unclassified failure.
 * @USBEMU_ERROR_INVALID_TYPE: invalid object type.
 * @USBEMU_ERROR_SYNTAX_ERROR: syntax error on inputs.
 * @USBEMU_ERROR_NOT_SUPPORTED: operation not supported.
 * @USBEMU_ERROR_INVALID_STATE: operation occurs in a invalid state.
 * @USBEMU_ERROR_RESOURCE_UNAVAILABLE: resource unavailable.
 *
 * Errors used in usbemu library.
 */
typedef enum { /*< underscore_name=usbemu_error >*/
  USBEMU_ERROR_FAILED = 0, /*< nick=Failed >*/
  USBEMU_ERROR_INVALID_TYPE, /*< nick=InvalidType >*/
  USBEMU_ERROR_SYNTAX_ERROR, /*< nick=SyntaxError >*/
  USBEMU_ERROR_NOT_SUPPORTED, /*< nick=NotSupported >*/
  USBEMU_ERROR_INVALID_STATE, /*< nick=InvalidState >*/
  USBEMU_ERROR_RESOURCE_UNAVAILABLE, /*< nick=ResourceUnavailable >*/
} UsbemuError;

/**
 * usbemu_error_quark:
 *
 * #GQuark for USBEmu error domain. Use #USBEMU_ERROR instead.
 */
GQuark usbemu_error_quark (void);

/**
 * USBEMU_ERROR:
 *
 * Error domain for USBEmu. Errors in this domain will be from the #UsbemuError
 * enumeration. See #GError for more information on error domains.
 */
#define USBEMU_ERROR (usbemu_error_quark ())

G_END_DECLS
