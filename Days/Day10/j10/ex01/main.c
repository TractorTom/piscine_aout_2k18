/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:00:30 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/14 22:25:09 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int n)
{
	printf("%d\n", n);
}

int		main(void)
{
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 4);
	tab[0] = 1;
	tab[1] = 6;
	tab[2] = 7;
	tab[3] = 45353146;
	ft_foreach(tab, 4, &ft_putnbr);
	free(tab);
	return (0);
}

