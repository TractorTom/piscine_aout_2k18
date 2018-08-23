/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 00:38:42 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	c[15]="je suis ";
	char	d[]="a 42 ";

	printf("%lu\n",strlcat(c, d, 0));
	printf("%s\n",c);
	return (0);
}
