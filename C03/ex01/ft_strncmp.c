/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:57:52 by kvisouth          #+#    #+#             */
/*   Updated: 2022/09/27 17:12:17 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main (void)
{
	char s1[] = "bonjour";
	char s2[] = "bonjOur";
	printf("%s\n",s1);
	printf("%s\n",s2);
	int res = ft_strncmp(s1, s2, 5);
	printf("%d",res);
}*/
