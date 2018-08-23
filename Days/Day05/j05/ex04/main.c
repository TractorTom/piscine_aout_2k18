/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 13:01:41 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, int n);

void	ft_putstr(char *a);


int		main(void)
{
	char i[]="aabb123%^tvf";
	char j[]="uu2";
	
	printf("%s\n", i);
	printf("%s\n", j);
	ft_putstr(ft_strncpy(i, j, 3));
	printf("%s\n", i);
	printf("%s\n", j);
	return (0);
}
