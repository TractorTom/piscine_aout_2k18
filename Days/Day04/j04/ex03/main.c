/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/03 23:51:29 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power);

void	ft_putchar(char c);

void 	ft_putnbr(int n);

int		main(void)
{
	int i;
	int power;
	
	i = 11;
	power = 4;
	ft_putnbr(ft_recursive_power(i, power));
	
	i = 12;
	power = 0;
	ft_putnbr(ft_recursive_power(i, power));
	
	i = 13;
	power = -9;
	ft_putnbr(ft_recursive_power(i, power));

	i = 14;
	power = 1;
	ft_putnbr(ft_recursive_power(i, power));
	
	i = 15;
	power = 2;
	ft_putnbr(ft_recursive_power(i, power));

}
