/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:39:56 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 12:40:58 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	transform(char c)
{
	return (c + 32);
}

char	*ft_strlowcase(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (is_uppercase(str[index]))
			str[index] = transform(str[index]);
		index++;
	}
	return (str);
}
