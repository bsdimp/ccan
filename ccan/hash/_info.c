#include <string.h>

/**
 * hash - routines for hashing bytes
 *
 * When creating a hash table it's important to have a hash function
 * which mixes well and is fast.  This package supplies such functions.
 *
 * The hash functions come in two flavors: the normal ones and the
 * stable ones.  The normal ones can vary from machine-to-machine and
 * may change if we find better or faster hash algorithms in future.
 * The stable ones will always give the same results on any computer,
 * and on any version of this package.
 *
 * Licence: Public Domain
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		return 1;

	if (strcmp(argv[1], "depends") == 0) {
		return 0;
	}

	return 1;
}
