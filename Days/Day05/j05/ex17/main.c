/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 20:40:39 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char 	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char	c[50]="Bonjour ";
	char	d[50]="les enfants";
	
	printf("%s\n",strncat(c, d, 0));
	printf("%s\n",ft_strncat(c, d, 0));

	return (0);
}
