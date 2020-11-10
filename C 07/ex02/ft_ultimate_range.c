/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:17:55 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/10 14:17:58 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;

	diff = max - min;
	i = 0;
	if (!(min < max))
	{
		*range = 0;
		return (0);
	}
	if (!(*range = malloc(diff * sizeof(int))))
		return (0);
	if (!*range)
		return (-1);
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (diff);
}
