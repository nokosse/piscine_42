/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:11:28 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/06 19:35:10 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;
	
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'y')
				ft_putchar(av[1][i] + 1);
			else if (av[1][i] >= 'A' && av[1][i] <= 'Y')
				ft_putchar(av[1][i] + 1);
			else if (av[1][i] == 'Z' || av[1][i] == 'z')
				ft_putchar(av[1][i] - 25);
			i++;
		}
	}
}