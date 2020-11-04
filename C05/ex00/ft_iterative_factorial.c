/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:55:02 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/10/29 15:14:29 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	iterations;

	iterations = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (iterations <= nb)
	{
		factorial *= iterations;
		iterations++;
	}
	return (factorial);
}
