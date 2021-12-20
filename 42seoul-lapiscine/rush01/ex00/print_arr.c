#include<unistd.h>
void	print_arr(int *arr)
{
	int i;
	i = 0;
	while (i < 16)
	{
		char c = arr[i] + '0';
		write(1, &c, 1);
		if (i % 4 == 0)
		{
			write(1, "\n", 1);
		}
		i++;
	}
}
