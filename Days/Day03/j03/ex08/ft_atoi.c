/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 00:12:24 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/08 20:05:55 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_condition(int val, char *str)
{
	char	c;
	int		resultat;

	c = *(str++);
	resultat = val;
	while (c >= 48 && c <= 56)
	{
		resultat = 10 * resultat + c - 48;
		c = *(str++);
	}
	return (resultat);
}

int		ft_atoi(char *str)
{
	char	c;
	char	d;

	c = *(str++);
	while (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r')
	{
		c = *(str++);
	}
	if (c >= 48 && c <= 57)
		return (ft_condition(c - 48, str));
	else if (c == '+' || c == '-')
	{
		d = *(str++);
		if (d >= 48 && d <= 57 && c == '+')
			return (ft_condition(d - 48, str));
		else if (d >= 48 && d <= 57 && c == '-')
			return ((-1) * ft_condition(d - 48, str));
		else
			return (0);
	}
	else
		return (0);
}
