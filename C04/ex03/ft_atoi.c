/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:10:03 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/29 12:15:38 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' ||
		c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		index;
	int		is_minus;
	int		result;

	result = 0;
	is_minus = 1;
	index = 0;
	while (is_space(str[index]))
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			is_minus *= -1;
		index++;
	}
	while (str[index] && (str[index] >= '0' && str[index] <= '9'))
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (is_minus * result);
}
