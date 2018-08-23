/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 22:46:50 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/02 23:27:53 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affpo(int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		affpo((n - (n % 10)) / 10);
		ft_putchar((n % 10) + 48);
	}
}

void	affne(int n)
{
	if (n > -10)
		ft_putchar(48 - n);
	else
	{
		affne((n + ((10 - (n % 10)) % 10)) / 10);
		ft_putchar(((10 - (n % 10)) % 10) + 48);
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar(45);
		affne(n);
	}
	else
	{
		affpo(n);
	}
}
