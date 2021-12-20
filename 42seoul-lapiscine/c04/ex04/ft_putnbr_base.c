/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@42seoul.student.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:06:38 by wban              #+#    #+#             */
/*   Updated: 2021/10/25 09:58:00 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	printresult(unsigned int i, unsigned int number, char *base);
int		check(char *base);
int		compare(int length, char *base);

void	ft_putnbr_base(int nbr, char *base)
{	
	int				temp;
	unsigned int	number;
	unsigned int	i;

	temp = check(base);
	if (temp == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		number = nbr * -1;
	}
	else
		number = nbr;
	i = 0;
	while (base[i])
		i++;
	printresult(i, number, base);
}

int	check(char *base)
{
	int	count;
	int	i;
	int	length;
	int	result;

	i = 0;
	count = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	length = i;
	result = compare(length, base);
	if (result == 0)
		return (0);
	return (1);
}

int	compare(int length, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	printresult(unsigned int i, unsigned int number, char *base)
{
	if (number >= i)
	{
		printresult(i, number / i, base);
		printresult(i, number % i, base);
	}
	else
		write(1, base + number, 1);
}
