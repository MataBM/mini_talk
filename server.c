#include <unistd.h>
#include<signal.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

void	handle_sig(int sig)
{
	static int	power;
	static int	byte;

	if (sig == SIGUSR1)
		byte += 1 << (7 - power);
	power++;
	if (power == 8)
	{
		ft_printf("%c", byte);
		power = 0;
		byte = 0;
	}
}

int	main()
{
	ft_printf("PID: %d\n", getpid());
	signal(SIGUSR1, handle_sig);
	signal(SIGUSR2, handle_sig);
	while (1)
		;
	return 0;
}