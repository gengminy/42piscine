#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}	t_btree;

typedef struct		s_queue
{
	t_btree			*node;
	struct s_queue	*next;
	int				level;
}	t_queue;


#endif