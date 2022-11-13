/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repalpha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:04:12 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/06 18:24:22 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				k = 0;
				j = av[1][i] - 96;
				while (k < j)
				{
					ft_putchar(av[1][i]);
					k++;
				}
			}
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				k = 0;
				j = av[1][i] - 64;
				while (k < j)
				{
					ft_putchar(av[1][i]);
					k++;
				}
			}
			i++;
		}
	}
}