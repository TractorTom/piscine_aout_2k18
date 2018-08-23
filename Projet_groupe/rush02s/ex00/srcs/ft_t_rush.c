/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_t_rush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:29:05 by pvinson           #+#    #+#             */
/*   Updated: 2018/08/18 21:01:55 by pvinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_rush		*ft_init_t_rush(void)
{
	t_rush *tr;
	int		i;

	tr = malloc(sizeof(t_rush));
	if (!tr)
		return (NULL);
	tr->cases = malloc(NBCASES * sizeof(int));
	if (!tr->cases)
		return (NULL);
	i = -1;
	while (++i < NBCASES)
		tr->cases[i] = 1;
	tr->lines = malloc(NBLINES * sizeof(char *));
	if (!(tr->lines))
		return (NULL);
	return (tr);
}

void		ft_free_t_rush(t_rush *tr)
{
	int i;

	free(tr->cases);
	i = -1;
	while (tr->lines[++i])
		free(tr->lines[i]);
	free(tr->lines);
	free(tr);
}
