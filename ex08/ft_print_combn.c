/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:11 by wban              #+#    #+#             */
/*   Updated: 2021/10/18 18:50:15 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n)
{
	int	arr[n];
	arr[0] = 0;
	arr[n-1] = 1;
	int i =1;
	while(i<n-1)
	{
		arr[i]=0;
	}
	print(arr, n);
	
	i = 1;
	while(
	{
		
		while(a[n-i] < 9){
				write(1, ", ", 2);
				a[n-i]++;
				print(arr, n);
		}
		a[n-(i+1)]++;
		if(a[n-(i+1)] == 9)
			break;
		a[n-i] = a[n-(i+1)] + 1;

		}
	i++;
	a[i]


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

