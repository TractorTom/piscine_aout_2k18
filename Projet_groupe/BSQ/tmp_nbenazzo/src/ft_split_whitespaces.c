/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:01:34 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/20 23:19:30 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_count_word(char *str)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (ft_is_space(str[i]))
		i = i + 1;
	while (str[i])
	{
		while ((!(ft_is_space(str[i]))) && str[i])
		{
			i = i + 1;
		}
		count = count + 1;
		while (ft_is_space(str[i]))
			i = i + 1;
	}
	return (count);
}

void	ft_complete(char **tab, char *str, int i)
{
	int j;
	int length;

	j = 0;
	length = 0;
	while ((!(ft_is_space(str[j]))) && str[j])
		j++;
	length = j;
	j = 0;
	tab[i] = (char *)malloc(sizeof(char) * (length + 1));
	if (tab[i] == NULL)
		return ;
	while ((!(ft_is_space(str[j]))) && str[j])
	{
		tab[i][j] = str[j];
		j = j + 1;
	}
	tab[i][length] = '\0';
}

char	**ft_split2(char *str, char **tab, int nb_word)
{
	int		i;

	i = 0;
	while (i < nb_word)
	{
		while (ft_is_space(*str))
			str++;
		ft_complete(tab, str, i);
		while (!(ft_is_space(*str)) && *str)
			str++;
		i = i + 1;
	}
	tab[nb_word] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		nb_word;

	nb_word = ft_count_word(str);
	tab = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (tab == NULL)
		return (NULL);
	if (nb_word == 0)
	{
		tab[0] = 0;
		return (tab);
	}
	return (ft_split2(str, tab, nb_word));
}
