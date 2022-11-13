/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:14:08 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/05 20:01:18 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char a, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (a == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	strcnt(char *str, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_sep(str[i], sep) == 1)
			i++;
		if (str[i] != '\0')
			j++;
		while (str[i] != '\0' && is_sep(str[i], sep) == 0)
			i++;
	}
	return (j);
}

int	ft_strlen(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && is_sep(str[i], sep) == 0)
		i++;
	return (i);
}

char	*word(char *str, char *sep)
{
	char	*wd;
	int		wdlen;
	int		i;

	i = 0;
	wdlen = ft_strlen(str, sep);
	wd = malloc(wdlen + 1);
	while (i < wdlen)
	{
		wd[i] = str[i];
		i++;
	}
	wd[i] = '\0';
	return (wd);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;

	i = 0;
	strs = malloc(strcnt(str, charset) + 1);
	while (*str != '\0')
	{
		while (*str != '\0' && is_sep(*str, charset) == 1)
			str++;
		if (*str != '\0')
		{
			strs[i] = word(str, charset);
			i++;
		}
		while (*str != '\0' && is_sep(*str, charset) == 0)
			str++;
	}
	strs[i] = 0;
	return (strs);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/
