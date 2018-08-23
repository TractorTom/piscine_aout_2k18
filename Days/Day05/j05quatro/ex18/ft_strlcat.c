/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 23:22:08 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/08 11:32:41 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int		ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i = i + 1;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_len(dest);
	j = 0;
	while (src[j] && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j = j + 1;
	}
	if (i + j + 1 == size)
		dest[size - 1] = '\0';
	if (size <= i)
		return (size + ft_len(src));
	else
		return (ft_len(src) + i);
}
