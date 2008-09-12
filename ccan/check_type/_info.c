#include <stdio.h>
#include <string.h>
#include "config.h"

/**
 * check_type - routines for compile time type checking
 *
 * C has fairly weak typing: ints get automatically converted to longs, signed
 * to unsigned, etc.  There are some cases where this is best avoided, and
 * these macros provide methods for evoking warnings (or build errors) when
 * a precise type isn't used.
 *
 * On compilers which don't support typeof() these routines are less effective,
 * since they have to use sizeof() which can only distiguish between types of
 * different size.
 *
 * Licence: LGPL (2 or any later version)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		return 1;

	if (strcmp(argv[1], "depends") == 0) {
#if !HAVE_TYPEOF
		printf("ccan/build_assert\n");
#endif
		return 0;
	}

	return 1;
}
