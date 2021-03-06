/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 22:46:50 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/02 23:22:01 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affichage_positif(int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		affichage_positif((n - (n % 10)) / 10);
		ft_putchar(n % 10 + 48);
	}
}

void	affichage_negatif(int n)
{
	if (n > -10)
		ft_putchar(n * (-1) + 48);
	else
	{
		aff f((n + ((10 - (n % 10)) % 10)) / 10);
		ft_putchar(((10 - (n % 10)) % 10) + 48);
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar(45);
		affichage_negatif(n);
	}
	else
		affichage_positif(n);
}
