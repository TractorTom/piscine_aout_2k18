/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edjubert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:06:49 by edjubert          #+#    #+#             */
/*   Updated: 2018/08/05 19:19:46 by edjubert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	print_sym(int row, int max_row, int height, int max_height)
{
	if ((height == 0 && row == 0) ||
			(max_height != 0 && height == max_height &&
			(row == max_row && max_row > 0)))
		ft_putchar('/');
	else if ((height == 0 && row == max_row) ||
			(height == max_height && row == 0) ||
			(max_height == 0 && row == max_row))
		ft_putchar('\\');
	else if ((height == 0 || height == max_height) ||
			(row == 0 || row == max_row))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int max_row, int max_height)
{
	int height;
	int row;

	height = 0;
	max_height--;
	max_row--;
	if (max_row >= 0 && max_height >= 0)
	{
		while (height <= max_height)
		{
			row = 0;
			while (row < max_row)
			{
				print_sym(row, max_row, height, max_height);
				++row;
			}
			print_sym(row, max_row, height, max_height);
			++height;
			ft_putchar('\n');
		}
	}
}
