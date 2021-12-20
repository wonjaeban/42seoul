/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:35:56 by wban              #+#    #+#             */
/*   Updated: 2021/10/27 01:05:19 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ten_queens_puzzle(void)
{
	int	*a;
	int	b[10];

	a = b;
	start(i);
	
}

int	start(int i)
{
	while (i <= 9)
	{
	check(a, i, n);
	i++;
	}
}

int	check(int *a, int i, int n)
{
	if ()
	{
		a[i] = n;
		return ();
	}
	return (check(a, i, n + 1);

}

