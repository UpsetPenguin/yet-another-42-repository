/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:30:06 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/26 16:41:33 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_printable(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				index;
	unsigned char	current;

	index = 0;
	while (str[index])
	{
		current = str[index];
		if (is_printable(current))
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current / 16]);
			ft_putchar("0123456789abcdef"[current % 16]);
		}
		index++;
	}
}
