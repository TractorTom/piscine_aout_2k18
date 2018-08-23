/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:00:30 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/15 20:16:36 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_map(int *tab, int length, int(*f)(int));

void	ft_putnbr(int n)
{
	printf("%d\n", n);
}

void	ft_display(int *tab, int length)
{
	int	i;

	i = 0;
	while (i < length)
		ft_putnbr(tab[i++]);
}

int		ft_changenbr(int n)
{
	return (n + 1);
}

int		main(void)
{
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 4);
	tab[0] = 1;
	tab[1] = 6;
	tab[2] = 7;
	tab[3] = 45353146;
	ft_display(tab, 4);
	ft_display(ft_map(tab, 4, &ft_changenbr), 4);
	free(tab);
	return (0);
}
