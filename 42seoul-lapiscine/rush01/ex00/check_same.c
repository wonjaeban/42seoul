/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_same.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naekim <naekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:50:08 by naekim            #+#    #+#             */
/*   Updated: 2021/10/17 20:09:28 by naekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*divide_num(int a);
int	set_array_size(int *arr);

void	put_array2_check(int **arr2, int *arr, int size, int *input)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 4)
		{
			if (i == 0)
				arr2[i][j] = input[j];
			else
				arr2[i][j] = divide_num(arr[i - 1])[j];
			j++;
		}
		i++;
	}
}

int	set_same_count(int **arr2, int i)
{
	int		j;
	int		same_num;

	j = 0;
	same_num = 0;
	while (j < 4)
	{
		if (arr2[i][j] == arr2[0][j])
			same_num++;
		j++;
	}
	return (same_num);
}

int	compare_num_check(int **arr2, int size)
{
	int		i;
	int		j;
	int		same_num;
	int		value;
	int		count;

	i = 1;
	value = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		same_num = set_same_count(arr2, i);
		if (same_num > 1)
		{
			value = i;
			count++;
		}
		i++;
	}
	if (count > 1)
		value = 0;
	return (value);
}

int	*check_same(int *arr, int *input)
{
	int		i;
	int		value;
	int		size;
	int		**arr2;
	int		*output;

	size = set_array_size(arr) + 1;
	output = (int *)malloc(sizeof(int) * 4);
	arr2 = (int **)malloc(sizeof(int) * size);
	i = 0;
	while (i < 4)
	{
		arr2[i] = (int *)malloc(sizeof(int) * 4);
	}
	put_array2_check(arr2, arr, size, input);
	value = compare_num_check(arr2, size);
	i = 0;
	while (i < 4)
	{
		output[i] = arr2[value][i];
		i++;
	}
	return (output);
}
