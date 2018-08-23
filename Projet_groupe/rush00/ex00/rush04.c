/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:39:20 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 20:19:23 by edjubert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_display(int row, int col, int height, int length)
{
	if (row == 0 || row == height - 1)
	{
		if (row + col == 0)
			ft_putchar('A');
		else if (col == 0 || (col == length - 1 && row == 0))
			ft_putchar('C');
		else if (row + col == length + height - 2)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (col == 0)
			ft_putchar('B');
		else if (col == length - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int length, int height)
{
	int row;
	int col;

	if (length > 0 && height > 0)
	{
		row = 0;
		while (row < height)
		{
			col = 0;
			while (col < length)
				ft_display(row, col++, height, length);
			row = row + 1;
			ft_putchar('\n');
		}
	}
}
