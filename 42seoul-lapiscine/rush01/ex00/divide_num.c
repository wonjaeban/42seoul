/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naekim <naekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:21:18 by naekim            #+#    #+#             */
/*   Updated: 2021/10/17 19:28:14 by naekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*divide_num(int a)
{
	int		*arr_i;

	arr_i = (int *)malloc(sizeof(int) * 4);
	arr_i[3] = a % 10;
	arr_i[2] = (a % 100) / 10;
	arr_i[1] = (a % 1000) / 100;
	arr_i[0] = a / 1000;
	return (arr_i);
}