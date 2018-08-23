/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:56:33 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/09 14:52:42 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **str);

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ft_print_words_tables(ft_split_whitespaces(av[1]));
	return (0);
}
