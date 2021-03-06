/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:45:02 by wban              #+#    #+#             */
/*   Updated: 2021/10/18 12:38:23 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{	
	char	num[3];

	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{	
				write(1, num, 1);
				write(1, num + 1, 1);
				write(1, num + 2, 1);
				if (num[0] == '7' && num[1] == '8' && num[2] == '9')
					break ;
				write(1, ", ", 2);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
