/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 20:06:58 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/23 22:14:14 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_disp_numb(int nb, int incr, int b)
{
	if (nb / 10 == 0)
	{
		while (incr < 6)
		{
			ft_putchar('0');
			incr = incr + 1;
		}
		ft_putchar(nb + '0');
	}
	else
	{
		ft_disp_numb(nb / 10, incr + 1, 0);
		ft_putchar(nb % 10 + 48);
	}
	if (b == 1)
	{
		ft_putchar('0');
		ft_putchar(':');
		ft_putchar(' ');
	}
}

void	ft_disp_hexa(char c, int i)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (c / 16 == 0)
	{
		if (i == 0)
		{
			ft_putchar('0');
			ft_putchar(base[c]);
		}
		else
			ft_putchar(base[c]);
	}
	else
	{
		ft_disp_hexa(c / 16, 1);
		ft_putchar(base[c % 16]);
	}
}

void	ft_disp_char(char c)
{
	if (c < 32 || c == 127)
		ft_putchar('.');
	else
		ft_putchar(c);
}

void	ft_intermed(char *str, unsigned int size, int i)
{
	int j;

	j = 0;
	while (j < 8 && 16 * i + 2 * j + 1 < size)
	{
		ft_disp_hexa(str[16 * i + 2 * j], 0);
		ft_disp_hexa(str[16 * i + 2 * j + 1], 0);
		ft_putchar(' ');
		j = j + 1;
	}
	j = 5 * j;
	if (j != 40 && 16 * i + 2 * j < size)
	{
		ft_disp_hexa(str[16 * i + 2 * j], 0);
		ft_putchar(' ');
		ft_putchar(' ');
		j = j + 2;
	}
	while (j < 41)
	{
		ft_putchar(' ');
		j = j + 1;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	char				*str;

	str = addr;
	i = 0;
	while (i <= size / 16)
	{
//		ft_disp_numb(i, 0, 1);
		ft_intermed(str, size, i);
		j = 0;
		while (j < 16 && 16 * i + j < size)
		{
			ft_disp_char(str[16 * i + (j++)]);
		}
		ft_putchar('\n');
		i = i + 1;
	}
	return (addr);
}
