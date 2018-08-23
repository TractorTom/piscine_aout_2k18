/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:33:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/04 01:53:46 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);

void 	ft_putnbr(int n);

int		main(void)
{
	int i;
	
	i = 0;
	ft_putnbr(ft_is_prime(i));
	
	i = 225135001;
	ft_putnbr(ft_is_prime(i));
	
	i = 3;
	ft_putnbr(ft_is_prime(i));

}
