/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:14:01 by kvisouth          #+#    #+#             */
/*   Updated: 2022/10/02 18:37:02 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH02_H

#define RUSH02_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "numbers.dict"
#include "convertEN.c"
#include "ft_get_nbr.c"
#include "ft_is_nbr.c"
#include "ft_next_line.c"
#include "ft_putstr.c"
#include "ft_strcat.c"
#include "ft_strlen.c"
#include "read_number.c"


void	wich_H_M(char *str, char *word, int count, int n);
void	find_d(char *str, char *word, int count, int n);
void	find_u(char *str, char *word, int n);
void	found_trio_word(char *str, char *word, int count, int i);
void	*ft_convert_nbr(char *nbr, char *word);
int	ft_str_is_alpha(char *str, int i);
char	*ft_get_nbr(char *buf);
int	ft_is_nbr(char *to_find, char *str);
void	ft_next_line(int *i, char *buf);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
int	ft_strlen(char *str);
int	get_file_size(const char *path);
int	ft_is_nbr(char *nbr, char *buf);
int	init_parsing(const char *path, char **buf, int *file_desc);
int	end_parsing(int file_desc);
void	error(void);
char	*ft_parse(char *nbr);

#endif
