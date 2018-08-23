/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:21:47 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/03 00:10:29 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strrev(char *str);

void	ft_putstr(char *str);

int		main(void)
{
	char	ch[5];
	char	chaine[5];

	chaine[0] = 'a';
	chaine[1] = 'b';
	chaine[2] = 'c';
	chaine[3] = 'd';
	chaine[4] = 0;
	ft_putstr(&chaine[0]);
	ft_strrev(&chaine[0]);
	ft_putstr(&chaine[0]);
}
