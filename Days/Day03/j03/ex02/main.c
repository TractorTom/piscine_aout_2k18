/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:21:47 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/02 18:03:23 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_putchar(char c);

int		main(void)
{
	int i;
	int	j;

	i = 89;
	j = 51;
	ft_putchar(i);
	ft_putchar(j);
	ft_swap(&i, &j);
	ft_putchar(i);
	ft_putchar(j);
}
