/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:56:06 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 18:16:08 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_size(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index - 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		size1;
	int		size2;
	int		index;

	index = 0;
	size1 = ft_size(s1);
	size2 = ft_size(s2);
	while (s1[index] && s2[index])
	{
		if (s1[index] < s2[index])
			return (-1);
		else if (s1[index] > s2[index])
			return (1);
		else
			index++;
	}
	if (size1 > size2)
		return (1);
	else if (size1 == size2)
		return (0);
	else
		return (-1);
}
