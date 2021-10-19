/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:11 by wban              #+#    #+#             */
/*   Updated: 2021/10/19 12:54:52 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n)
{
	int	arr[n];
	reset(n, arr);
	int i = n;
	int j = 9 - (n-1);
	makenumber(arr, i, j, n);

	while(a[n-3] <= 7)
	{
	while(a[n-2] <= 8)
	{
		
		while(a[n-1] < 9)
		{
			write(1, ", ", 2);
			a[n-1]++;
			print(arr, n);
		}
		a[n-2]++;
		a[n-1] = a[n-2] + 1;

		}
	a[n-3]++;
	a[n-2] = a[n-3] + 1;
	a[n-1] = a[n-2] + 1;
	}
}

void	reset(int n, int arr[])
{
	arr[0] = 0;
	arr[n-1] = 1;
	int i =1;
	while(i<n-1)
	{
		arr[i]=0;
	}
	print(arr, n);
}

void	print(int arr[], int n)
{
	int		i;
	char	temp;

	i=0;
	while(i < n)
	{
		temp = arr[i];
		write(1, &temp, 1);
		i++;
	}
}

void	makenumber(int arr[], int i, int j, int n)
{
	int	temp;

	if(i ==1)
	{
		while(a[n-1] < 9)
		{
			write(1, ", ", 2);
			a[n-1]++;
			print(arr, n);
		 }
		return;
	}
	makenumber(arr, i-1, j+1, n);
	while(a[n-i] <= 9- (i-1))
	{
		temp = i;
		a[n-temp]++;
		while(n-(temp-1) <= n-1)
		{
			a[n-(temp-1)] = a[n - temp] +1;
			temp--
		}
	write(1, ", ", 2);
	print(arr, n);
	while(a[n-1] < j)
	{
		 write(1, ", ", 2);
		 a[n-1]++;
	     print(arr, n);
	}
	}
}

