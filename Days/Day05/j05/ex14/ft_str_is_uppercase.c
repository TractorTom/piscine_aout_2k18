/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:18:11 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 05:16:07 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_str_is_uppercase(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = str[0];
	if (c == '\0')
		return (1);
	while (c != '\0')
	{
		if (!ft_char_is_uppercase(c))
			return (0);
		c = str[++i];
	}
	return (1);
}
