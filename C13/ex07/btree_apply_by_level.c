#include "ft_btree.h"
#include <stdlib.h>

void	push(t_queue **q, t_btree *node, int level)
{
	t_queue *i;
	t_queue *back;

	back = (t_queue *)malloc(sizeof(t_queue));
	back->node = node;	
	back->level = level;
	back->next = 0;
	if (!(*q))
		*q = back;
	else
	{
		i = *q;		
		while (i->next)
			i = i->next;
		i->next = back;
	}
}

void	pop(t_queue **q)
{
	t_queue	*front;

	front = *q;
	*q = (*q)->next;
	free(front);
}

void	btree_apply_by_level(t_btree *root,
void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_queue	*q;
	t_queue	*front;
	int		level;

	q = 0;
	level = 0;
	if (root)
		push(&q, root, 0);
	while (q)
	{
		front = q;
		if (front->node->left)
			push(&q, front->node->left, front->level + 1);
		if (front->node->right)
			push(&q, front->node->right, front->level + 1);
		if (level != front->level)
			applyf(front->node->item, ++level, 1);
		else
			applyf(front->node->item, level, 0);
		pop(&q);
	}
}
