/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:36:57 by kvisouth          #+#    #+#             */
/*   Updated: 2022/09/19 20:58:52 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_write_col1(int col1)
{
	ft_putchar(col1 / 10 + 48);
	ft_putchar(col1 % 10 + 48);
	ft_putchar(' ');
}

void	ft_write_col2(int col2)
{
	ft_putchar(col2 / 10 + 48);
	ft_putchar(col2 % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	col1;
	int	col2;

	col1 = 0;
	col2 = 1;
	while (col1 <= 98)
	{
		while (col2 <= 99)
		{
			ft_write_col1(col1);
			ft_write_col2(col2);
			if (col1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			col2++;
		}
		col1++;
		col2 = col1 + 1;
	}
}
