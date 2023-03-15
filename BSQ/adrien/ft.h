/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:24:54 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/23 15:55:28 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
#include <stdio.h>

#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define STDIN_FILE    0       /* Standard input.  */
#define STDOUT_FILE   1       /* Standard output.  */
#define STDERR_FILE   2       /* Standard error output.  */

/* CUSTOM FUCTION */
char	*ft_open(char *map_name);
void	ft_std_input();

/* FUCTION */
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstr_fd(int fd, char *str);
void	ft_putnbr(int nb);
int	ft_strlen(char *str);
char	*ft_strdup(char *src);

#endif
