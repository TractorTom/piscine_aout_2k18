/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:55:33 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/03 14:42:29 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

int		longueur(char *str)
{
	char	c;
	int		i;

	c = *str;
	i = 0;
	while (c)
	{
		i = i + 1;
		c  = *(str + i);
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	j;

	i = longueur(str);
	j = 0;
	while (j < i / 2)
	{
		ft_swap(str + j, str + i - j - 1);
		j = j + 1;
	}
	return (str);
}
