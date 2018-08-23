/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:07:42 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/01 12:18:27 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main()
{
	int	a;
	int	b;

	a = 5;
	b = 42;
	printf("Before : a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After : a = %d, b = %d\n", a, b);
	return (0);
}