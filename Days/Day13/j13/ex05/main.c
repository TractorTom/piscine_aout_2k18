/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 05:39:29 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 21:19:02 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <string.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *));

t_btree	*btree_create_node(void *item);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (str == NULL)
		ft_putchar('a');
	else
		while (*str)
			ft_putchar(*(str++));
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_cmp(char *s1, char *s2)
{
	return (ft_strlen(s1) - ft_strlen(s2));
}

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
	ft_putstr(btree_search_item(arbre0, "bo", ft_cmp));
	return (0);
}
