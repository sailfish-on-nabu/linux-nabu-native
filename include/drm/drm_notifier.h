/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 * Copyright (C) 2021 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _DRM_NOTIFIER_H_
#define _DRM_NOTIFIER_H_

#include <linux/notifier.h>

/* A hardware display blank change occurred */
#define MI_DRM_EVENT_BLANK              0x01
/* A hardware display blank early change occurred */
#define MI_DRM_EARLY_EVENT_BLANK        0x02
/* Synchronous TDDI handshakes before the panel sleeps or resets. */
#define MI_DRM_EVENT_TOUCH_SLEEP        0x03
#define MI_DRM_EVENT_TOUCH_RESET        0x04

struct drm_touch_sleep {
	bool gesture_active;
	int error;
};

enum drm_notifier_data {
	/* panel: power on */
	MI_DRM_BLANK_UNBLANK,
	/* panel: power down */
	MI_DRM_BLANK_POWERDOWN,
};

int mi_drm_register_client(struct notifier_block *nb);
int mi_drm_unregister_client(struct notifier_block *nb);
int mi_drm_notifier_call_chain(unsigned long val, void *v);

#endif /* _DRM_NOTIFIER_H */
