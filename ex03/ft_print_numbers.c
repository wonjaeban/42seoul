/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:16:02 by wban              #+#    #+#             */
/*   Updated: 2021/10/11 21:24:24 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd>

void	ft_print_numbers(void)
{
	int	number;
	int	result;
	int	s;

	number = 9876543210;
	s = number / 10;
	result = number % 10;
	while (1)
	{
		write(1, &result, 1);
		if (s == 0)
			break ;
		result = s % 10;
		s /= 10;
	}
}
