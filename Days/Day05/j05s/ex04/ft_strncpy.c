/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 12:45:15 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/07 04:13:09 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			c;

	i = 0;
	c = src[i];
	while (c != '\0' && i < n)
	{
		c = src[i];
		dest[i] = c;
		i = i + 1;
	}
	return (dest);
}
