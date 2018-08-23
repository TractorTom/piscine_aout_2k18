/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:07:32 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/02 17:34:50 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr);

void	ft_putchar(char c);

int		main(void)
{
	int	i;
	int	*********nbr9;
	int ********nbr8;
	int *******nbr7;
	int ******nbr6;
	int *****nbr5;
	int ****nbr4;
	int ***nbr3;
	int	**nbr2;
	int	*nbr1;

	i = 48;
	nbr1 = &i;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	ft_putchar(i);
	ft_ultimate_ft(nbr9);
	ft_putchar(i);
}
