/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfirstline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:14:29 by nbenazzo          #+#    #+#             */
/*   Updated: 2018/08/22 01:02:11 by nbenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*recupfirstline(int file)
{
	char	buffer[2];
	int		ret;
	char	*tmp;
	char	*str;
	int		len;

	if (!(str = (char*)malloc(sizeof(char))))
		return (0);
	*str = '\0';
	while ((ret = read(file, buffer, 1)) && buffer[ret -1] != '\n')
	{
		tmp = str;
		len = ft_strlen(tmp);
		str = ft_strcpy((char*)malloc(sizeof(char) * (len + ret + 1)), tmp);
		free(tmp);
		if (!(str))
			return (0);
		buffer[ret] = '\0';
		str = ft_strcat(str, buffer);
	}
	return (str);
}

int		recupinfofirstline(char *str)
{
	int len;
	int index;

	index = 2;
	len = ft_strlen(str);
	if (len < 4 || (str[len - 1] == str[len - 2] || str[len - 3] == str[len - 2] 
				|| str[len - 1] == str[len - 3]))
		return (0);
	while (index >= 0)
	{
		if (str[len - 1] < 32 || str[len - 1] >=127)
			return (0);
		g_info[index] = str[len - 1];
		len--;
		index--;
	}
	str[len - (index +1)] = '\0';
	g_nbrligne = ft_atoi(str);
	return (1);
}
