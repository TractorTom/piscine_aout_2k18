/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:00:30 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/15 21:38:58 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_wordtab(char **tab);

char	**ft_split_whitespaces(char *str);

void	ft_putstr(char *str)
{
	printf("%s\n", str);
}

void	ft_display(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		ft_putstr(tab[i++]);
	printf("\n");
}

int		main(void)
{
	char *tab;
	char **b;

	tab = "Et C parti on recommence !!!";
	b = ft_split_whitespaces(tab);
	ft_display(b);
	ft_sort_wordtab(b);
	ft_display(b);
	return (0);
}
