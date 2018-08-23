/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:26:22 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/14 22:48:51 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*tab2;
	int		i;

	tab2 = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i = i + 1;
	}
	return (tab2);
}
