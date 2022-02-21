/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:48:50 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 14:48:52 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define MAP_ERR "map error\n"
# define MAX_BUF_SIZE 1000000001

typedef struct s_square{
	int	x;
	int	y;
	int	len;
}	t_square;

typedef struct s_map{
	char	empty;
	char	full;
	char	obstacle;
	int		width;
	int		height;
	char	**arr;
}				t_map;

void		*safe_malloc(int size);
int			free_map_info(t_map *map, char *info);
void		free_map(t_map *map, int size);
char		*free_line(char *line);

int			get_min(int a, int b, int c);

char		*read_first_line(int fd);
int			read_map_info(t_map *map, char *info);
int			set_line(t_map *map, int col, char *start, char *end);
int			parse_line(t_map *map, char *data);
t_map		*read_map(int fd);

void		draw_square(t_map *map, t_square *square);
void		print_answer(t_map *map, t_square *square);

int			**map_dp_init(t_map *map);
void		set_square(t_square *square, int x, int y, int len);
int			check_square(int i, int j, int **dp);
void		find_square_dp(t_map *map, t_square *square, int **dp);
t_square	*find_square(t_map *map);

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_strncpy(char *dst, char *src, int size);
int			ft_atoi(char *str);

int			is_char_printable(char ch);
int			is_number(char ch);
int			is_map_info_valid(t_map *map);
int			is_map_valid(t_map *map, char *line);

#endif
