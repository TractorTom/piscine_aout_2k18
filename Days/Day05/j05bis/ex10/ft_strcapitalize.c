/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:16:42 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 04:39:06 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')
			|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = str[0];
	while (c != '\0')
	{
		while (!is_alphanumeric(c))
			c = str[++i];
		if (c >= 'a' && c <= 'z')
			str[i] = c - 32;
		c = str[++i];
		while (is_alphanumeric(c))
		{
			if (c >= 'A' && c <= 'Z')
				str[i] = c + 32;
			c = str[++i];
		}
	}
	return (str);
}
