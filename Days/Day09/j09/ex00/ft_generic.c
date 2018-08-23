/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:58:39 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 12:23:16 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_tut_tut(void)
{
	ft_putchar('T');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar(' ');
	ft_putchar('t');
	ft_putchar('u');
	ft_putchar('t');
}

void	ft_generic(void)
{
	ft_tut_tut();
	ft_putchar(' ');
	ft_putchar(';');
	ft_putchar(' ');
	ft_tut_tut();
	ft_putchar('\n');
}
