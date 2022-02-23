#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}
