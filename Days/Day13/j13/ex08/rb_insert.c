/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 00:54:34 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/23 05:14:53 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree_rb.h"

t_rb_node	*create_rb_btree_node(void *data)
{
	t_rb_node		*arbre;

	arbre = (t_rb_node *)malloc(sizeof(t_rb_node));
	if (!arbre)
		return (NULL);
	arbre->color = RB_RED;
	arbre->data = data;
	arbre->left = NULL;
	arbre->right = NULL;
	arbre->parent = NULL;
}

t_rb_node	**insert(struct s_rb_node **root, void *data, int (*cmpf)(void *,
		void *))
{
	t_rb_node		*arbre;

	arbre = create_rb_btree_node(data);
	if (cmpf(data, (*root)->data) > 0)
	{
		if ((*root)->right == NULL)
		{
			arbre->parent = *root;
			(*root)->right = arbre;
		}
		else
			return (insert(&((*root)->right), data, cmpf));
	}
	else
	{
		if ((*root)->left == NULL)
		{
			arbre->parent = *root;
			(*root)->left = arbre;
		}
		else
			return (insert(&((*root)->left), data, cmpf));
	}
	return (root);
}

void		rb_insert(struct s_rb_node **root, void *data,
			int (*cmpf)(void *, void *))
{
	t_rb_node		*arbre;
	t_rb_node		**pere;

	arbre = create_rb_btree_node(data);
	if (*root == NULL)
		*root = arbre;
	else
	{
		pere = insert(root, data, cmpf);
		if ((*pere)->parent == NULL)
			return ;
		else if ((*pere)->color == RB_RED)
		{
			if ((*pere)->
		}
	}
}

void	rotation de node 1 et de son fils:
