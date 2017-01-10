#include <string.h>
#include <stdio.h>
#include <zlog.h>

zlog_category_t *log_category = NULL;

int log_init()
{
	if (zlog_init("log.cfg")) {
		printf("zlog init error....\n");
		return -1;
	}

	log_category = zlog_get_category("*");
	if (!log_category) {
		printf("zlog get category error...\n");
		zlog_fini();
		return -2;
	}
	return 0;
}

void log_fini()
{
	zlog_fini();
}
