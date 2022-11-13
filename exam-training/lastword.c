/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:18:29 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/06 19:04:08 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i]) //va a la fin
			i++;
		i--; //recule du 0
		while (av[1][i] == 32) //chasse les space
			i--;
		while (av[1][i] != 32) 
			i--;
		i++;
		while (av[1][i] != 32 && av[1][i])
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
