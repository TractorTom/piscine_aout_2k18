/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 00:28:01 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putstr(char *a);


int		main(void)
{
	char i[]="aabb123%^tvf";
	char j[]="ee";
	
	printf("%s\n", i);
	printf("%s\n", j);
	ft_putstr(ft_strcpy(i, j));
//	printf("%s\n", i);
//	printf("%s\n", j);
	return (0);
}
