/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 11:23:10 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/04 11:23:18 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int *array)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = array[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		ft_abs_diff(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

int		ft_diag_check(int index, int *array)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (array[index] == array[i]
			|| ft_abs_diff(array[index], array[i]) == (index - i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_recursive(int index, int *array, int *counter)
{
	array[index] = 0;
	while (array[index] < 10)
	{
		if (ft_diag_check(index, array))
		{
			if (index == 9)
			{
				ft_print(array);
				(*counter)++;
			}
			else
				ft_recursive(index + 1, array, counter);
		}
		array[index]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int array[10];
	int index;
	int counter;

	counter = 0;
	index = 0;
	ft_recursive(index, array, &counter);
	return (counter);
}
