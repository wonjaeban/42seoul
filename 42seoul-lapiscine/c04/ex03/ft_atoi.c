/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:13:33 by wban              #+#    #+#             */
/*   Updated: 2021/10/25 10:52:38 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	findnumber(char *str, int *count, int i);
int	makeatoi(char str, int result);

int	ft_atoi(char *str)
{
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
		result = makeatoi(str[i], result);
		i++;
	}
	if ((*count) % 2 != 0)
		result *= -1;
	return (result);
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
			(*count)++;
			i++;
		}
		else if (str[i] == '+')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			break ;
	}
	return (i);
}

int	makeatoi(char str, int result)
{
	result = result * 10 + (str - 48);
	return (result);
}
