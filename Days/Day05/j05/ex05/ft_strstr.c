/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 13:05:21 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 14:49:50 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(char *str, char *to_find, int index)
{
	int i;

	i = 0;
	while (to_find[i] != '\0' && str[i + index] != '\0')
	{
		if (str[i + index] != to_find[i])
			return (0);
		i = i + 1;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	c;
	char	*ptr;

	i = 0;
	c = str[i];
	while (!ft_check(str, to_find, i) && c != '\0')
	{
		i = i + 1;
		c = str[i];
	}
	if (c == '\0')
		return ("(null)");
	ptr=&str[i];
	return (ptr);
}
