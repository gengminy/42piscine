#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_square{
	int		x;
	int		y;
	int		len;
}				t_square;

typedef struct	s_map{
	char	empty;
	char	full;
	char	obstacle;
	int		width;
	int		height;
	char	**arr;
}				t_map;

void	*safe_malloc(int size);
void	free_map_info(t_map *map, char *info);
void	free_map(t_map *map, int size);
char	*free_line(char *line);

int			get_min(int a, int b, int c);

char	*read_line(int fd);
int		read_map_info(t_map *map, char *info);
t_map	*read_map(int fd);
int		set_map_nth_line(int i, t_map *map, char *line);
char	*get_double_size_line(char *src, int size);

void	draw_square(t_map *map, t_square *square);
void	print_answer(t_map *map, t_square *square);

int			**map_dp_init(t_map *map);
void		set_square(t_square *square, int x, int y, int len);
int			check_square(int i, int j, int **dp);
void		find_square_dp(t_map *map, t_square *square, int **dp);
t_square	*find_square(t_map *map);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_strncpy(char *dst, char *src, int size);
int		ft_atoi(char *str);

int		is_char_printable(char ch);
int		is_number(char ch);
int		is_map_info_valid(t_map *map);
int		is_map_valid(t_map *map, char *line);

# define MAP_ERR "map error\n"

#endif
