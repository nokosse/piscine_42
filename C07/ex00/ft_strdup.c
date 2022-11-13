/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:38:50 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/04 13:34:57 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = malloc(ft_strlen(src) * (sizeof(char)) + 1);
	if (!dup)
		return (0);
	i = 0;
	while (i < ft_strlen(src))
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include<stdio.h>
int main(void)
{
	printf("%s",ft_strdup("bonjour"));
}*/
