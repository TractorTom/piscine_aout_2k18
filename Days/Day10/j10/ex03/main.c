/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:00:30 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/14 22:57:21 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_any(char **tab, int(*f)(char *));

void	ft_putnbr(int n)
{
	printf("%d\n", n);
}

int		ft_changestr(char *str)
{
	if (*str == 'a')
		return (1);
	else
		return (0);
}

int		main(void)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * 5);
	tab[0] = "Bonjour";
	tab[1] = "Alo";
	tab[2] = "Aurevoir";
	tab[3] = "45353146";
	tab[4] = 0;
	ft_putnbr(ft_any(tab, &ft_changestr));
	free(tab);
	return (0);
}
