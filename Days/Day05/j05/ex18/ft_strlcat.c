/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 23:22:08 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 00:24:53 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_len(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = str[i];
	while (c != '\0')
		c = str[++i];
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	c;
	int		i;
	int		j;

	i = ft_len(dest);
	j = 0;
	c = src[j];
	while (c != '\0' && i + j + 1 < size)
	{
		dest[i + j] = c;
		c = src[++j];
	}
	if (i + j + 1 == size)
		dest[size] = '\0';
	if (size <= i)
		return (size + ft_len(src));
	else
		return (ft_len(src) + i);
}
