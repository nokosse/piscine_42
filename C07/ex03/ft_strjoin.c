/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:53:59 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/04 13:31:06 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strl2(char **str, int size)
{
	int	i;
	int	j;
	int	total;

	j = 0;
	total = 0;
	while (j < size)
	{
		i = 0;
		while (str[j][i] != '\0')
		{
			i++;
			total++;
		}
		j++;
	}
	return (total);
}

int	ft_strl1(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	ft_strcat(char *bigstr, char **strs, char *sep, int size)
{
	int	j;
	int	i;
	int	x;

	j = -1;
	x = -1;
	while (++j != size)
	{
		i = -1;
		while (strs[j][++i] != '\0')
			bigstr[++x] = strs[j][i];
		i = -1;
		if (j < size - 1)
		{
			while (sep[++i] != '\0')
				bigstr[++x] = sep[i];
		}
	}
	bigstr[x + 1] = '\0';
	return (*bigstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*bigstr;
	int		max;

	max = ft_strl2(strs, size) + (ft_strl1(sep) * (size - 1)) + 1;
	bigstr = malloc(sizeof(char *) * max);
	if (!bigstr)
		return (0);
	if (size == 0)
		return (bigstr);
	*bigstr = ft_strcat(bigstr, strs, sep, size);
	return (bigstr);
}
/*
#include <stdio.h>
int main(void)
{
	char	sep[] = "000000000000000000000000";
	char	*tab[] = {"salut","les","gens"};

	printf("%s",ft_strjoin(3, tab, sep));
}*/