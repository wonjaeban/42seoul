#include<stdlib.h>
#include<stdio.h>
int	set_array_size(int *arr);
int	*division1(char argv);
int	*division2(char argv);
int *division3(char argv1, char argv2);

int	*num_input(char num, char *arr_done, int i)
{
	int		*result;
	char	rev_num;
	int		count;

	count = 0;
	rev_num = *(arr_done + i + 4);

	printf("%c \n", num);
	printf("%c \n", rev_num);
	if(num == 52) printf("true");

	if (num == '1')
	{
		count = set_array_size(division1(rev_num));
		result = (int *)malloc(sizeof(int) * count);	
		result = division1(rev_num);
	}
	else if (num == '2')
	{
		count = set_array_size(division2(rev_num));
		result = (int *)malloc(sizeof(int) * count);
		result = division2(rev_num);
	}
	else if (num == '3' || num == '4')
	{
		printf("hi");
		count = set_array_size(division3(num, rev_num));
		result = (int *)malloc(sizeof(int) * count);
		printf("%d\n", *division3(num, rev_num));
		return division3(num, rev_num);
	}
	return (result);
}
