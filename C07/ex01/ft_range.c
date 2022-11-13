/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:08:26 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/02 12:54:43 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	nb;

	tab = 0;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	i = 0;
	nb = min;
	while (i < max - min)
	{
		tab[i] = nb;
		nb++;
		i++;
	}
	return (tab);
}

/*
#include <stdio.h>
int	main(void)
{
	printf()
}
*/
