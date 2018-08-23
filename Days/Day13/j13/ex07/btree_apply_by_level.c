/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 21:27:44 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/23 00:32:03 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		maxi(int a, int b)
{
	if (a > b)
		return (a);
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

void	btree_apply_leveln(t_btree *root, void (*applyf) (void *item,
		int current_level, int is_first_elem), int count, int *tab)
{
	if (root == NULL)
		return ;
	else if (count == 0)
		applyf(root->data, tab[0], tab[1]);
	else if (count > 0)
	{
		btree_apply_leveln(root->left, applyf, count - 1, tab);
		tab[1] = 0;
		btree_apply_leveln(root->right, applyf, count - 1, tab);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf) (void *item,
		int current_level, int is_first_elem))
{
	int		level;
	int		length;
	int		*tab;

	tab = (int *)malloc(sizeof(int) * 2);
	if (!tab)
		return ;
	level = 0;
	length = btree_level_count(root);
	while (level < length)
	{
		tab[0] = level;
		tab[1] = 1;
		btree_apply_leveln(root, applyf, level, tab);
		level++;
	}
	free(tab);
}
