/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 01:28:21 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/02 17:51:44 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.dict"


int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src);

void	ft_putstr(char *str);

void	ft_next_line(int *i, char *buf);

int	*ft_is_nbr(char *to_find, char *str);

int	ft_str_is_alpha(char *str, int i);

char	*ft_get_nbr(char *buf);

void	wich_H_M(char *str, char *word, int count, int n);

void	find_d(char *str, char *word, int count, int n);

void	find_u(char *str, char *word, int n);

void	found_trio_word(char *str, char *word, int count, int i);

char	*ft_convert_nbr(char *nbr, char *word);

int	get_file_size(const char *path);

int	ft_is_nbr(char *nbr, char *buf);

int	init_parsing(const char *path, char **buf, int *file_desc);

int	end_parsing(int file_desc);

void	error(void);

char	*ft_parse(char *nbr);

int	main(char *nbr);
