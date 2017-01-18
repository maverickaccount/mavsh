#include "linked_list.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

linked_list	*add_element()
{
	linked_list *ptr;
	ptr = malloc(sizeof(linked_list));

	if(ptr)
	{
		ptr->c = 0;
		ptr->next = NULL;
	}
	return ptr;
}

linked_list	*get_linked_list()
{
	linked_list *ptr;
	linked_list *prev;
	linked_list *root;

	ptr = add_element();
	root = ptr;
	scanf("%c", &(ptr->c));
	while(ptr->c != '\n' && ptr->c != EOF)
	{
		prev = ptr;
		prev->next = add_element();
		ptr = prev->next;
		scanf("%c", &(ptr->c));
	}
	return root;
}

int	get_size(linked_list *ptr)
{
	int size = 0;
	while(ptr != NULL && size < 2147483647)
	{
		ptr = ptr->next;
		size++;
	}
	return size;
}

char	*get_line(linked_list *ptr)
{
	char *line;
	int size;
	int i;
	linked_list *ptr2;

	ptr2 = ptr;
	i = 0;
	size = get_size(ptr);
	line = malloc(size);
	
	while(i < size)
	{
		line[i] = ptr->c;
		ptr = ptr->next;
		i++;
	}
	return line;
}
