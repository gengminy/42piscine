/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:38:27 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 13:38:28 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEXDUMP_H
# define HEXDUMP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>


void	print_error(char *filename, char *program);
void	print_hexdump(char *prev, char *buffer, int on_flag);
void	print_input_offset(int n, int offset, int on_flag);
void	print_hexadecimal_bytes(char *str, int size, int on_flag);
void	print_characters(char *str, int len);

void	ft_putchar(unsigned char c);
void	ft_putstr(char *str);
int		is_char_printable(unsigned char c);
int		is_flag(char *str);
int		ft_strcmp(char *a, char *b);

void	ft_strncpy(char *dst, char *src, int size);
void	hexdump_stdin(void);
int		hexdump(int fd, int flag, char *filename, char *program);

#endif