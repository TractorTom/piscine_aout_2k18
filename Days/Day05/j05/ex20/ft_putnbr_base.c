/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 01:04:11 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 14:56:27 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i = i + 1;
	return (i);
}

int		ft_is_good(char *base)
{
	int i;
	int	j;

	if (ft_str_len(base) <= 1)
		return (0);
	i = 0;
	while (i < ft_str_len(base))
	{
		j = i + 1;
		while (j < ft_str_len(base))
		{
			if (base[i] == base[j++] || base[i] == '+' || base[i] == '-')
				return (0);
		}
		i = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		n_base;
	long	nb;

	nb = nbr;
	if (ft_is_good(base))
	{
		n_base = ft_str_len(base);
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= n_base)
		{
			ft_putnbr_base(nb / n_base, base);
			ft_putchar(base[nb % n_base]);
		}
		else if (nb >= 0)
			ft_putchar(base[nb % n_base]);
	}
}
