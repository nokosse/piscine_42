/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwolf <bwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:16:03 by bwolf             #+#    #+#             */
/*   Updated: 2022/09/25 19:08:58 by bwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verif_pos(int tab[], char x, int pos)
{
	int	i;

	i = 0;
	while (str[i] < pos)
	{
		if (str[i] == x)
			return (0);
	}
	return (1);
}

int	ft_verif_up(char *str)
{
	int up[] = {str[0], str[2], str[4], str[6]}
	int i;

	i = 0;
	while (up[i])
	{
		if (up[i] == '1')
		{
			if (ft_verif_pos(up, up[i], i) == '1')
				write(1, "Error\n", 6);
			return (0);
		}
		if (up[i] == '4')
		{
			if (ft_verif_pos(up, up[i], i) == '4')
				write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}

}