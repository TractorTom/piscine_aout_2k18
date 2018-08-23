/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 22:37:14 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/12 22:29:02 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2);

int		match_netoile(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 == *s2);
	else if (*s1 != *s2)
		return (0);
	else
		return (match(s1 + 1, s2 + 1));
}

int		match_etoile(char *s1, char *s2)
{
	while (*s2 == '*')
		s2++;
	if (*s2 == '\0')
		return (1);
	while (*s1)
	{
		if (*s1 == *s2 && match(s1 + 1, s2 + 1))
			return (1);
		s1++;
	}
	return (0);
}

int		match(char *s1, char *s2)
{
	if (*s2 != '*')
		return (match_netoile(s1, s2));
	else
		return (match_etoile(s1, s2));
}
