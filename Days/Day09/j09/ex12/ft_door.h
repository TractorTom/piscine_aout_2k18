/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:06:26 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/13 16:58:16 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define CLOSE 1
# define OPEN 0
# define TRUE 1
# define FALSE 0

typedef struct	s_door
{
	int	state;
}				t_door;

typedef int	t_bool;

void			close_door(t_door *door);
void			open_door(t_door *door);
int				is_door_open(t_door	*door);
int				is_door_close(t_door *door);

#endif
