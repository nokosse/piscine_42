/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:07:25 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/06 16:44:46 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 #include <stdio.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
        	    ft_putchar(av[1][i] - 32);
        	else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
        	    ft_putchar(av[1][i] + 32);
        	i++;
		}
	}
}