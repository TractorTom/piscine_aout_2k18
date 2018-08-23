/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 20:02:58 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/21 20:15:08 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"
#include "ft_header.h"

void	ft_aff_rect(t_rectangle rect)
{
	ft_putstr("x = ");
	ft_putnbr((rect.point).x);
	ft_putchar('\n');
	ft_putstr("y = ");
	ft_putnbr((rect.point).y);
	ft_putchar('\n');
	ft_putstr("longueur = ");
	ft_putnbr(rect.length);
	ft_putchar('\n');
	ft_putstr("hauteur = ");
	ft_putnbr(rect.height);
	ft_putchar('\n');
}

void	ft_aff_list(t_list *liste)
{
	if (liste == NULL)
		return ;
	else
	{
		ft_aff_rect(liste->data);
		ft_putchar('\n');
		ft_aff_list(liste->next);
	}
}
