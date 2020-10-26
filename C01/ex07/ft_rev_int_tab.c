/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:07:56 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/25 11:48:06 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		index;
	int		temp;

	index = 0;
	size--;
	while (index < size)
	{
		temp = tab[index];
		tab[index] = tab[size];
		tab[size] = temp;
		index++;
		size--;
	}
}
