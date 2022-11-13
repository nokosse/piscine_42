/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwolf <bwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:09:21 by bwolf             #+#    #+#             */
/*   Updated: 2022/09/25 19:13:07 by bwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.c"
void ft_verif(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		ft_putstr("Error");
		return (0);
	while (argv[1][i] != '\0')
	{
		if ((i % 2 == 0) && (argv[1][i] < '1' && argv[1][i] > '4'))
		{
			ft_putstr("Error");
			return (0);
		}

		else if (i % 2 == 1 && argv[1][i] != ' ')
		{
			ft_putstr("Error");
			return (0);
		}
		i++;
	}
	if (i != 31)
	{
		ft_putstr("Error");
		return (0);
	}
}