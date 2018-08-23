/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 00:26:02 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 00:51:57 by tbarthel         ###   ########.fr       */
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

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	c;
	int		i;
	int		j;

	if (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			dest[i] = src[i];
			i = i + 1;
		}
		dest[size - 1] = '\0';
	}
	return (ft_len(src));
}
