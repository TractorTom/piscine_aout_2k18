/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:57:15 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/13 11:44:43 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_10_to_base2(long nbr, char *base, int length);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i = i + 1;
	return (i);
}

long	ft_base_to_10(char *nbr, char *base)
{
	int		i;
	long	result;
	int		j;

	i = 0;
	result = 0;
	if (*nbr == '-')
		return (-ft_base_to_10(++nbr, base));
	while (nbr[i])
	{
		j = 0;
		while (base[j] != nbr[i])
			j++;
		result = result * ft_strlen(base) + j;
		i = i + 1;
	}
	return (result);
}

char	*ft_10_to_base(long nbr, char *base)
{
	long	result;
	int		length;
	char	*traduction;

	length = 0;
	if (nbr < 0)
		length = 1;
	else if (nbr == 0)
	{
		traduction = (char *)malloc(sizeof(char) * 2);
		traduction[0] = base[0];
		traduction[1] = '\0';
		return (traduction);
	}
	result = (1 - 2 * length) * nbr;
	while (result > 0)
	{
		result = result / ft_strlen(base);
		length = length + 1;
	}
	return (ft_10_to_base2(nbr, base, length));
}

char	*ft_10_to_base2(long nbr, char *base, int length)
{
	int		result;
	char	*traduction;

	result = 0;
	traduction = (char *)malloc(sizeof(char) * (length + 1));
	if (traduction == NULL)
		return (0);
	if (nbr < 0)
	{
		traduction[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		traduction[length - ++result] = base[nbr % ft_strlen(base)];
		nbr = nbr / ft_strlen(base);
	}
	traduction[length] = '\0';
	return (traduction);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (ft_10_to_base(ft_base_to_10(nbr, base_from), base_to));
}
