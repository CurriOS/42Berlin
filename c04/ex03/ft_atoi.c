int ft_atoi(char *str)
{
    int i;
    int num;
    int count_minus;

    num = 0;
    i = 0;
    count_minus = 0;

    while (str[i] <= '0' || str[i] >= '9')
    {
        if (str[i] == '-')
            count_minus++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    if (count_minus % 2 == 1)
        return(-num);
    else
        return(num);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
    printf("%d", ft_atoi(argv[1]));
    printf("\n");
}
*/