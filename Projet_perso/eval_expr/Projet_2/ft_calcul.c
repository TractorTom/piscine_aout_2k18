/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 03:59:28 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 17:54:19 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "ft_opp.h"

int		ft_calcul(char c, int a, int b)
{
	int		i;
	int		(*f)(int, int);
	int		j;

	i = 0;
	j = 0;
	while (i < 5)
	{
		if (c == *g_opptab[i].s)
			f = g_opptab[i].o;
		i = i + 1;
	}
	return (f(a, b));
}

int		ft_value_calcul(char *str)
{
	int		i;
	char	*s1;

	if (*str == '(')
	{
		s1 = ft_str_nprems(str + 1, ft_len_str_bracket(str + 1));
		i = ft_calculator(s1, 0, 'a');
		free(s1);
		return (i);
	}
	else if (ft_is_num(*str))
		return (ft_put_str_num(str));
	else if (*str == '-')
		return (-ft_put_str_num(str + 1));
	else
		return (0);
}

int		ft_shift_index(char *str)
{
	if (*str == '(')
		return (ft_len_str_bracket(str + 1) + 1);
	else if (ft_is_num(*str))
		return (ft_len_str_num(str));
	else if (*str == '-')
		return (ft_len_str_num(str + 1) + 1);
	else
		return (0);
}

int		ft_calculator(char *str, int inter, char sng)
{
	int		result;

	if (*str == '\0')
		return (0);
	if (ft_is_op_prio(sng))
		result = ft_calcul(sng, inter, ft_value_calcul(str));
	else if (sng == '-')
		result = -ft_value_calcul(str);
	else
		result = ft_value_calcul(str);
	str = str + ft_shift_index(str);
	if (*str == '\0')
		return (result);
	else if (*str == '-')
		return (ft_calcul('+', result, ft_calculator(str + 1, 0, '-')));
	else if (ft_is_op_nprio(*str))
		return (ft_calcul(*str, result, ft_calculator(str + 1, 0, 'a')));
	else if (ft_is_op_prio(*str))
		return (ft_calculator(str + 1, result, *str));
	return (0);
}
