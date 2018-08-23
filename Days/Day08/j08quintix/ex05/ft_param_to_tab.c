/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:08:22 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/15 19:49:07 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int				ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;

	stock = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (stock == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i = i + 1;
	}
	stock[i].str = 0;
	return (stock);
}
