/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   division3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:02:55 by wban              #+#    #+#             */
/*   Updated: 2021/10/17 23:26:51 by naekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	*division3(char argv1, char argv2);
int	*division3_1(void);
int	*division3_2(void);
int	*division4_1(void);

int	*division3(char argv1, char argv2)
{
	if (argv1 == '3' && argv2 == '1')
		return (division3_1());
	else if (argv2 == '2')
		return (division3_2());
	else
		return division4_1();

}

int	*division3_1(void)
{
	int	count;
	int	*result;

	count = 3;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 1324;
	result[1] = 2314;
	result[2] = 2134;
	return (result);
}

int	*division3_2(void)
{
	int	count;
	int	*result;

	count = 3;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 2341;
	result[1] = 1342;
	result[2] = 1243;
	int i =0;
	return (result);
}

int	*division4_1(void)
{
	int	count;
	int	*result;

	count = 1;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 1234;

	return (result);
}
