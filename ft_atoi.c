#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int	count;
	int	signal;
	int	nbrnbr;

	count = 0;
	signal = 1;
	while (nbr[count] == ' '
		|| nbr[count] == '\f'
		|| nbr[count] == '\n'
		|| nbr[count] == '\r'
		|| nbr[count] == '\t'
		|| nbr[count] == '\v')
		count++;
	if (nbr[count] == '-')
		signal = -1;
	if (nbr[count] == '-' || nbr[count] == '+')
		count++;
	nbrnbr = 0;
	while (ft_isdigit(nbr[count]))
		nbrnbr = nbrnbr * 10 + nbr[count++] - '0';
	return (nbrnbr * signal);
}
