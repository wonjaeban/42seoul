/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:10:31 by wban              #+#    #+#             */
/*   Updated: 2021/10/25 10:42:09 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	temp;

	temp = nb;
	result = 1;
	if (temp == 1 || temp == 0)
		return (1);
	else if (temp < 0)
		return (0);
	while (temp >= 2)
	{
		result *= temp;
		temp--;
	}
	return (result);
}
