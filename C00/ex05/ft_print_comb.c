/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:58:46 by kvisouth          #+#    #+#             */
/*   Updated: 2022/09/24 10:11:24 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print(int cpt1, int cpt2, int cpt3)
{
	ft_putchar(cpt1);
	ft_putchar(cpt2);
	ft_putchar(cpt3);
}

void	ft_print_comb(void)
{
	int	cpt1;
	int	cpt2;
	int	cpt3;

	cpt1 = '0';
	cpt2 = '1';
	cpt3 = '2';
	while (cpt1 < ('7' + 1))
	{
		while (cpt2 < ('8' + 1))
		{
			while (cpt3 < ('9' + 1))
			{
				ft_print(cpt1, cpt2, cpt3);
				if (cpt1 != '7' || cpt2 != '8' || cpt3 != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				cpt3++;
			}
			cpt3 = ++cpt2 + 1;
		}
		cpt2 = ++cpt1 ;
	}
}
