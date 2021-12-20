#include<stdio.h>
#include<stdlib.h>
int *num_input(char num, char *arr_done, int i);
int *find_same(int *arr);

int *put_to_pro_arr(int i, int *pro_arr, int *put_arr)
{
	int j = 0;
	int k = 0;
	if (i >= 0 && i <= 3)
	{
		while (j < 4)
		{
			pro_arr[i + 4*j] = put_arr[j];
			j++;
		}
	}
	if (i >= 8 && i <= 11)
	{
		k = i - 8;
		while (j < 4)
		{
			pro_arr[4*k + j] = put_arr[j];
			j++;
		}
	}
	return (pro_arr);
}

int *pro_arr_in(char *arr_done)
{
	int	i;
	char  num;
	int *pro_arr;
	int *put_arr;
	int *result;
	put_arr = (int *)malloc(sizeof(int)*4);
	pro_arr = (int *)malloc(sizeof(int)*16);

	i = 0;
	num = '0';
	while (i < 12)
	{
		if (i >= 4 && i <= 7)
			continue;
		num = *(arr_done + i);
		result = num_input(num, arr_done, i);
		printf("%d \n", result[0]);
		put_arr = find_same(result);
		pro_arr = put_to_pro_arr(i, pro_arr, put_arr);
		i++;
	}
	return (pro_arr);
}
