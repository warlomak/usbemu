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

#include <glib-object.h>
#include <gio/gio.h>

G_BEGIN_DECLS

#define USBEMU_TYPE_MANAGER  (usbemu_manager_get_type ())

G_DECLARE_DERIVABLE_TYPE (UsbemuManager, usbemu_manager, USBEMU, MANAGER,
                          GDBusObjectSkeleton)

struct _UsbemuManagerClass {
  GDBusObjectSkeletonClass parent_class;

  /*< private >*/
  gpointer padding[12];
};

UsbemuManager* usbemu_manager_new (const gchar *object_path);

G_END_DECLS