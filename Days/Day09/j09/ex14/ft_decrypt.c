/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 08:44:05 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 16:01:39 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_perso.h"

int			ft_length(char *str)
{
	int	i;
	int	len;

	i = 0;
	while (str[i])
	{
		if (str[i] == '|')
			len = len + 1;
		i = i + 1;
	}
	return (len + 1);
}

int			*ft_name(char *str, int i, t_perso **tab, int k)
{
	int		j;

	j = 0;
	while (str[i + j] && str[i] != ';')
		j = j + 1;
	(*tab[k]).name = (char *)malloc(sizeof(char) * (j + 1));
	j = 0;
	while (str[i + j] && str[i] != ';')
	{
		(*tab[k]).name[j] = str[i + j];
		j = j + 1;
	}
	(*tab[k]).name[j] = '\0';
	return (0);
}

t_perso		**ft_decrypt(char *str)
{
	t_perso		**tab;
	int			i;
	int			result;
	int			j;

	i = 0;
	j = 0;
	tab = (t_perso **)malloc(sizeof(t_perso *) * (ft_length(str) + 1));
	while (str[i])
	{
		result = 0;
		while (str[i] && str[i] != '|')
			result = 10 * result + str[i++] - 48;
		if (str[i])
			i = i + 1;
		tab[j][0].age = result;
		ft_name(str, i, tab, j);
		while (str[i] && str[i] != ';')
			i = i + 1;
		j = j + 1;
		if (str[i])
			i = i + 1;
	}
	return (tab);
}
