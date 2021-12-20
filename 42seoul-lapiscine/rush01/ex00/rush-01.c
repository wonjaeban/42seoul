#include<unistd.h>
#include<stdlib.h>
int *init_arr(int *pro_arr);
int *pro_arr_in(char *arr_done);
void	print_arr(int *arr);

int count(char **argv)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while(argv[1][i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

char *erase_space(int length, char *input)
{
	char *arr_done;
	int		i;
	int		j;

	arr_done = (char *)malloc(sizeof(char) * (length / 2 + 1));
	i = 0;
	j = 0;
	while (input[i] != '\0')
	{
		if (input[i] != ' ')
		{
			arr_done[j] = input[i];
			j++;
		}
		i++;
	}
	return (arr_done);
}

int	main(int argc, char **argv)
{
	char *arr_done;
	int *pro_arr;
	int *put_arr;
	
	arr_done = (char *)malloc(sizeof(int)*16);
	pro_arr = (int *)malloc(sizeof(int)*16);
	put_arr = (int *)malloc(sizeof(int)*4);
	
	arr_done = erase_space(count(argv), argv[1]);
	pro_arr = init_arr(pro_arr);
	pro_arr = pro_arr_in(arr_done);
	//pro_arr = pro_arr_complete(pro_arr, arr_done);
	print_arr(pro_arr);
	return (0);
}
