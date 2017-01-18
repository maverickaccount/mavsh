#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct linked_list_struct
{
	char c;
	struct linked_list_struct *next;
}linked_list;

linked_list     *add_element();
linked_list     *get_linked_list();
int		get_size(linked_list *ptr);
char		*get_line(linked_list *ptr);

#endif
