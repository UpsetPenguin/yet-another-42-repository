/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:18:08 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/10 14:18:13 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	len_final;
	int	i;

	len_final = 0;
	i = 0;
	while (i < size)
	{
		len_final += ft_str_length(strings[i]);
		len_final += sep_length;
		i++;
	}
	len_final -= sep_length;
	return (len_final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*wstart;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_compute_final_length(strs, size, ft_str_length(sep));
	if (!(string = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	wstart = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(wstart, strs[i]);
		wstart += ft_str_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(wstart, sep);
			wstart += ft_str_length(sep);
		}
		i++;
	}
	*wstart = '\0';
	return (string);
}
