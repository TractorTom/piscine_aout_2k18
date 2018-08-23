/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:54:03 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 00:09:31 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	else
	{
		i = 0;
		while (nb > i * i)
			i = i + 1;
		return (i);
	}
}

int		ft_is_prime(int nb)
{
	int i;
	int j;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		j = 2;
		i = ft_sqrt(nb);
		while (j <= i)
		{
			if (nb % j == 0)
				return (0);
			j = j + 1;
		}
		return (1);
	}
}

int		ft_find_next_prime(int nb)
{
	int	j;

	j = 0;
	while (!(ft_is_prime(nb + j)))
		j = j + 1;
	return (nb + j);
}
