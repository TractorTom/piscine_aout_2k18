/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdescler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:26:55 by jdescler          #+#    #+#             */
/*   Updated: 2018/08/05 18:28:53 by edjubert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	print_sym(int col, int max_col, int row, int max_row)
{
	if ((col == 0 && (row == 0 || row == max_row)) ||
			(col == max_col && (row == 0 || row == max_row)))
	{
		ft_putchar('o');
	}
	else if ((col != 0 && col != max_col) && (row == 0 || row == max_row))
	{
		ft_putchar('-');
	}
	else if ((row != 0 && row != max_row) && (col == 0 || col == max_col))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int max_col, int max_row)
{
	int row;
	int col;

	row = 0;
	max_row--;
	max_col--;
	if (max_col >= 0 && max_row >= 0)
	{
		while (row <= max_row)
		{
			col = 0;
			while (col < max_col)
			{
				print_sym(col, max_col, row, max_row);
				++col;
			}
			print_sym(col, max_col, row, max_row);
			++row;
			ft_putchar('\n');
		}
	}
}
