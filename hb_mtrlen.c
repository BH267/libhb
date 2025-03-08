#include "libhb.h"

size_t	hb_mtrlen(char **mtr)
{
	size_t	i;

	i = 0;
	while (mtr[i])
		i++;
	return (i);
}
