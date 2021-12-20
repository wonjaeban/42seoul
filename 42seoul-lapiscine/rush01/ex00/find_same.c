/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_same.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naekim <naekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:33:42 by naekim            #+#    #+#             */
/*   Updated: 2021/10/17 20:10:30 by naekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*divide_num(int a);
int	set_array_size(int *arr);

void	put_array2(int **arr2, int *arr, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 4)
		{
			arr2[i][j] = divide_num(arr[i])[j];
			j++;
		}
		i++;
	}
}

void	compare_num(int **arr2, int size, int *output)
{
	int		i;
	int		j;
	int		value;

	value = 0;
	i = 0;
	while (i < 4)
	{
		j = 1;
		while (j < size)
		{
			if (arr2[j][i] != arr2[j - 1][i])
			{
				value = 0;
				output[i] = 0;
				break ;
			}
			else
				value = 1;
			j++;
		}
		if (value == 1)
			output[i] = arr2[j - 1][i];
		i++;
	}
}

int	*find_same(int *arr)
{
	int		i;
	int		*output;
	int		**arr2;
	int		size;

	size = set_array_size(arr);
	output = (int *)malloc(sizeof(int) * 4);
	i = 0;
	arr2 = (int **)malloc(sizeof(int) * size);
	while (i < 4)
	{
		arr2[i] = (int *)malloc(sizeof(int) * 4);
		i++;
	}
	put_array2(arr2, arr, size);
	compare_num(arr2, size, output);
	return (output);
}
