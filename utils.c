#include <unistd.h>
#include <sys/types.h>
#include "linked_list.h"

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	i++;

	return i;
}

void	print(char *str)
{
	write(1, str, my_strlen(str));
	return;
}

void	write_sh()
{
	write(1, "mavsh~0.01", 10);
	if(geteuid() == 0)
	print("#");
	else
	print("$");
	print(" ");
}

char	*receive_line()
{
	char *line;
	linked_list *ptr;

	ptr = get_linked_list();
	line = get_line(ptr);

	return line;
}
