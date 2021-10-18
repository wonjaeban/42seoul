/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:45:42 by wban              #+#    #+#             */
/*   Updated: 2021/10/18 15:07:57 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_putnbr(int nb);

int	main(void)
{	
	char	temp;

	temp = ft_putnbr(-2147483648) + '0';
	if (temp != 47)
		write(1, &temp, 1);
}

int	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (-1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb / 10 == 0)
		return (nb % 10);
	a = ft_putnbr(nb / 10) + '0';
	write(1, &a, 1);
	return (nb % 10);
}
