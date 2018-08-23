/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 19:47:07 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/02 15:40:08 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affichage(char n, char m, char p)
{
	if (n == 7 && m == 8 && p == 9)
	{
		ft_putchar(n + 48);
		ft_putchar(m + 48);
		ft_putchar(p + 48);
	}
	else
	{
		ft_putchar(n + 48);
		ft_putchar(m + 48);
		ft_putchar(p + 48);
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				affichage(i, j, k);
				k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
}
