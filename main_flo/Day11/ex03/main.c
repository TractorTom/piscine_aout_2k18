/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:59:52 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/16 20:31:10 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data);

int	ft_list_size(t_list *begin_list);

int	main()
{
	t_list	*list;
	int		i;
	char	*tab[] = {"Hello...", "It's me...", "I've been", "if after all", "these years you'd", "like to meet", "HEELLLOOOOO FROM THE OTHERSIIIIIDE", "I MUST HAVE CALLED A THOUSAND TIIIIMES", NULL};

	list = NULL;
	i = 0;
	printf("Size of list with 0 elements : %d\n", ft_list_size(list));
	ft_list_push_front(&list, "Hello...");	
	printf("Size of list with 1 elements : %d\n", ft_list_size(list));
	while (tab[i] != NULL)
		ft_list_push_front(&list, tab[i++]);
	printf("Size of list with 9 elements : %d\n", ft_list_size(list));
	return (0);
}
