/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertEN.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:59:07 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/02 17:25:44 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	wich_H_M(char *str, char *word, int count, int n)
{
	char	*to_find;
	int	j;
	
	count = count * 3;
	to_find = malloc(sizeof(char) * (count + 1));
	if (to_find != NULL)
	{
		// on met 1 suivi du nombre de zeros voulu derriere
		//on cherche la qualification dizaine centaine millier ...
		to_find[0] = '1';
		j = 1;
		while (j < count - 1)
		{
			to_find[j] = '0';
			j++;
		}
		to_find[j] = '\0';
		ft_strcat(word, ft_parse(to_find));
	}
	free(to_find);
}

void	find_d(char *str, char *word, int count, int n)
{
	char	*to_find;
	int	j;

	to_find = malloc(sizeof(char) * (3));
	if (to_find != NULL)
	{
		if (str[n] == 1)
		{
			to_find[0] = '1';
			to_find[1] = str[n - 1];
			to_find[2] = '\0';
		}
		else
		{
			to_find[0] = str[n];
			to_find[1] = '0';
			to_find[2] = '\0';
		}
		ft_strcat(word,ft_parse(to_find));
	}
	free(to_find);
}

void find_u(char *str, char *word, int n)
{
	char	*to_find;
	int	j;

	to_find = malloc(sizeof(char) * 2);
	if (to_find != NULL)
	{
		to_find[0] = str[n];
		j = 1;
		while (j < n)
		{
			str[j] = '0';
		}
		ft_strcat(word, ft_parse(to_find));
	}
	free(to_find);
}



void	found_trio_word(char *str, char *word, int count, int i)
{
	int	j;
	int	n;

	j = 0;
	n = i - 3;
	if (word != NULL)
	{
		while (j < 3)
		{
			if (j == 0)
			{
				find_u(str, word, n);
				wich_U_H_M(str, word, count, n);
			}
			if (str[n + 1] == '1')
			{
				if (j == 1)
				{
					find_d(str, word, count, n);
					
				}
			}
			else
			{
				if (j == 1)
				{
					find_d(str, word, count, n);
					
				}	
				else if (j == 2)
				{
					find_u(str, word, n);
				}
			}
			n = n + 1;
			j++;
		}
	}
}
	
void *ft_convert_nbr(char *nbr, char *word)
{
	int	i;
	int	count;

	i = ft_strlen(nbr);
	count = 1;
	while (i > 0)
	{
		i -= 3;
		found_trio_word(nbr, word, count, i);
		count++;
	}
}
