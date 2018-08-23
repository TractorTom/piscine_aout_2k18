/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 05:39:29 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 05:56:38 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree	*btree_create_node(void *item);

int		main(int ac, char **av)
{
	t_btree	*arbre;

	arbre = btree_create_node(av[1]);
	printf("%s\n", arbre->data);
	return (0);
}
