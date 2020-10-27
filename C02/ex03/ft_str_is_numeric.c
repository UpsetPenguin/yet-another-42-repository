/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:53:16 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 11:56:51 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_str_is_numeric(char *str)
{
	int		index;

	index = 0;
	while (is_numeric(str[index]))
		index++;
	if (str[index] == '\0')
		return (1);
	else
		return (0);
}
