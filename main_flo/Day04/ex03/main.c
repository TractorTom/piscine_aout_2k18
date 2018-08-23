/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:19:15 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 16:17:25 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main()
{
	int	power;
	int	nb;

	nb = 2;
	printf("%d^%d = %d\n", 2, -1, ft_recursive_power(2, -1));
	printf("%d^%d = %d\n", -2, 3, ft_recursive_power(-2, 3));
	printf("%d^%d = %d\n", -2, 4, ft_recursive_power(-2, 4));
	printf("%d^%d = %d\n", -2, 5, ft_recursive_power(-2, 5));
	while (nb < 10)
	{
		power = 0;
		while (power <= 5)
		{
			printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
			++power;
		}
		++nb;
	}
	return (0);	
}
