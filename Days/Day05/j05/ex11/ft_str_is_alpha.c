/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:16:30 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 18:16:35 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alpha(c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int		ft_str_is_alpha(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = str[0];
	if (c == '\0')
		return (1);
	while (c != '\0')
	{
		if (!ft_char_is_alpha(c))
			return (0);
		c = str[++i];
	}
	return (1);
}
