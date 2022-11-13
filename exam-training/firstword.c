/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:46:40 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/06 17:18:18 by kvisouth         ###   ########.fr       */
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

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] == 32)
			i++;
		while(av[1][i] != 32 && av[1][i] != '\0')
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
}