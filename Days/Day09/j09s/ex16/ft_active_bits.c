/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:05:09 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 10:16:59 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	if (value == -2147483648)
		return (32);
	else if (value < 0)
		return (ft_active_bits(-value));
	else if (value <= 1)
		return (1);
	else
		return (1 + ft_active_bits(value / 2));
}
