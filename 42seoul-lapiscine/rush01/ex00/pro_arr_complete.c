#include<stdlib.h>
int *pro_arr_complete(int *pro_arr, int *arr_done)
{
	int i;
	int * for_seek_arr;
	
	for_seek_arr = (int *)malloc(sizeof(int) * 4);
	while (check_end(pro_arr) != 1)
	{
		i = 0;
		int num;
		while(i < 12)
		{
			if(i >= 4 || i <=7)
			   continue;
			for_seek_arr = get_out_from_pro_arr(pro_arr, i);
			check_same(for_seek_arr,pro_arr);
			i++;
		}
	}
	return pro_arr;
}

}
int check_end(int *pro_arr)
{
    int i = 0;
    int value = 1;
    while (i < 16)
    {
		if (pro_arr[i] == 0)
		{
			value = 0;
			break;
		}
		i++;
    }
    return (value);
}
int *get_out_from_pro_arr(int *pro_arr, int i)
{
	int *for_seek_arr;
	int j = 0;
	for_seek_arr = (int *)malloc(sizeof(int) * 4);
	if (i >= 0 && i <= 3)
	{
		while(j < 4)
		{
			for_seek_arr[j] = pro_arr[i + 4 * j];
			j++;
		}
	}
	else
		while(j < 4)
		{
			for_seek_arr[j] = pro_arr[4 * (i-8) + j];
			j++;
		}
	return (for_seek_arr);
}
