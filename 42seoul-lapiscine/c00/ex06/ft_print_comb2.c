/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:29:41 by wban              #+#    #+#             */
/*   Updated: 2021/10/20 10:18:41 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void)
{
	int		a[2];
	char	b[5];

	a[0] = 0;
	a[1] = 1;
	while (a[0] <= 98)
	{
		while (a[1] <= 99)
		{
			b[0] = a[0] / 10 + '0';
			b[1] = a[0] % 10 + '0';
			b[2] = ' ';
			b[3] = a[1] / 10 + '0';
			b[4] = a[1] % 10 + '0';
			write(1, b, 5);
			if (a[0] == 98 && a[1] == 99)
				break ;
			write(1, ", ", 2);
			a[1]++;
		}
		a[0]++;
		a[1] = a[0] + 1;
	}
}
