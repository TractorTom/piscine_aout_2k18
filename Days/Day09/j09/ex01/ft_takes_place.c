/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:48:57 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 12:24:28 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_hour(int hour)
{
	if ((hour >= 0 && hour <= 11) || hour >= 24)
	{
		if (hour == 24 || hour == 0)
			printf("%d", 12);
		else if (hour == 25)
			printf("%d", 1);
		else
			printf("%d", hour);
		printf(" A.M.");
	}
	else
	{
		if (hour == 12)
			printf("%d", 12);
		else
			printf("%d", hour - 12);
		printf(" P.M.");
	}
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_hour(hour);
	printf(" AND ");
	ft_hour(hour + 1);
	printf("\n");
}
