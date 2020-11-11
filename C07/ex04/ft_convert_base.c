/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:18:22 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/10 14:18:24 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

void	ft_encoder_base(int nbr, char *base, char *nb_dest);

int		check_error_in_base(char *base)
{
	char	*basecheck;
	int		i_check;

	basecheck = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*basecheck)
	{
		if (*basecheck == '+' || *basecheck == '-'
			|| *basecheck == ' ' || *basecheck <= 31)
			return (0);
		i_check = 1;
		while (*(basecheck + i_check))
		{
			if (*(basecheck + i_check) == *basecheck)
				return (0);
			i_check++;
		}
		basecheck++;
	}
	return (1);
}

char	*is_in_base(char *base, char *to_find)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	unsigned int	nbr;
	int				sign;
	char			*charptr;

	nbr = 0;
	sign = 1;
	charptr = str;
	while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
		charptr++;
	while (*charptr == '-' || *charptr == '+')
	{
		if (*charptr == '-')
			sign *= -1;
		charptr++;
	}
	while (is_in_base(base, charptr))
	{
		nbr *= ft_strlen(base);
		nbr += (unsigned int)(is_in_base(base, charptr) - base);
		charptr++;
	}
	return (int)(nbr * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_int;
	char	*nbr_conv;

	if (!(check_error_in_base(base_from) && check_error_in_base(base_to)))
		return (0);
	nbr_conv = malloc(34);
	nb_int = ft_atoi_base(nbr, base_from);
	ft_encoder_base(nb_int, base_to, nbr_conv);
	return (nbr_conv);
}
