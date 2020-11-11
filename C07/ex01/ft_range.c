/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:17:33 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/10 14:17:44 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int diff;
	int *ptr;
	int i;

	diff = max - min;
	i = 0;
	if (min < max)
	{
		if (!(ptr = malloc(diff * sizeof(int))))
			return (0);
		while (min < max)
		{
			ptr[i++] = min;
			min++;
		}
		return (ptr);
	}
	return (ptr = 0);
}
