/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:17:47 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/04 19:00:54 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int tab[])
{
	int i;

	i = 0;
	while (i < 8)
		ft_putchar((((tab[i++] - 1) / 8) + 1) + 48);
	ft_putchar('\n');
}

int		condition(int tab[], int kase)
{
	int k;
	int diff;
	int i;

	k = ((kase - 1) % 8) + 1;
	i = 1;
	while (i < k)
	{
		diff = kase - tab[i - 1];
		if (diff > 0)
		{
			if (diff > 0 && diff < 8)
				return (0);
			if (diff % 9 == 0 || diff % 8 == 0)
				return (0);
		}
		else if (diff % 8 == 0 || diff % 7 == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}

void	ft_inter(int tab[], int k)
{
	int j;

	j = k;
	while (j < 65)
	{
		if (condition(tab, j) == 1)
		{
			if (k == 8)
			{
				tab[7] = j;
				ft_display(tab);
			}
			else
			{
				tab[k - 1] = j;
				ft_inter(tab, k + 1);
			}
		}
		j = j + 8;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int	tab[8];
	int	j;

	j = 1;
	while (j < 65)
	{
		tab[0] = j;
		ft_inter(tab, 2);
		j = j + 8;
	}
}
