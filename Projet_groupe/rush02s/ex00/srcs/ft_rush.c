/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:17:04 by pvinson           #+#    #+#             */
/*   Updated: 2018/08/19 17:47:12 by pvinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "ft.h"

void	ft_rush(void)
{
	t_rush	*tr;
	char	c;
	int		sizex;
	int		sizey;

	tr = ft_init_t_rush();
	if (!tr)
		return ft_none();
	sizey = 0;
	while (read(0, &c, 1) && c != '\0')
	{
		tr->lines[sizey] = malloc(LINESIZE * sizeof(char));
		if (!tr->lines[sizey])
			return (ft_none());
		tr->lines[sizey][0] = c;
		sizex = 0;
		while (read(0, &c, 1) && c != '\n' && c != '\0')
			tr->lines[sizey][++sizex] = c;
		if (c == '\0' && sizex > 0)
			return (ft_none());
		tr->lines[sizey][++sizex] = '\0';
		sizey++;
	}
	if (!sizey)
		return (ft_none());
	ft_check(tr, sizey);
	ft_results(tr->cases, sizex, sizey);
	ft_free_t_rush(tr);
}
