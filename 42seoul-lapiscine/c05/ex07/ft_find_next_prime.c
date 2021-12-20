/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:07:11 by wban              #+#    #+#             */
/*   Updated: 2021/10/26 21:09:20 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long long	i;
	int			count;

	i = 2;
	count = 0;
	if (nb <= 2)
		return (2);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			count++;
			break ;
		}
		i++;
	}
	if (count == 1)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
