/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 22:47:35 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/03 16:31:33 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		main(void)
{
	int n;

	n = -102;
	ft_putnbr(n);
	n = -2147483648;
	ft_putnbr(n);
	n = 45;
	ft_putnbr(n);
	n = -1230;
	ft_putnbr(n);
}
