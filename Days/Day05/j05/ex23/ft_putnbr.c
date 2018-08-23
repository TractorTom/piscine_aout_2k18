/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 04:19:29 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 21:24:20 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putnbr((-nb) / 10);
			ft_putchar('8');
		}
		else
			nb = -nb;
	}
	if (nb >= 0 && nb < 9)
		ft_putchar(nb + 48);
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}
