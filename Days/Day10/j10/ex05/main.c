/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:00:30 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/15 17:31:33 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

void	ft_putnbr(int n)
{
	printf("%d\n", n);
}

int		ft_cmp(int i, int j)
{
	if (i < j)
		return (-1);
	else if (i == j)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 4);
	tab[0] = 8;
	tab[1] = 2;
	tab[2] = 1;
	tab[3] = 0;
	ft_putnbr(ft_is_sort(tab, 4, &ft_cmp));
	free(tab);
	return (0);
}
