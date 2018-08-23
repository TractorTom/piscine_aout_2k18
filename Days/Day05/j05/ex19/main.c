/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 01:02:09 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	c[15]="aabbcc";
	char	d[]="1234";

	printf("%lu\n",strlcpy(c, d, 8));
	
	return (0);
}
