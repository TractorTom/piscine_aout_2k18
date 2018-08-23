/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 14:53:29 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 20:05:23 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_len(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i = i + 1;
	return (i);
}

int		ft_value_inverse(char c, char *base)
{
	int i;

	i = 0;
	while (i < ft_str_len(base) && c != base[i])
	{
		i = i + 1;
	}
	if (i == ft_str_len(base))
		return (-1);
	else
		return (i);
}

int		ft_rec(char *str, char *base)
{
	int result;
	int i;

	if (str[0] == '\0')
		return (0);
	else
	{
		i = 0;
		result = 0;
		while (i < ft_str_len(str))
			result = ft_str_len(base) * result
				+ ft_value_inverse(str[i++], base);
		return (result);
	}
}

int		ft_is_good(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < ft_str_len(base))
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (j < ft_str_len(str))
		{
			if (ft_value_inverse(str[j++], base) == -1)
				return (0);
		}
		j = i + 1;
		while (j < ft_str_len(base))
		{
			if (base[i] == base[j++])
				return (0);
		}
		i = i + 1;
	}
	return ((ft_str_len(base)) ? 1 : 0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i = i + 1;
	if (str[i] == '+' && ft_is_good(&str[i + 1], base))
		return (ft_rec(&str[i + 1], base));
	else if (str[i] == '-' && ft_is_good(&str[i + 1], base))
		return (-ft_rec(&str[i + 1], base));
	else if (ft_is_good(&str[i], base))
		return (ft_rec(&str[i], base));
	else
		return (0);
}
