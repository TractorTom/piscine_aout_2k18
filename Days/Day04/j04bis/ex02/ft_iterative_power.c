/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 16:38:41 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/04 21:42:17 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else if (nb == -1)
	{
		if (power % 2 == 0)
			return (1);
		else
			return (-1);
	}
	else
	{
		result = 1;
		while (power > 0)
		{
			result = result * nb;
			power = power - 1;
		}
		return (result);
	}
}
