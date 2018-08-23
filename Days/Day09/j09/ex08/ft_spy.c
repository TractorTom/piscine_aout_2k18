/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 06:12:32 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 12:43:18 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alert(void)
{
	char c;

	c = 'A';
	write(1, &c, 1);
	c = 'l';
	write(1, &c, 1);
	c = 'e';
	write(1, &c, 1);
	c = 'r';
	write(1, &c, 1);
	c = 't';
	write(1, &c, 1);
	c = '!';
	write(1, &c, 1);
	c = '!';
	write(1, &c, 1);
	c = '!';
	write(1, &c, 1);
	c = '\n';
	write(1, &c, 1);
}

int		ft_condition_2(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int		ft_condition(int len, char *str)
{
	int j;

	j = 0;
	if (len >= 5 && (str[j] == 'B' || str[j] == 'b') && (str[j + 1]
		== 'A' || str[j + 1] == 'a') && (str[j + 2] == 'U' || str[j + 2]
		== 'u') && (str[j + 2] == 'E' || str[j + 3] == 'e') && (str[j + 4]
		== 'R' || str[j + 4] == 'r'))
		return (ft_condition_2(str + 5));
	if (len >= 6 && (str[j] == 'A' || str[j] == 'a') && (str[j + 1]
		== 'T' || str[j + 1] == 't') && (str[j + 2] == 'T' || str[j + 2]
		== 't') && (str[j + 2] == 'A' || str[j + 3] == 'a') && (str[j + 4]
		== 'C' || str[j + 4] == 'c') && (str[j + 5] == 'k' || str[j + 5]
		== 'K'))
		return (ft_condition_2(str + 6));
	if (len >= 9 && (str[j] == 'P' || str[j] == 'p') && (str[j + 1]
		== 'R' || str[j + 1] == 'r') && (str[j + 2] == 'E' || str[j + 2]
		== 'e') && (str[j + 3] == 'S' || str[j + 3] == 's') && (str[j + 4]
		== 'I' || str[j + 4] == 'i') && (str[j + 5] == 'D' || str[j + 5]
		== 'd') && (str[j + 6] == 'E' || str[j + 6] == 'e') && (str[j + 7]
		== 'N' || str[j + 7] == 'n') && (str[j + 8] == 'T' || str[j + 8]
		== 't'))
		return (ft_condition_2(str + 9));
	return (0);
}

int		ft_spy(int len, char **range)
{
	int		i;
	int		j;
	int		length;
	char	*str;

	i = 1;
	while (i < len)
	{
		str = range[i];
		length = 0;
		while (str[length])
			length++;
		j = 0;
		while (str[j] && str[j] == ' ')
			j++;
		if (ft_condition(length - j, str + j))
		{
			ft_alert();
			return (0);
		}
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
		ft_spy(ac, av);
	return (0);
}
