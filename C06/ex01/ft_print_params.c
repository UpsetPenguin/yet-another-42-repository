/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:10:24 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/02 16:37:45 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (++i < argc)
	{
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		j = 0;
		write(1, "\n", 1);
	}
}