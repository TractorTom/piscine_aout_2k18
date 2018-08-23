/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 15:43:06 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/07 04:08:52 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = str[0];
	while (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
			str[i] = c - 32;
		i = i + 1;
		c = str[i];
	}
	return (str);
}
