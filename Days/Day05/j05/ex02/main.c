/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/05 04:44:35 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int n);

void	ft_putchar(char c);

int		main(void)
{
	int i;
	
	i = -2147483648;
	ft_putnbr(i);
	ft_putchar('b');
	i = -21448;
	ft_putnbr(i);

	ft_putchar('c');
	
	i = 7483648;
	ft_putnbr(i);
	
	i = 8;
	ft_putnbr(i);
	i = 0;
	ft_putnbr(i);
	return (0);
}
