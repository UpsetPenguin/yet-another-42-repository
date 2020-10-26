/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:51:11 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/25 15:20:10 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *arr, int columns, int n)
{
	int		i;

	while (columns)
	{
		while (arr[columns] == (9 + columns - (n - 1)) && columns >= 0)
			columns--;
		if (columns < 0)
			break ;
		arr[columns]++;
		i = (columns + 1) - 1;
		while (i++ < n)
			arr[i] = arr[i - 1] + 1;
		columns = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
	}
}

void	ft_print_combn(int n)
{
	int		arr[n];
	int		i;
	int		columns;

	columns = n - 1;
	if (n > 10)
		return ;
	i = -1;
	while (i++ < n)
		arr[i] = i;
	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + '0');
	ft_print(arr, columns, n);
}
