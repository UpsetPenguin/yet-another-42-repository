/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:02:48 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 12:05:25 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int		index;

	index = 0;
	while (is_uppercase(str[index]))
		index++;
	if (str[index] == '\0')
		return (1);
	else
		return (0);
}
