/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:14:13 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 11:43:31 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int		ft_str_is_alpha(char *str)
{
	int		index;

	index = 0;
	while (is_alpha(str[index]))
		index++;
	if (str[index] == '\0')
		return (1);
	else
		return (0);
}
