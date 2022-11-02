#include <unistd.h>
#include<signal.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

int	i;

void	ft_putnbr_base_signal(int nbr, char *base, int nbase)
{
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar_fd('-', 1);
	}
	if (nbr >= nbase)
	{
		ft_putnbr_base(nbr / nbase, base, nbase);
	}
	ft_putchar_fd(base[nbr % nbase], 1);
}

void	handle_sigzero(int sig)
{
	// ft_printf("sig: %d\n", sig);
	i = 1;
	sig = 0;
}

void	handle_sigone(int sig)
{
	// ft_printf("sig: %d\n", sig);
	i = 2;
	sig = 0;
}

void	handler(int sig)
{
	i = 100;
	sig = 0;
}

int	main()
{
	int	pid;
	char	num[100];
	int	j;
	int	limit;

	i = 0;
	j = 0;
	limit = 0;
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	signal(SIGUSR1, handle_sigone);
	signal(SIGUSR2, handle_sigzero);
	signal(SIGCONT, handler);
	while (1)
	{
		if (i == 1)
		{
			// write(1, "1", 1);
			num[j] = '1';
			j++;
			i = 0;
			limit++;
		}
		if (i == 2)
		{
			// write(1, "0", 1);
			num[j] = '0';
			j++;
			i = 0;
			limit++;
		}
		if (i == 100 || limit == 8)
		{
			num[j] = '\0';
			j = 0;
			ft_printf("%s\n", num);
			i = 0;
			limit = 0;
		}
	}
	return 0;
}