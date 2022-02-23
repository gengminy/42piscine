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

typedef struct s_hexdump_file {
	char	*filename;
	char	*program;
	char	*prev;
	char	*buffer;
	 int	duplicated;
	 int	file_len;
	 int	is_printed;
	 int	offset;
}	t_hexdump_file;

void			print_hexdump(t_hexdump_file *hf);
void			print_hex_index(int index, int flag, int depth);
void			print_hex_string(char *str, int flag);
void			print_string(char *str, int flag);
void			print_error(char *filename, char *program);

void			ft_putchar(unsigned char c);
void			ft_putstr(char *str);
int				ft_strcmp(char *a, char *b);
void			ft_strncpy(char *dst, char *src, int size);
char			*malloc_with_null_init(int size);

int				is_char_printable(unsigned char c);
int				is_flag(char *str);
int				is_str_equal(char *c1, char *c2);

t_hexdump_file	*alloc_hexdump_file(void);
void			set_hf_filename(t_hexdump_file *hf, char *file, char *program);
void			free_hf(t_hexdump_file *hf);

extern int	g_flag;

#endif