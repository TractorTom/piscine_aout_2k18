/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 20:32:33 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char 	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char	c[10]="Bonjour ";
	char	d[50]="les enfants";
	
//	printf("%s\n",strcat(c, d));
	printf("%s\n",ft_strcat(c, d));

	return (0);
}
