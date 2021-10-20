/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:11 by wban              #+#    #+#             */
/*   Updated: 2021/10/20 12:10:38 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	reset(int n, int arr[]);
void	print(int arr[], int n);
void	makenumber(int arr[], int n, int i);

void	ft_print_combn(int n)
{
	int	i;
	int	arr[9];

	i = n;
	reset(n, arr);
	makenumber(arr, n, i);
}

void	reset(int n, int arr[])
{
	int	i;

	i = 1;
	arr[0] = 0;
	arr[n - 1] = 1;
	while (i < n - 1)
	{
		arr[i] = 0;
	}
	print(arr, n);
}

void	print(int arr[], int n)
{
	int		i;
	char	temp;

	i = 0;
	while (i < n)
	{
		temp = arr[i];
		write(1, &temp, 1);
		i++;
	}
}

void	makenumber(int arr[], int n, int i)
{
	int	j;

	j = 10 - i;
	while (a[n - i] <= j)
	{
		if (i != 1)
			makenumber(arr, n, i - 1);
		write(1, ", ", 2);
		a[n - i]++;
		print(arr, n);
	}
	if (a[n - i] == j + 1)
	{
		a[n - i - 1]++;
		a[n - i] = a[n - i - 1] + 1;
	}
	makenumber(arr, n, i - 1);
}
