#include <unistd.h>
#include "utils.h"

#define MAVSH_EXIT_CODE 0x0d

int	main(int argc, char **argv)
{
	char *line;
	char code;

	code = 0;
	while(code != MAVSH_EXIT_CODE)
	{
		write_sh();
		line = receive_line();
		print(line);
	}

	print("\n");
	return 0;
}
