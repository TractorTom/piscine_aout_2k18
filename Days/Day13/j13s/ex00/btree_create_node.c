/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 05:14:36 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/23 20:53:33 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*arbre;

	arbre = (t_btree *)malloc(sizeof(t_btree));
	if (!arbre)
		return (NULL);
	arbre->right = NULL;
	arbre->left = NULL;
	arbre->item = item;
	return (arbre);
}
