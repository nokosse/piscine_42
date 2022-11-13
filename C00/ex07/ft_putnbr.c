/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:15:59 by kvisouth          #+#    #+#             */
/*   Updated: 2022/09/28 13:59:21 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*
int main(void)
{
	ft_putnbr(-2147483648);
	write(1,"\n",1);
	ft_putnbr(2147483647);
	write(1,"\n",1);
	ft_putnbr(42);
	write(1,"\n",1);
	ft_putnbr(-42);
	write(1,"\n",1);
	ft_putnbr(5);
	write(1,"\n",1);
	ft_putnbr(-5);
}*/
