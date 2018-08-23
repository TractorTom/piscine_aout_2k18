/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 12:11:51 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 19:25:27 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 1

# define TRUE 1

# define FALSE 0

# define EVEN ft_pair

# include <unistd.h>

typedef int	t_bool;

t_bool		ft_pair(int nbr)
{
	return (nbr % 2 == 0);
}

#endif
