/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 20:37:34 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 20:38:53 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
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
	while (c != '\0' && j < nb)
	{
		c = src[j++];
		dest[i + j] = c;
	}
	return (dest);
}
