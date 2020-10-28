/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:13:05 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/27 12:23:36 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char	char1;
	char	char2;

	while (n-- > 0)
	{
		char1 = *s1++;
		char2 = *s2++;
		if (char1 != char2)
			return (char1 - char2);
		if (char1 == '\0')
			return (0);
	}
	return (0);
}
