/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 16:57:45 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 17:03:04 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main()
{
	int	i;

	i = -1;
	while (i <= 16)
	{
		printf("F(%d) = %d\n", i, ft_fibonacci(i));
		++i;
	}
	return (0);
}
