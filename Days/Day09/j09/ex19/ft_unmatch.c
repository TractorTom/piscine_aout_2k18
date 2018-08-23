/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:44:25 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 14:53:53 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_has_pair(int *tab, int nbr, int length)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (tab[i] == nbr)
			count = count + 1;
		i = i + 1;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (0);
}

int		ft_unmatch(int *tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (!ft_has_pair(tab, tab[i], length))
			return (tab[i]);
		i = i + 1;
	}
	return (0);
}
