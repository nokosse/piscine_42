/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:57:46 by kvisouth          #+#    #+#             */
/*   Updated: 2022/09/28 17:37:26 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	x;
	int	i;

	x = 1;
	i = 0;
	while (x != argc)
	{
		i = 0;
		while (argv[x][i] != '\0')
		{
			ft_putchar(argv[x][i]);
			i++;
		}
		ft_putchar('\n');
		x++;
	}
}
