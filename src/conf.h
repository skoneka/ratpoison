/* Config file for ratpoison. Edit these values and recompile. 
 * Copyright (C) 2000, 2001 Shawn Betts
 *
 * This file is part of ratpoison.
 *
 * ratpoison is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * ratpoison is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA
 */

#ifndef _RATPOISON_CONF_H
#define _RATPOISON_CONF_H 1

#include "data.h"
#include "actions.h"

#define KEY_PREFIX      XK_t
#define MODIFIER_PREFIX ControlMask

/* After hitting the prefix key ratpoison will change the mouse cursor
   to a square to indicate that it is waiting for a second
   keystroke. If do not wish this functionality, comment out the
   following line. */
#define USE_WAITFORKEY_CURSOR

/* Quit ratpoison when there are no more managed windows. */
/* #define AUTO_CLOSE */

/* The minimum size of the input window */
#define INPUT_WINDOW_SIZE 200

/* If you want the input window to take up the length of the screen,
   use this: */
/* #define INPUT_WINDOW_SIZE (s->root_attr.width - prompt_width) */


/* The border width ratpoison configures all windows with */
#define WINDOW_BORDER_WIDTH 1

/* Pressing a key sends the mouse to the bottom right corner. This
   doesn't work very well yet. */
/* #define HIDE_MOUSE  */

#define FOREGROUND	"black"
#define BACKGROUND	"white"
#define FONT		"9x15bold"

#define BAR_Y_PADDING   0       /* The amount of padding on the top
				   and bottom of the message bar  */
#define BAR_X_PADDING   0       /* The amount of padding on the left
				   and right of the message bar  */
#define BAR_LOCATION    3	/* 0=bottom-left 1=top-left 2=bottom-right 3=top-right */
#define BAR_TIMEOUT     5	/* Number of seconds before the progam bar autohides 0=don't autohide */

/* Number of seconds before the frame indicator disappears */
#define FRAME_INDICATOR_TIMEOUT 1

/* What to display in the frame indicator */
#define FRAME_STRING    "Current Frame"

#define PADDING_LEFT 	0	/* space not to be taken up around managed windows */
#define PADDING_TOP 	0
#define PADDING_RIGHT 	0
#define PADDING_BOTTOM 	0

/* If for some sick reason you don't want ratpoison to manage a
   window, put its name in this list. These windows get drawn but
   ratpoison won't have any knowledge of them and you won't be able to
   jump to them or give them keyboard focus. This has been added
   mostly for use with hand-helds. */
#define UNMANAGED_WINDOW_LIST "xapm","xclock","xscribble"

#define RAT_WIDTH 	16
#define RAT_HEIGHT 	16
#define RAT_HOT_X 	8
#define RAT_HOT_Y 	8

#endif /* !_ _RATPOISON_CONF_H */
