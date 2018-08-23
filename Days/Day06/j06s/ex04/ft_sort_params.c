/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 22:51:25 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/08 02:04:33 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		ft_is_inf(char *str, char *str2)
{
	int i;

	i = 0;
	while (str[i] == str2[i] && str[i] != 0)
		i++;
	if (str[i] < str2[i])
		return (1);
	else
		return (0);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort(char **str, int size)
{
	int		i;
	int		j;

	i = size - 1;
	while (i > 0)
	{
		j = 1;
		while (j < i)
		{
			if (ft_is_inf(str[j], str[j + 1]))
				ft_swap(&str[j], &str[j + 1]);
			j = j + 1;
		}
		ft_putstr(str[i--]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	ft_sort(argv, argc);
	return (0);
}
