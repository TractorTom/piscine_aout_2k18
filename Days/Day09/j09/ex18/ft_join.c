/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:59:45 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 16:23:48 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat(char *str1, char *str2, char *sep)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str1[i])
		i++;
	while (sep[j])
	{
		str1[i + j] = sep[j];
		j = j + 1;
	}
	i = i + j;
	j = 0;
	while (str2[j])
	{
		str1[i + j] = str2[j];
		j = j + 1;
	}
	str1[i + j] = '\0';
	return (str1);
}

int		ft_tablen(char **tab, char *sep)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		len = len + ft_strlen(tab[i]);
		i = i + 1;
	}
	return (len + 1 + (i - 1) * ft_strlen(sep));
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	char	*str;

	i = 1;
	if (tab == NULL)
		return ("");
	str = tab[0];
	while (tab[i] != NULL)
		str = ft_concat(str, tab[i++], sep);
	return (str);
}
