#include "libhb.h"

char	**hb_mtrcpy(char **mtr)
{
	char	**m;
	size_t	i;

	m = (char **)malloc(hb_mtrlen(mtr) * (sizeof(char *) + 2));
	if (!m)
		return (NULL);
	i = 0;
	while (mtr[i])
	{
		m[i] = hb_strdup(mtr[i]);
		i++;
	}
	m[i] = NULL;
	return (m);
}
