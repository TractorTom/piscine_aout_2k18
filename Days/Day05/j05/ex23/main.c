/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/23 22:14:20 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	char	d[]="ba";

	ft_putnbr_base(25, d);	
	return (0);
}
