/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pass.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 02:52:57 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 17:27:35 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_str_nprems(char *s1, int length)
{
	char	*st2;
	int		index;

	length = length - 1;
	st2 = (char *)malloc(sizeof(char) * (length + 1));
	if (st2 == NULL)
		return (st2);
	index = 0;
	while (index < length)
	{
		st2[index] = s1[index];
		index++;
	}
	st2[length] = '\0';
	return (st2);
}

int		ft_len_str_bracket(char *str)
{
	int		length;
	int		count;

	length = 0;
	count = 1;
	while (count != 0 && str[length])
	{
		if (str[length] == '(')
			count++;
		else if (str[length] == ')')
			count--;
		length++;
	}
	return (length);
}

int		ft_put_str_num(char *str)
{
	int		result;
	int		i;

	i = 0;
	result = 0;
	while (ft_is_num(str[i]))
	{
		result = 10 * result + str[i] - 48;
		i++;
	}
	return (result);
}

int		ft_len_str_num(char *str)
{
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (ft_is_num(str[i]))
	{
		length++;
		i++;
	}
	return (length);
}
