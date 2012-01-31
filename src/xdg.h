/* xdg.h: Public file. Global header file.
 *
 * More info can be found at http://www.freedesktop.org/standards/
 *
 * Copyright (C) 2011-2012  Dmitriy Vilkov <dav.daemon@gmail.com>
 *
 * Licensed under the Academic Free License version 2.0
 * Or under the following terms:
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef XDG_H_
#define XDG_H_

#include "xdgmime.h"
#include "xdgmimeapp.h"
#include "xdgmimetheme.h"

#ifdef __cplusplus
extern "C" {
#endif


void xdg_init();
void xdg_shutdown();


#ifdef __cplusplus
}
#endif
#endif /* XDG_H_ */
