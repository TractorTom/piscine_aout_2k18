/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:33:45 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 20:00:44 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	c = dest[0];
	while (c != '\0')
		c = dest[++i];
	j = 0;
	c = src[j];
	while (c != '\0')
	{
		c = src[j++];
		dest[i + j] = c;
	}
	return (dest);
}
