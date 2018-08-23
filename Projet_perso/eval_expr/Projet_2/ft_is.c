/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 00:42:55 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 01:50:47 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_is_num(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int		ft_is_space(char c)
{
	if ((c <= 13 && c >= 9) || c == ' ')
		return (1);
	return (0);
}

int		ft_is_op_prio(char c)
{
	if (c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

int		ft_is_op_nprio(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}
