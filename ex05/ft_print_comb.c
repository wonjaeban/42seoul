/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:45:02 by wban              #+#    #+#             */
/*   Updated: 2021/10/11 21:54:41 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	int num;

	a = 321;
	b = 432;
	c = 543;
	num = 3;
	while(num >= 0)
	{
		write(1, 
