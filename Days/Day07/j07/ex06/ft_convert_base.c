/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:57:15 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/12 18:14:58 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i = i + 1;
	return (i);
}

int		ft_value_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i = i + 1;
	}
	return (-1);
}

int		ft_base_to_10(char *nbr, char *base)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (nbr[i])
		result = result * ft_strlen(base) + ft_value_in_base(nbr[i++], base);
	return (result);
}

char	*ft_10_to_base(int nbr, char *base)
{
	int		result;
	int		length;
	char	*traduction;

	result = nbr;
	while (result > 0)
	{
		result = result / ft_strlen(base);
		length = length + 1;
	}
	traduction = (char *)malloc(sizeof(char) * (length + 1));
	traduction[length] = '\0';
	while (nbr > 0)
	{
		length = length - 1;
		traduction[length] = base[nbr % ft_strlen(base)];
		nbr = nbr / ft_strlen(base);
	}
	return (traduction);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (ft_10_to_base(ft_base_to_10(nbr, base_from), base_to));
}
