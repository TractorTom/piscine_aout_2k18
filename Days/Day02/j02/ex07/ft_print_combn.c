/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 23:07:38 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/03 13:09:37 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affichage(int n, char tab[])
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

void	aux(int n, int k, char tab[])
{
	int i;

	if (k == n - 1)
	{
		i = tab[n - 2] + 1;
		while (i <= 9)
		{
			tab[n - 1] = i;
			affichage(n, tab);
			i = i + 1;
		}
	}
	else
	{
		i = tab[k - 1] + 1;
		while (i <= (10 + k) - n)
		{
			tab[k] = i;
			aux(n, k + 1, tab);
			i = i + 1;
		}
	}
}

void	affichage2(void)
{
	int i;

	i = 0;
	while (i < 9)
	{
		ft_putchar(i + 48);
		ft_putchar(44);
		ft_putchar(32);
		i = i + 1;
	}
	ft_putchar(9 + 48);
}

void	ft_print_combn(int n)
{
	char	tab[n];
	int		i;

	if (n == 1)
	{
		affichage2();
	}
	else
	{
		i = 0;
		while (i <= 10 - n)
		{
			tab[0] = i;
			aux(n, 1, tab);
			i = i + 1;
		}
	}
}
