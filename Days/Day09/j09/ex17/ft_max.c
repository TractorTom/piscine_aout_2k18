/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:19:42 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 14:59:21 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int maxi;

	i = 0;
	maxi = tab[0];
	while (i < length)
	{
		if (tab[i] > maxi)
			maxi = tab[i];
		i = i + 1;
	}
	return (maxi);
}
