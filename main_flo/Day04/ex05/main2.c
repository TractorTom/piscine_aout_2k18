/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:11:21 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/02 00:23:29 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int main()
{
	int	nb;

	nb = 2147483647;
	printf("INT Square root of %d : %d\n", nb, ft_sqrt(nb));
	return (0);
}
