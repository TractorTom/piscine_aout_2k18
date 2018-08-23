/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:52:11 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/16 20:49:44 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*liste;

	if (ac == 0)
		return (NULL);
	else if (ac == 1)
		liste = ft_create_elem(av[0]);
	else
	{
		liste = ft_create_elem(av[0]);
		liste->next = ft_list_push_params(--ac, ++av);
	}
	return (liste);
}
