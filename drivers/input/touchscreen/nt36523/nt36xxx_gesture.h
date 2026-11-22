/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef _NT36XXX_GESTURE_H
#define _NT36XXX_GESTURE_H

#include <linux/types.h>

/* Xiaomi nabu stock nt36523: gesture 15, or protocol 30 / page 1 / id 15. */
static inline bool nvt_is_doubletap(const unsigned char *data, unsigned int len)
{
	unsigned int id;

	if (len < 4)
		return false;
	id = data[1] >> 3;
	if (id == 30 && data[2] == 1)
		id = data[3];
	return id == 15;
}
#endif
