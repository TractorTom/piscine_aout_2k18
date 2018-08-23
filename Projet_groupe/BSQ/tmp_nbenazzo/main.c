/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 08:23:32 by nbenazzo          #+#    #+#             */
/*   Updated: 2018/08/22 01:45:12 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char *argv[])
{
	int file;
	int index;

	if ((index = 1) && argc > 1)
	{
		while(index < argc)
		{
			file = open(argv[index], O_RDONLY);
			if (file == -1)
				return (0);
			funcall(file);
			close(file);
			ft_putchar('\n');
			index++;
		}
	}
	else
	{
		funcall(0);
		ft_putchar('\n');
	}
	return (0);
}
