/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:25:42 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 12:35:56 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	transform(char c)
{
	return (c - 32);
}

char	*ft_strupcase(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (is_lowercase(str[index]))
			str[index] = transform(str[index]);
		index++;
	}
	return (str);
}
