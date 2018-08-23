/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 08:30:29 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 16:31:47 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_swap(char **tab, char *str, int j)
{
	int i;

	i = 0;
	while (str[i])
	{
		tab[j][i] = str[i];
		i = i + 1;
	}
}

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	c = '\0';
	while (i < length)
	{
		if (tab[i] != NULL && i > j)
		{
			ft_swap(tab, tab[i], j);
			tab[i] = &c;
			j = j + 1;
		}
		i = i + 1;
	}
	return (j);
}
