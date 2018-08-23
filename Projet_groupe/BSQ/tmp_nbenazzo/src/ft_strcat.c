/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 23:29:26 by nbenazzo          #+#    #+#             */
/*   Updated: 2018/08/19 21:22:53 by nbenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlencat(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int lensrc;
	int lendest;
	int total;
	int index;

	index = 0;
	lensrc = ft_strlencat(src);
	lendest = ft_strlencat(dest);
	total = lensrc + lendest + 1;
	while (lendest < total)
	{
		dest[lendest] = src[index];
		index++;
		lendest++;
	}
	return (dest);
}
