/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:18:05 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/06 19:35:09 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkpos (char *str,char letter, int pos) //Check tout les char jusqua pos
{
	int	i;

	i = 0;
	while (i > pos)
	{
		if (letter == str[i])
			return (0);
		i++;
	}
	return(1);
}

int	checkstr (char *str, char letter) //Check tout str1
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (letter == str[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while(str1[i] != '\0')
	{
		if checkpos((str1, str1[i], i) == 1)
			ft_putchar(str1[i]);
	}
	i = 0;
	while(str2[i] != '\0')
	{
		if (checkstr(str1, str2[i]) == 1)
		{
			if(checkpos(str2, str2[i], i) == 1)
				ft_putchar(str2[i]);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}