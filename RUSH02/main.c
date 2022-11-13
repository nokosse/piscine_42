/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 01:30:43 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/02 17:45:23 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int main(char *nbr)
{
	char	*word;
	
	word = malloc(sizeof(char) * 600);
	if (!word)
		return (0);
	ft_convert_nbr(nbr, word);
	ft_putstr(word);
	free(word);
	return (0);
}
