/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edjubert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:14:34 by edjubert          #+#    #+#             */
/*   Updated: 2018/08/05 19:26:43 by edjubert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	print_sym(int height, int max_height, int row, int max_row)
{
	if ((row == 0 && height == 0) || (row == 0 && height == max_height))
		ft_putchar('A');
	else if ((row == max_row && height == 0) ||
			(row == max_row && height == max_height))
		ft_putchar('C');
	else if (height == 0 || height == max_height || row == 0 || row == max_row)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int max_height, int max_row)
{
	int row;
	int height;

	row = 0;
	max_row--;
	max_height--;
	if (max_height >= 0 && max_row >= 0)
	{
		while (row <= max_row)
		{
			height = 0;
			while (height < max_height)
			{
				print_sym(height, max_height, row, max_row);
				++height;
			}
			print_sym(height, max_height, row, max_row);
			++row;
			ft_putchar('\n');
		}
	}
}
