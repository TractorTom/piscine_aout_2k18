/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/04 00:20:23 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index);

void	ft_putchar(char c);

void 	ft_putnbr(int n);

int		main(void)
{
	int i;
	
	i = 11;
	ft_putnbr(ft_fibonacci(i));
	
	i = 12;
	ft_putnbr(ft_fibonacci(i));
	
	i = 13;
	ft_putnbr(ft_fibonacci(i));

	i = 14;
	ft_putnbr(ft_fibonacci(i));
	
	i = 15;
	ft_putnbr(ft_fibonacci(i));

}
