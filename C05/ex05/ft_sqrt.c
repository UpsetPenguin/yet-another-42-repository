/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:04:18 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/03 11:38:23 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	result;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	result = 1;
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	return (0);
}
