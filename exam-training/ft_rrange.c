/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:42:11 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/06 11:27:55 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	whosmax(int start, int end)
{
	if (start > end)
		return (start);
	else if (start < end)
		return (end);
	else
		return (0);
}

int	whosmin(int start, int end)
{
	if (start < end)
		return (start);
	else if (start > end)
		return (end);
	else
		return (0);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	max = whosmax(start, end);
	min = whosmin(start, end);
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		tab[i] = max;
		max--;
		i--;
	}
	return (tab);
}
