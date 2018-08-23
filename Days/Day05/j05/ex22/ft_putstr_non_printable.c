/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 19:28:45 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/06 20:03:32 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display_hexa(char c)
{
	if (c == 127)
	{
		ft_putchar('7');
		ft_putchar('f');
	}
	else if (c >= 16)
	{
		ft_putchar('1');
		ft_display_hexa(c - 16);
	}
	else if (c < 10)
		ft_putchar('0' + c);
	else
	{
		ft_putchar('a' + c - 10);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_display_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i = i + 1;
	}
}
