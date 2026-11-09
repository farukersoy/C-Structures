#include <stdio.h>
#include "ft_stock_str.h"

t_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int	i;

	tab = ft_strs_to_tab(argc, argv);
	i = 0;
	while (tab[i].str)
	{
		printf("%d | %s | %s\n", tab[i].size, tab[i].str, tab[i].copy);
		i++;
	}
	return (0);	
}
