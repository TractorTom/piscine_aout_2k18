/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 22:37:07 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/13 14:13:37 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_count_word(char *str, char *charset)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i] && ft_is_separator(str[i], charset))
		i = i + 1;
	while (str[i])
	{
		while ((!(ft_is_separator(str[i], charset))) && str[i])
		{
			i = i + 1;
		}
		count = count + 1;
		while (str[i] && ft_is_separator(str[i], charset))
			i = i + 1;
	}
	return (count);
}

void	ft_complete(char **tab, char *str, int i, char *charset)
{
	int j;
	int length;

	j = 0;
	length = 0;
	while ((!(ft_is_separator(str[j], charset))) && str[j])
		j++;
	length = j;
	j = 0;
	tab[i] = (char *)malloc(sizeof(char) * (length + 1));
	if (tab[i] == NULL)
		return ;
	while ((!(ft_is_separator(str[j], charset))) && str[j])
	{
		tab[i][j] = str[j];
		j = j + 1;
	}
	tab[i][length] = '\0';
}

char	**ft_split2(char *str, char **tab, int nb_word, char *charset)
{
	int		i;

	i = 0;
	while (i < nb_word)
	{
		while (ft_is_separator(*str, charset))
			str++;
		ft_complete(tab, str, i, charset);
		while ((!(ft_is_separator(*str, charset))) && *str)
			str++;
		i = i + 1;
	}
	tab[nb_word] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nb_word;

	nb_word = ft_count_word(str, charset);
	tab = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (tab == NULL)
		return (NULL);
	if (nb_word == 0)
	{
		tab[0] = 0;
		return (tab);
	}
	return (ft_split2(str, tab, nb_word, charset));
}
