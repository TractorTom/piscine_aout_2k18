/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 23:25:24 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 00:42:41 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length <= 1)
		return (1);
	else
	{
		i = 0;
		while (f(tab[i], tab[i + 1]) == 0 && i < length - 1)
			i++;
		if (i == length - 1)
			return (1);
		else if (f(tab[i], tab[i + 1]) > 0)
		{
			while (i < length - 1)
			{
				if (f(tab[i], tab[i + 1]) < 0)
					return (0);
				i = i + 1;
			}
		}
		else
		{
			while (i < length - 1)
			{
				if (f(tab[i], tab[i + 1]) > 0)
					return (0);
				i = i + 1;
			}
		}
		return (1);
	}
}
