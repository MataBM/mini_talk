#include <unistd.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"
#include <signal.h>

void	the_butcher(int pid, char *msg)
{
	int	byte;
	int	i;
	char chr;

	i = -1;
	while (msg[++i])
	{
		byte = 8;
		chr = msg[i];
		while (byte)
		{
			if (chr % 2)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			chr /= 2;
			byte--;
			usleep(1);
		}
		kill(pid, SIGCONT);
	}
}

int main(int arg_c, char **arg_v)
{
	if (arg_c != 3)
	{
		write(2, "ERROR\nNOT ENOUGH ARGUMENTS\n", 27);
		return (1);
	}
	the_butcher(ft_atoi(arg_v[1]), arg_v[2]);
}