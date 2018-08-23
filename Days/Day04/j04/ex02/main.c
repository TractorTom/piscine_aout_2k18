/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/03 15:32:58 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nbr);

void	ft_putchar(char c);

void 	ft_putnbr(int n);

int		main(void)
{
	int i;
	
	i = 5;
	ft_putnbr(ft_recursive_factorial(i));
	
	i = 2;
	ft_putnbr(ft_recursive_factorial(i));
	i =  27;
	ft_putnbr(ft_recursive_factorial(i));

	i = 0;
	ft_putnbr(ft_recursive_factorial(i));
	
	i = -10;
	ft_putnbr(ft_recursive_factorial(i));

}
