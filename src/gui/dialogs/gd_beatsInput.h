/* ---------------------------------------------------------------------
 *
 * Giada - Your Hardcore Loopmachine
 *
 * ---------------------------------------------------------------------
 *
 * Copyright (C) 2010-2017 Giovanni A. Zuliani | Monocasual
 *
 * This file is part of Giada - Your Hardcore Loopmachine.
 *
 * Giada - Your Hardcore Loopmachine is free software: you can
 * redistribute it and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * Giada - Your Hardcore Loopmachine is distributed in the hope that it
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Giada - Your Hardcore Loopmachine. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * ------------------------------------------------------------------ */

#ifndef GD_BEATSINPUT_H
#define GD_BEATSINPUT_H

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include "window.h"


class geInput;
class geButton;
class geCheck;


class gdBeatsInput : public gdWindow
{
private:

	static void cb_update_batt(Fl_Widget *w, void *p);
	inline void __cb_update_batt();

	geInput  *beats;
	geInput  *bars;
	geButton *ok;
	geCheck   *resizeRec;

public:

	gdBeatsInput();
	~gdBeatsInput();
};


#endif
