#include "libhb.h"

void	hb_putmtr(char **mtr)
{
	size_t	i;

	if (!mtr)
		return ;
	i = 0;
	while (mtr[i])
	{
		hb_putstr(mtr[i++]);
		hb_putchar('\n');
	}
}

void	hb_putmtr_fd(char **mtr, int fd)
{
	size_t	i;

	if (!mtr)
		return ;
	i = 0;
	while (mtr[i])
	{
		hb_putstr_fd(mtr[i++], fd);
		hb_putchar('\n');
	}
}
