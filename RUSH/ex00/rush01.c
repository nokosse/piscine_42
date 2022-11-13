/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:33:02 by kvisouth          #+#    #+#             */
/*   Updated: 2022/09/18 18:07:39 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_putchar.c"
#include<unistd.h>

void	first(int x)
{
	int	cpta;

	cpta = 0;
	ft_putchar('/');
	while (cpta < x - 2)
	{
		ft_putchar('*');
		cpta++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middle(int x, int y)
{
	int	cptb;
	int	cpty;

	cptb = 0;
	cpty = 0;
	if (y > 2)
	{
		while (cpty < y - 2)
		{
			ft_putchar('*');
			while (cptb < x - 2)
			{
				ft_putchar(' ');
				cptb++;
			}
			if (x > 1)
			{
				ft_putchar('*');
			}
			ft_putchar('\n');
			cptb = 0;
			cpty++;
		}
	}
}

void	last(int x, int y)
{
	int	cptc;

	cptc = 0;
	if (y > 1)
	{
		ft_putchar('\\');
		while (cptc < x - 2)
		{
			ft_putchar('*');
			cptc++;
		}
		if (x > 1)
		{
			ft_putchar('/');
		}
	}
}

void	rush(int x, int y)
{
	first(x);
	middle(x, y);
	last(x, y);
}
