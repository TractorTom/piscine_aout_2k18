/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 05:39:29 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/23 00:14:00 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <string.h>

int		btree_level_count(t_btree *root);

t_btree	*btree_create_node(void *item);

int		main(int ac, char **av)
{
	t_btree	*arbre0;
	t_btree	*arbre1;
	t_btree	*arbre2;
	t_btree	*arbre3;
	t_btree	*arbre4;
	t_btree	*arbre5;

	arbre3 = btree_create_node(av[4]);
	arbre4 = btree_create_node(av[5]);
	arbre5 = btree_create_node(av[6]);
	arbre2 = btree_create_node(av[3]);
	arbre2->right = arbre5;
	arbre1 = btree_create_node(av[2]);
	arbre1->right = arbre4;
	arbre1->left = arbre3;
	arbre0 = btree_create_node(av[1]);
	arbre0->left = arbre1;
	arbre0->right = arbre2;
	printf("%d\n%d\n%d\n", btree_level_count(arbre0), btree_level_count(arbre5),
			btree_level_count(NULL));
	return (0);
}
