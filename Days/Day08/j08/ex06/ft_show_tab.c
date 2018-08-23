/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:57:13 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/15 17:42:17 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putnbr((-nb) / 10);
			ft_putchar('8');
		}
		else
			nb = -nb;
	}
	if (nb >= 0 && nb < 9)
		ft_putchar(nb + 48);
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

void	ft_display(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
		ft_display(*(tab++));
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	while ((*par).size_param)
	{
		ft_putstr((*par).str);
		ft_putchar('\n');
		ft_putnbr((*par).size_param);
		ft_putchar('\n');
		ft_print_words_tables((*par).tab);
		par++;
	}
}
