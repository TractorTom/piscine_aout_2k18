/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:24:24 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/04 21:43:13 by tbarthel         ###   ########.fr       */
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
	int	i;
	int	j;

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
