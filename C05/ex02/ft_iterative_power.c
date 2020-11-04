/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:54:19 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/02 12:47:45 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int risultato;

	risultato = 1;
	if (power < 0)
		return (0);
	while (power--)
		risultato *= nb;
	return (risultato);
}
