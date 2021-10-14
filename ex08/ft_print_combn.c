/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:11 by wban              #+#    #+#             */
/*   Updated: 2021/10/14 17:09:41 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n);
void	zero(int n);

int	main(void)
{
	ft_print_combn(9);
}

void	ft_print_combn(int n)
{
	int		a;
	char*	b;

	a = 1;
	zero(n-1);
	pt(a);
}

void	zero(int n)
{   
	while (n > 0)
	{   
		write(1, "0", 1);
		n--;
	}
}

void	pt(int a)
{
	

