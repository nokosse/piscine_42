/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:39:12 by kvisouth          #+#    #+#             */
/*   Updated: 2022/09/26 12:52:21 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "salut ";
	char s2[] = " le tout petit mec";
	printf("%s\n",s1);
	printf("%s\n",s2);
	ft_strcat(s1, s2);
	printf("%s",s1);
}*/
