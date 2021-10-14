/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:45:42 by wban              #+#    #+#             */
/*   Updated: 2021/10/14 17:01:34 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb);
int		temp(int nb);

int	main(void)
{
	ft_putnbr(-98765432);
}

int	temp(int nb)
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
	a = temp(cn / 10) + '0';
	write(1, &a, 1);
	return (cn % 10);
}

void	ft_putnbr(int nb)
{
	char	b;

	b = temp(nb) + '0';
	write(1, &b, 1);
}
