/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:21:47 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/03 13:36:49 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	c =  n;
	write(1, &c, 1);
}

void	affichage(int n, int tab[])
{
	int i;
		
	if (tab[0] == 10 - n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + 48);
			i = i + 1;
		}
	}	
	else
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + 48);
			i = i + 1;
		}
	    ft_putchar(44);
	    ft_putchar(32);
	}
}

void	ft_sort_integer_table(int *a, int b);

int		main(void)
{
	int	chaine[9];

	chaine[0] = 1;
	chaine[1] = 9;
	chaine[2] = 9;
	chaine[3] = 8;
	chaine[4] = 7;
	chaine[5] = 4;
	chaine[6] = 3;
	chaine[7] = 1;
	chaine[8] = 2;
	affichage(9, chaine);
	ft_sort_integer_table(&chaine[0], 9);	
	affichage(9, chaine);
	return (0);
}
