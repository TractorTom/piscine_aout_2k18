/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:12:51 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/20 18:18:02 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	else if (begin_list->next == NULL)
		return (1);
	else
		return (1 + ft_list_size(begin_list->next));
}
