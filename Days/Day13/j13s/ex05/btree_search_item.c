/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:01:12 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/23 21:07:36 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return (NULL);
	else if (btree_search_item(root->left, data_ref, cmpf) == NULL)
	{
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		else
			return (btree_search_item(root->right, data_ref, cmpf));
	}
	else
		return (btree_search_item(root->left, data_ref, cmpf));
}
