/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:58:15 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/16 20:49:56 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av);

int	main(int argc, char **argv)
{
	t_list	*list;
	int		i;

	i = 1;
	list = ft_list_push_params(argc - 1, argv + 1);
	if (list == NULL)
		printf("List is NULL.\n");
	while (list != NULL)
	{
		printf("Element %d : %s\n", i, list->data);
		list = list->next;
		++i;
	}
}
