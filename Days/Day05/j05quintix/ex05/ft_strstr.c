/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 13:05:21 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/07 19:18:04 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i = i + 1;
	return (i);
}

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
	if (str[i + index] == '\0' && to_find[i] == '\0')
		return (1);
	else if (str[i + index] == '\0')
		return (0);
	else
		return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	c;
	char	*ptr;

	if (to_find[0] == 0)
		return (str);
	i = 0;
	c = str[i];
	while (!ft_check(str, to_find, i) && c != '\0')
	{
		i = i + 1;
		c = str[i];
	}
	if (c == '\0')
		return (0);
	ptr = &str[i];
	return (ptr);
}
