/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:18:43 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/02 15:00:43 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	*ft_is_nbr(char *to_find, char *str)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] == str[i])
		{
			i++;
			while (to_find[i] == str[i] && to_find[i])
			{
				i++;
			}
			if (to_find[i] == '\0')
				return (1);
		}
		
	}
	return (0);
}
