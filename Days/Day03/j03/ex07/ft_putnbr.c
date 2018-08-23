/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 22:46:50 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/02 20:48:05 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affichage(int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		affichage((n - (n % 10)) / 10);
		ft_putchar(n % 10 + 48);
	}
}

void	aff2(void)
{
	ft_putchar('"');
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('"');
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		aff2();
	else if (n < 0)
	{
		ft_putchar(34);
		ft_putchar(45);
		affichage((-1) * n);
		ft_putchar(34);
	}
	else
	{
		ft_putchar(34);
		affichage(n);
		ft_putchar(34);
	}
}
