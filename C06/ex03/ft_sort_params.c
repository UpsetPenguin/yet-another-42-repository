/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalazzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:35:11 by dpalazzi          #+#    #+#             */
/*   Updated: 2020/11/02 17:38:33 by dpalazzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *cs, char *ct)
{
	int	index;

	index = 0;
	while (1)
	{
		if (cs[index] != ct[index])
			return (cs[index] - ct[index]);
		if (!cs[index])
			return (0);
		index++;
	}
}

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		write(1, &str[index++], 1);
	write(1, "\n", 1);
}

void	ft_sort(int size, char *array[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(array[i], array[j]) > 0)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
