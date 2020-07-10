/*
 * FAT 파일 시스템하고 쉘 사이에 동작하는 레이어 헤더
 * 작성자: Kyuling Lee
 * kyuling@me.com
 */

#ifndef _FAT_SHELL_H_
#define _FAT_SHELL_H_

#include "fat.h"
#include "shell.h"

void shell_register_filesystem(SHELL_FILESYSTEM*);

#endif
