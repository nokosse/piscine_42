/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:12:19 by kvisouth          #+#    #+#             */
/*   Updated: 2022/09/28 10:42:03 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	symb;
	int	nb;

	i = 0;
	symb = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			symb = symb * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i -1] < '0' && str[i - 1] > '9')
			nb = str[i] - 48;
		else
			nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * symb);
}
/*
#include <stdio.h>
int main (void)
{
	char test1[] = "   +-+--+--+4641asf";
	printf("%s\n",test1);
	printf("%d\n\n",ft_atoi(test1));

	char test2[] = "non  +++--54ab";
	printf("%s\n",test2);
	printf("%d\n\n",ft_atoi(test2));

	char test3[] = "++-h88h";
	printf("%s\n",test3);
	printf("%d\n\n",ft_atoi(test3));

	char test4[] = "  p511r";
	printf("%s\n",test4);
	printf("%d\n\n",ft_atoi(test4));

	char test5[] = "-+-- 54f";
	printf("%s\n",test5);
	printf("%d\n\n",ft_atoi(test5));

	char test6[] = "  +-+-+-+-+----+-+-+-+++-+-+-+--+-123456789ffff5555555555555";
	printf("%s\n",test6);
	printf("%d\n\n",ft_atoi(test6));
}*/
