/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:21:47 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/03 05:17:13 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int n);

int		ft_atoi(char *c);

int		main(void)
{
	char	ch[4];
	char	chaine[9];

	chaine[0] = ' ';
	chaine[1] = ' ';
	chaine[2] = '-';
	chaine[3] = '3';
	chaine[4] = '3';
	chaine[5] = '3';
	chaine[6] = 'a';
	chaine[7] = ' ';
	chaine[8] = 0;
	ft_putnbr(ft_atoi(&chaine[0]));
	ch[0] = '8';
	ch[1] = '1';
	ch[2] = '0';
	ch[3] = 0;
	ft_putnbr(ft_atoi(&ch[0]));
	ft_putnbr('2' - 46);
	return (0);
}
