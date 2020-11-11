/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:16:49 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/10 14:16:56 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(ptr = malloc(sizeof(char) * i)))
		return (0);
	if (ptr)
	{
		i = 0;
		while (src[i])
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = 0;
		return (ptr);
	}
	else
		return (0);
}
