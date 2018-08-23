/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 15:41:09 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *dest, char *to_find);

void	ft_putstr(char *a);

int		main(int ac, char **av)
{
	printf("%d\n", strcmp(av[1], av[2]));
	printf("%d\n", ft_strcmp(av[1], av[2]));
	return (0);
}
