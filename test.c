#include "log.h"

int main()
{
	if (log_init() < 0) {
		printf("log_init error...\n");
		return -1;
	}

	LOG_FATAL("%s", "hello zlog fatal");
	LOG_ERROR("%s", "hello zlog error");
	LOG_WARN("%s", "hello zlog warn");
	LOG_NOTICE("%s", "hello zlog notice");
	LOG_INFO("%s", "hello zlog info");
	LOG_DEBUG("%s", "hello zlog debug");

	log_fini();
}
