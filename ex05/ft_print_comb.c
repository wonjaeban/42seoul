/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:45:02 by wban              #+#    #+#             */
/*   Updated: 2021/10/12 17:10:26 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd>

void	ft_print_comb(void)
{
	int	num[2];

	num[0] = 0;
	num[1] = 1;
	num[2] = 2;
	while (num[0] <= 7)
	{
		while (num[1] <= 8)
		{
			while (num[2] <= 9)
			{	
				if ((num[2] != num[0]) && (num[2] != num[1]))
				{
					write(1, num, 1);
					write(1, num + 1, 1);
					write(1, num + 2, 1);
				}
				num[2]++;
			}
			num[1]++;
			num[2] == 0;
		}
		num[0]++;
		num[1] == 0;
	}
}