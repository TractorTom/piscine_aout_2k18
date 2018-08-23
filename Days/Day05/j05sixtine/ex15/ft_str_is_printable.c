/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:22:40 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 05:19:11 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_printable(char c)
{
	if (c >= 33 && c <= 126)
		return (1);
	else
		return (0);
}

int		ft_str_is_printable(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = str[0];
	if (c == '\0')
		return (1);
	while (c != '\0')
	{
		if (!ft_char_is_printable(c))
			return (0);
		c = str[++i];
	}
	return (1);
}
