/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:58:16 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 11:59:21 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int		index;

	index = 0;
	while (is_lowercase(str[index]))
		index++;
	if (str[index] == '\0')
		return (1);
	else
		return (0);
}
