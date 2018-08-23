/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfirstgrid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:46:43 by nbenazzo          #+#    #+#             */
/*   Updated: 2018/08/22 00:59:29 by nbenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*recuplineone(int file)
{
	char	buffer[2];
	int		ret;
	char	*tmp;
	char	*str;
	int		len;

	if (!(str = (char*)malloc(sizeof(char))))
		return (0);
	*str = '\0';
	while ((ret = read(file, buffer, 1)) && (buffer[ret - 1] != '\n'
				&& buffer[ret - 1] != '\0'))
	{
		g_nbrcol = g_nbrcol + 1;
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
