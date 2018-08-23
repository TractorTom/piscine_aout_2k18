/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 12:06:54 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/12 12:09:38 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2);

int		match_netoile(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 == *s2);
	else if (*s1 != *s2)
		return (0);
	else
		return (nmatch(s1 + 1, s2 + 1));
}

int		match_etoile(char *s1, char *s2)
{
	int		count;
	int		j;
	char	c;

	count = 0;
	j = 0;
	while (s1[j])
	{
		count = count + nmatch(s1 + j, s2 + 1);
		j = j + 1;
	}
	c = '\0';
	count = count + nmatch(&c, s2 + 1);
	return (count);
}

int		nmatch(char *s1, char *s2)
{
	if (*s2 != '*')
		return (match_netoile(s1, s2));
	else
		return (match_etoile(s1, s2));
}
