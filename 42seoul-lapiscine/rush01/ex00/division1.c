/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   division1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:01:42 by wban              #+#    #+#             */
/*   Updated: 2021/10/17 20:29:30 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*division1(char argv);
int	*division1_2(void);
int	*division1_3(void);
int	*division1_4(void);

int	*division1(char argv)
{
	if (argv == '2')
		return (division1_2());
	else if (argv == '3')
		return (division1_3());
	else
		return (division1_4());
}

int	*division1_2(void)
{
	int	count;
	int	*result;

	count = 2;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 4123;
	result[1] = 4213;
	return (result);
}

int	*division1_3(void)
{
	int	count;
	int	*result;

	count = 3;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 4132;
	result[1] = 4312;
	result[2] = 4231;
	return (result);
}

int	*division1_4(void)
{
	int	count;
	int	*result;

	count = 1;
	result = (int *)malloc(sizeof(int) * count);
	result[0] = 4321;
	return (result);
}
