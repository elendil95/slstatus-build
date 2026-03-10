/* See LICENSE file for copyright and license details. */
#include <stddef.h>
#include "../util.h"

const char *
num_updates(void)
{
	int count;

	if (pscanf("/tmp/updates_count", "%d", &count) != 1)
		return NULL;

	return bprintf("%d", count);
}
