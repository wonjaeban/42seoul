/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:09:55 by wban              #+#    #+#             */
/*   Updated: 2021/10/23 12:08:09 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(char c);
char	printhexa(char c);
void	put_char(char str);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print(str[i]);
		}
		else
			put_char(str[i]);
		i++;
	}
}

void	print(char c)
{
	unsigned char	u;

	u = (unsigned char)c;
	write(1, "\\", 1);
	put_char(printhexa(u / 16));
	put_char(printhexa(u % 16));
}

char	printhexa(char	str)
{
	if (str >= 10)
		return ('a' + (str - 10));
	return (str + '0');
}

void	put_char(char str)
{
	write(1, &str, 1);
}
