/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:45:42 by wban              #+#    #+#             */
/*   Updated: 2021/10/14 15:53:06 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_putnbr(int nb);
void	temp(int a);

int	main(void)
{
	temp(ft_putnbr(98765432));
}

int	ft_putnbr(int nb)
{	
	int		cn;
	char	a;

	cn = nb;
	if (cn < 0)
	{
		cn *= -1;
		write(1, "-", 1);
	}
	if (cn / 10 == 0)
		return (cn % 10);
	a = ft_putnbr(cn / 10) + '0';
	write(1, &a, 1);
	return (cn % 10);
}

void	temp(int a)
{
	char	b;

	b = a + '0';
	write(1, &b, 1);
}
