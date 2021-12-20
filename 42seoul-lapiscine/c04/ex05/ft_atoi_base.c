/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:00:13 by wban              #+#    #+#             */
/*   Updated: 2021/10/25 10:53:19 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	findnumber(char *str, int *count, int i);

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	*count;
	int	temp;
	int	result;

	i = 0;
	count = &temp;
	result = 0;
	i = findnumber(str, count, i);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if ((*count) % 2 != 0)
		result *= -1;
}

int	findnumber(char *str, int *count, int i)
{
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v')
			i++;
		else if (str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
		else if (str[i] == '-')
		{
			*(count)++;
			i++;
		}
		else if (str[i] == '+')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			break ;
	}
	return (i);
}
