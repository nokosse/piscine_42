/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:07:46 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/02 15:17:05 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_str_is_alpha(char *str, int i)
{
	int	i;
	int	result;

	if ((97 <= str[i] && str[i] <= 122)
		|| (65 <= str[i] && str[i] <= 90))
		return (1);
	return (0);
}

char	*ft_get_nbr(char *buf)
{
	int	i;
	int	n;
	char	*word;

	i = 0;
	while (ft_str_is_alpha(buf, i) == 0)
		i++;
	n = i;
	while (buf[n] != '\n')
		n++;
	word = malloc(sizeof(char) * n + 1);
	n = 0;
	while (ft_str_is_alpha(buf, i) == 1)
	{
		word[n] = buf[i];
		n++;
		i++;
	}	
	word[n] = '\0';
	return (word);
}
