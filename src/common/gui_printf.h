/*
 * Copyright (C) 2004   CreepLord (creeplord@pvpgn.org)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef INCLUDED_GUI_PRINTF_H
#define INCLUDED_GUI_PRINTF_H

#ifdef WIN32_GUI 

#include "common/eventlog.h"
#include <common/format.h>

namespace pvpgn
{
	//template <typename... Args>
	//void gui_lvprintf(t_eventlog_level l, const char* format, const Args& ... args);
	void gui_lvprintf(t_eventlog_level l, const char* format, fmt::ArgList args);
	FMT_VARIADIC(void, gui_lvprintf, t_eventlog_level, const char*);
}
#endif

#endif
