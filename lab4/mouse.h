#ifndef __KEYBOARD_H
#define __KEYBOARD_H

#include <minix/drivers.h>
#include <stdbool.h>
#include <math.h>

#include "i8042.h"

static int hook_mouse=NOTIFICATION_MOUSE;
static int hook_timer=NOTIFICATION_TIMER;

int timer_subscribe_int(void);
int timer_unsubscribe_int();


#endif
