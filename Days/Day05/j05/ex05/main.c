/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/07 10:51:28 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *dest, char *to_find);

void	ft_putstr(char *a);


int		main(void)
{
	char i[]="6456456";
	char j[]="";
	
	printf("%s\n", i);
	printf("%s\n", j);
//	ft_putstr(ft_strstr(i, j));
	printf("%s\n", ft_strstr(i, j));
	printf("%s\n", strstr(i, j));
	printf("%s\n", i);
	printf("%s\n", j);
	return (0);
}
