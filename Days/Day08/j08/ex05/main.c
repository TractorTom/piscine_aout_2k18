/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 20:09:07 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/13 20:35:30 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Test du 05 et 06

#include "ft_stock_par.h"
#include <stdio.h>

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

void				ft_show_tab(struct s_stock_par *par);

int					main(int ac, char **av)
{
	ft_show_tab(ft_param_to_tab(ac, av));
	return (0);
}


