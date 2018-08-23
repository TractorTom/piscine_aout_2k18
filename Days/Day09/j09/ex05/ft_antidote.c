/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:30:41 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/09 22:44:52 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int a, int b, int c)
{
	if (b < a)
	{
		if (c < b)
			return (b);
		else if (c > a)
			return (a);
		else
			return (c);
	}
	else
	{
		if (c < a)
			return (a);
		else if (c > b)
			return (b);
		else
			return (c);
	}
}
