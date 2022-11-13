/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:11:54 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/02 17:18:02 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_file_size()
{
	char	buf[5000];
	int		size;
	int		read_result;
	int		file_desc;
	int		close_result;

	file_desc = open("number.dict", O_RDONLY);
	if (file_desc == -1)
		return (-1);
	size = 0;
	read_result = 1;
	while (read_result)
	{
		read_result = read(file_desc, &buf, 4096);
		if (read_result == -1)
			return (-1);
		size += read_result;
	}
	close_result = close(file_desc);
	if (close_result == -1)
		return (-1);
	return (size);
}

int	ft_is_nbr(char *nbr, char *buf)
{
	int	i;

	i = 0;
	while (nbr[i] == buf[i] && nbr[i])
		i++;
	if (!nbr[i])
		return (1);
	return (0);
}

int	init_parsing(char **buf, int *file_desc)
{
	int		file_size;
	int		read_result;

	*file_desc = open("number.dict", O_RDONLY);
	if (*file_desc == -1)
		return (0);
	file_size = get_file_size("number.dict");
	if (file_size == -1)
		return (0);
	*buf = malloc((file_size + 1) * sizeof(char));
	if (!*buf)
		return (0);
	read_result = read(*file_desc, *buf, file_size);
	if (read_result == -1)
		return (0);
	return (1);
}

int	end_parsing(int file_desc)
{
	int	close_result;

	close_result = close(file_desc);
	if (close_result == -1)
		return (0);
	return (1);
}

int	error(void)
{
	ft_putstr("DictError\n");
	return (NULL);
}

char	*ft_parse(char *nbr)
{
	int		file_desc;
	char	*buf;
	int		i;
	char	*res;

	buf = NULL;
	if (!init_parsing("number.dict", buf, &file_desc))
		return (error());
	res = NULL;
	i = 0;
	while (buf[i])
	{
		if (ft_is_nbr(nbr, buf + i))
		{
			res = ft_get_nbr(buf + i);
			if (!res)
				return (error());
			break ;
		}
		ft_next_line(&i, buf);
	}
	free(buf);
	if (!end_parsing(file_desc))
		return (error(NULL));
	return (res);
}
