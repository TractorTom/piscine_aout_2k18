/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:21:47 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/02 19:19:19 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_putchar(char c);

int		main(void)
{
	int i;
	int	j;
	int *ptr1;
	int *ptr2;

	i = 29;
	j = 11;
	ptr1 = &i;
	ptr2 = &j;
	ft_putchar(*ptr1 + 48);
	ft_putchar(*ptr2 + 48);
	ft_ultimate_div_mod(ptr1, ptr2);
	ft_putchar(*ptr1 + 48);
	ft_putchar(*ptr2 + 48);
}
