/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:27:26 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/04 17:23:47 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	nb;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		*range
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (-1);
	i = 0;
	nb = min;
	while (min < max)
	{
		tab[i] = nb;
		i++;
		nb++;
	}
	*range = tab;
	return (i);
}
