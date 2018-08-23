/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edjubert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 10:28:42 by edjubert          #+#    #+#             */
/*   Updated: 2018/08/05 16:28:27 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int i, int j);

int		ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || 
				(i == 0 && (str[i] == '-' || str[i] == '+')) || str[i] == ' ' ||
				(str[i] == '\t' && str[i] == '\n' && str[i] == '\r' && str[i] == '\v'))
		{
			if (str[i] != '-' && str[i] != '+' && str[i] != '\t' && str[i] != '\n' &&
					(str[i] != '\r' && str[i] != '\v' && str[i] != ' '))
				res = res * 10 + str[i] - 48;
			i++;
		}
		else
			return (str[0] == '-' ? res * -1 : res);
	}
	return (str[0] == '-' ? res * -1 : res);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		rush(5, 2);
	return (0);
}
