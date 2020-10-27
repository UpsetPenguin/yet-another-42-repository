/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:07:24 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 12:18:32 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_printable(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

int		ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (is_printable(str[index]))
		index++;
	if (str[index] == '\0')
		return (1);
	else
		return (0);
}
