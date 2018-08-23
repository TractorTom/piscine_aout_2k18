/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:13:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/13 11:43:56 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_cat(char *a, char *b)
{
	int i;
	int j;

	i = 0;
	while (a[i])
		i = i + 1;
	j = 0;
	a[i] = '\n';
	i = i + 1;
	while (b[j])
	{
		a[i + j] = b[j];
		j = j + 1;
	}
	a[i + j] = '\0';
}

char		*ft_concat_params(int argc, char **argv)
{
	int		i;

	if (argc > 1)
	{
		i = 2;
		while (i < argc)
			ft_cat(argv[1], argv[i++]);
		return (argv[1]);
	}
	else
		return ("");
}
