#include <unistd.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"
#include <signal.h>

void	the_butcher(int pid, char *msg)
{
	int	byte;
	int	i;

	i = -1;
	while (msg[++i])
	{
		byte = 7;
		while (byte >= 0)
		{
			if (msg[i] >> byte & 1)
			{
				if (kill(pid, SIGUSR1) == -1)
					{
						write(2, "ERRO\nWrong PID", 15);
						exit (0);
					}
			}
			else if (kill(pid, SIGUSR2) == -1)
			{
				write(2, "ERRO\nWrong PID", 15);
				exit (0);
			}
			usleep(1);
			byte--;
		}
	}
}

int main(int arg_c, char **arg_v)
{
	if (arg_c != 3)
	{
		write(2, "ERROR\nNOT ENOUGH ARGUMENTS\n", 27);
		return (1);
	}
	if (ft_isalnum(ft_atoi(arg_v[1])))
	{
		write(2, "ERROR\nPID ISN'T NUM\n", 27);
		return (1);
	}
	the_butcher(ft_atoi(arg_v[1]), arg_v[2]);
	return (0);
}