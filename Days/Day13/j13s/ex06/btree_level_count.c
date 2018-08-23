/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 21:13:08 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/23 21:04:14 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		maxi(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int		btree_level_count(t_btree *root)
{
	if (root == NULL)
		return (0);
	else
		return (1 + maxi(btree_level_count(root->left),
					btree_level_count(root->right)));
}
