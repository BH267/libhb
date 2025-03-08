#include "libhb.h"

void	hb_mtrfree(char **mtr)
{
	int	i;

	i = 0;
	while (mtr && mtr[i])
		free(mtr[i++]);
	free(mtr);
}
