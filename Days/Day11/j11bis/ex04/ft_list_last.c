/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:16:27 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/16 20:34:31 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (NULL);
	else if (begin_list->next == NULL)
		return (begin_list);
	else
		return (ft_list_last(begin_list->next));
}
