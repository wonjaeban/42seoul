/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   division2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:02:15 by wban              #+#    #+#             */
/*   Updated: 2021/10/17 20:30:45 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*division2(char argv);
int	*division2_1(void);
int	*division2_2(void);
int	*division2_3(void);

int	*division2(char argv)
{
	if (argv == '1')
		return (division2_1());
	else if (argv == '2')
		return (division2_2());
	else
		return (division2_3());
}

int	*division2_1(void)
{
	int	count;
	int	*result;

	count = 2;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 3214;
	result[1] = 3124;
	return (result);
}

int	*division2_2(void)
{
	int	count;
	int	*result;

	count = 6;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 1423;
	result[1] = 2413;
	result[2] = 3412;
	result[3] = 3241;
	result[4] = 3142;
	result[5] = 2143;
	return (result);
}

int	*division2_3(void)
{
	int	count;
	int	*result;

	count = 3;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 1432;
	result[1] = 2431;
	result[2] = 3421;
	return (result);
}
