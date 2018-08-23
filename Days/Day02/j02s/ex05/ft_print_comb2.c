/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:32:00 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/02 01:12:44 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affichage(char n, char p)
{
	if (n == 99 && p == 99)
	{
		ft_putchar(n / 10 + 48);
		ft_putchar(n % 10 + 48);
		ft_putchar(32);
		ft_putchar(p / 10 + 48);
		ft_putchar((p % 10) + 48);
	}
	else
	{
		ft_putchar(n / 10 + 48);
		ft_putchar((n % 10) + 48);
		ft_putchar(32);
		ft_putchar(p / 10 + 48);
		ft_putchar((p % 10) + 48);
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	char i;
	char j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			affichage(i, j);
			j = j + 1;
		}
		i = i + 1;
	}
}
