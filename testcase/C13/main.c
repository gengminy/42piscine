#include <stdio.h>
#include <string.h>
#include "ft_btree.h"
#include "./ex00/btree_create_node.c"
#include "./ex01/btree_apply_prefix.c"
#include "./ex02/btree_apply_infix.c"
#include "./ex03/btree_apply_suffix.c"
#include "./ex04/btree_insert_data.c"
#include "./ex05/btree_search_item.c"
#include "./ex06/btree_level_count.c"
#include "./ex07/btree_apply_by_level.c"

void	printNode(void *item)
{
	printf("%s -> ", (char *)item);
}
void	apply_function(void *item, int current_level, int is_first)
{
	printf("%s's level : %d. ", (char *)item, current_level);
	if (is_first)
		printf("It is first\n");
	else
		printf("It is not first\n");
}
int	ft_strcmp(void *str1, void *str2)
{
	return (strcmp((char *)str1, (char *)str2));
}

int main()
{
	t_btree	*tree;

	tree = btree_create_node("root");
	tree->left = btree_create_node("left_node");
	tree->right = btree_create_node("right_node");
	tree->left->left = btree_create_node("left_left_node");
	tree->left->right = btree_create_node("left_right_node");
	tree->right->right = btree_create_node("right_right_node");
	printf("Apply prefix\n");
	btree_apply_prefix(tree, &printNode);
	printf("\n");
	printf("Apply infix\n");
	btree_apply_infix(tree, &printNode);
	printf("\n");
	printf("Apply suffix\n");
	btree_apply_suffix(tree, &printNode);
	printf("\n");
	printf("\n");

	t_btree *tree_sorted = 0;
	btree_insert_data(&tree_sorted, "CCC", &ft_strcmp);
	btree_insert_data(&tree_sorted, "AAB", &ft_strcmp);
	btree_insert_data(&tree_sorted, "ABB", &ft_strcmp);
	btree_insert_data(&tree_sorted, "AAA", &ft_strcmp);
	btree_insert_data(&tree_sorted, "EEE", &ft_strcmp);
	btree_insert_data(&tree_sorted, "DDD", &ft_strcmp);
	btree_insert_data(&tree_sorted, "DDE", &ft_strcmp);
	btree_insert_data(&tree_sorted, "FFF", &ft_strcmp);
	printf("Print tree prefix\n");
	btree_apply_prefix(tree_sorted, &printNode);
	printf("\n");
	
	char *ch = "FFF";
	printf("%s : %s\n", ch, btree_search_item(tree_sorted, ch, &ft_strcmp));
	ch = "ZZZ";
	printf("%s : %s\n", ch, btree_search_item(tree_sorted, ch, &ft_strcmp));
	printf("\n");

	printf("%s's level : %d\n", tree_sorted->item, btree_level_count(tree_sorted));
	printf("%s's level : %d\n", tree_sorted->right->item, btree_level_count(tree_sorted->right));
	printf("\n");

	btree_apply_by_level(tree_sorted, &apply_function);
}
