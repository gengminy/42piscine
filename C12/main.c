#include <stdio.h>
#include <libgen.h>
#include <stdlib.h>
#include <string.h>
#include "./ex00/ft_create_elem.c"
#include "./ex01/ft_list_push_front.c"
#include "./ex02/ft_list_size.c"
#include "./ex03/ft_list_last.c"
#include "./ex04/ft_list_push_back.c"
#include "./ex05/ft_list_push_strs.c"
#include "./ex06/ft_list_clear.c"
#include "./ex07/ft_list_at.c"
#include "./ex08/ft_list_reverse.c"
#include "./ex09/ft_list_foreach.c"
#include "./ex10/ft_list_foreach_if.c"
#include "./ex11/ft_list_find.c"
#include "./ex12/ft_list_remove_if.c"
#include "./ex13/ft_list_merge.c"
#include "./ex14/ft_list_sort.c"
#include "./ex15/ft_list_reverse_fun.c"
#include "./ex16/ft_sorted_list_insert.c"
#include "./ex17/ft_sorted_list_merge.c"

void	print_allNode(t_list *lst)
{
	while(lst)
	{
		printf("%s -> ", (char *)lst->data);
		lst = lst->next;
	}
	printf("0\n");
}

void	print_addr(void *elem)
{
	printf("%p -> ", elem);
}

void	print_str(void *elem)
{
	printf("%s -> ", (char *)elem);
}

void	ft_free(void *elem)
{
	printf("freed %s\n", (char *)elem);
	free(elem);
}

char	*mal(char *str)
{
	int		len = strlen(str);
	char	*elem = (char *)malloc(sizeof(char)*len);
	strcpy(elem, str);
	return elem;
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	
	//ex00
	lst = ft_create_elem(mal("node1"));
	printf("Create node1\n");
	print_allNode(lst);
	printf("\n");

	//ex01
	ft_list_push_front(&lst, mal("node2"));
	printf("PushFront node2\n");
	ft_list_push_front(&lst, mal("node3"));
	printf("PushFront node3\n");
	print_allNode(lst);
	printf("\n");

	//ex02
	printf("Current list size : %d\n", ft_list_size(lst));
	printf("\n");

	//ex03
	t_list	*last_node;
	
	last_node = ft_list_last(lst);
	printf("Last Node\n");
	print_allNode(last_node);
	printf("\n");

	//ex04
	ft_list_push_back(&lst, mal("node4"));
	printf("Push Back node4\n");
	ft_list_push_back(&lst, mal("node5"));
	printf("Push Back node5\n");
	ft_list_push_back(&lst, mal("node6"));
	printf("Push Back node6\n");
	print_allNode(lst);
	printf("\n");
	
	//ex05
	t_list	*lst_strs;
	char	*strs[5];
	strs[0] = mal("str0");
	strs[1] = mal("str1");
	strs[2] = mal("str2");
	strs[3] = mal("str3");
	strs[4] = mal("str4");
	lst_strs = ft_list_push_strs(5, strs);
	printf("Push strs\n");
	print_allNode(lst_strs);
	printf("\n");
	
	//ex06
	ft_list_clear(lst_strs, &ft_free);
	printf("Cleared strs\n");
	printf("\n");
	//use leaks to check
	
	//ex07
	printf("Current list\n");
	print_allNode(lst);
	int N = 0;
	t_list *find_elem = ft_list_at(lst, N);
	printf("%dth elem : %s\n", N, (char *)find_elem->data);
	N = 3;
	find_elem = ft_list_at(lst, N);
	printf("%dth elem : %s\n", N, (char *)find_elem->data);
	N = 10;
	find_elem = ft_list_at(lst, N);
	printf("%dth elem : %s\n", N, (char *)find_elem);
	printf("\n");

	//ex08
	printf("Reverse list\n");
	ft_list_reverse(&lst);
	print_allNode(lst);
	printf("\n");

	//ex09
	printf("Foreach print address and data\n");
	ft_list_foreach(lst, &print_addr);
	printf("\n");
	ft_list_foreach(lst, &print_str);
	printf("\n");
	printf("\n");

	//ex10
	char *str_to_cmp = "node1";
	printf("Foreach_if str is %s\n", str_to_cmp);
	ft_list_foreach_if(lst, &print_str, str_to_cmp, &strcmp);
	printf("\n");
	printf("\n");

	//ex11
	printf("List find str is %s\n", str_to_cmp);
	t_list	*find_lst = ft_list_find(lst, str_to_cmp, &strcmp);
	print_allNode(find_lst);	
	printf("\n");
	
	//ex12
	printf("List Remove if str is %s\n", str_to_cmp);
	ft_list_remove_if(&lst, str_to_cmp, &strcmp, &ft_free);
	print_allNode(lst);
	printf("\n");
	
	//ex13
	t_list	*lst_merge = ft_create_elem(mal("node1_merge"));
	ft_list_push_back(&lst_merge, mal("node2_merge"));
	ft_list_push_back(&lst_merge, mal("node3_merge"));
	ft_list_push_back(&lst_merge, mal("node4_merge"));
	printf("Create list_merge\n");
	print_allNode(lst_merge);
	ft_list_merge(&lst, lst_merge);
	printf("After merge\n");
	print_allNode(lst);
	printf("\n");

	//ex14
	ft_list_sort(&lst, &strcmp);
	printf("After sort\n");
	print_allNode(lst);
	printf("\n");

	//ex15
	ft_list_reverse_fun(lst);
	printf("After reverse\n");
	print_allNode(lst);
	printf("\n");

	//ex16
	ft_list_sort(&lst, &strcmp);
	printf("Sorted list\n");
	print_allNode(lst);
	char *insert = "node3_insert";
	printf("Insert : %s\n", insert);
	ft_sorted_list_insert(&lst, insert, &strcmp);
	print_allNode(lst);
	printf("\n");

	//ex17
	t_list *lst_new = ft_create_elem(mal("node2_newlist"));
	ft_list_push_back(&lst_new, mal("node3_newlist"));
	ft_list_push_back(&lst_new, mal("node4_newlist"));
	printf("newlist\n");
	print_allNode(lst_new);
	printf("After Merge\n");
	ft_sorted_list_merge(&lst, lst_new, &strcmp);
	print_allNode(lst);

	(void)argc;
	char lines[500] = {0,};
	strcat(lines, "leaks ");
	strcat(lines, basename(argv[0]));
	system(lines);

}
