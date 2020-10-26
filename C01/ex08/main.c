/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:24:38 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/25 14:34:27 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int s[10] = {2, 5, 4, 6, 7, 1, 8, 9, 0, 3};
	int index = 0;
	while (index < 10)
	{
		printf("%d\n", s[index]);
		index++;
	}
	ft_sort_int_tab(&s[0], 9);
	index = 0;	
	while (index < 10)
	{
		printf("New Array \n%d\n", s[index]);
		index++;
	}
}
