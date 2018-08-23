/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 04:16:34 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/04 18:58:18 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_inter(int tab[], int k)
{
	int count;
	int j;

	j = k;
	count = 0;
	while (j < 65)
	{
		if (condition(tab, j) == 1)
		{
			if (k == 8)
				count = count + 1;
			else
			{
				tab[k - 1] = j;
				count = count + ft_inter(tab, k + 1);
			}
		}
		j = j + 8;
	}
	return (count);
}

int		ft_eight_queens_puzzle(void)
{
	int	tab[8];
	int	j;
	int count;

	j = 1;
	count = 0;
	while (j < 65)
	{
		tab[0] = j;
		count = count + ft_inter(tab, 2);
		j = j + 8;
	}
	return (count);
}
