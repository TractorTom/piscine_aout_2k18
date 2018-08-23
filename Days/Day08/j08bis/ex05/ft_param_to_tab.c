/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:08:22 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/15 18:22:30 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
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

struct s_stock_par	ft_param(char *str)
{
	struct s_stock_par	stock;

	stock.tab = ft_split_whitespaces(str);
	stock.size_param = ft_strlen(str);
	stock.str = str;
	stock.copy = ft_strdup(str);
	return (stock);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*stock;
	int					i;

	i = 0;
	stock = (struct s_stock_par *)
		malloc(sizeof(struct s_stock_par) * (ac + 1));
	if (stock == NULL)
		return (NULL);
	while (i < ac)
	{
		stock[i] = ft_param(av[i]);
		i = i + 1;
	}
	stock[ac].size_param = 0;
	stock[ac].str = "\0";
	stock[ac].copy = "\0";
	stock[ac].tab = NULL;
	return (stock);
}
