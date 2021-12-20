/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:53:42 by wban              #+#    #+#             */
/*   Updated: 2021/10/19 21:02:31 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	index;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	index = i;
	i = 0;
	while (i <= nb)
	{
		dest[index] = src[i];
		i++;
		index++;
	}
	dest[index] = '\0';
}
