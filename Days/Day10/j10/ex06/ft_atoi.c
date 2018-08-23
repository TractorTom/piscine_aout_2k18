/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 00:14:35 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 00:31:19 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		result;
	int		signe;

	signe = 1;
	result = 0;
	while (ft_is_space(*str))
		str++;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			result = 10 * result + *str - 48;
		else
			return (signe * result);
		str++;
	}
	return (signe * result);
}
