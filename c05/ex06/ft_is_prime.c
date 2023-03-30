int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

/*
#include <stdio.h>

int main (void)
{
    if (ft_is_prime(83) > 0)
	    printf("Is_Prime");
    else 
        printf("Not_Prime");
}
*/