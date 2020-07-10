/*
 * 디스크 시뮬레이터 헤더
 * 작성자: Kyuling Lee
 * kyuling@me.com
 */

#ifndef _DISKSIM_H_
#define _DISKSIM_H_

#include "common.h"

int disksim_init(SECTOR, unsigned int, DISK_OPERATIONS*);
void disksim_uninit(DISK_OPERATIONS*);

#endif
