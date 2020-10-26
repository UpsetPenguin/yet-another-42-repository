/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:13:52 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/25 14:42:43 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		s_index;
	int		index;

	s_index = 0;
	while (s_index < size)
	{
		index = s_index + 1;
		while (index <= size)
		{
			if (tab[index] < tab[s_index])
			{
				temp = tab[s_index];
				tab[s_index] = tab[index];
				tab[index] = temp;
			}
			index++;
		}
		s_index++;
	}
}
