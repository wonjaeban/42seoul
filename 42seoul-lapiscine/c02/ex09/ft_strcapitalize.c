/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:14:33 by wban              #+#    #+#             */
/*   Updated: 2021/10/23 09:58:29 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	makeUpper(int i, char *str);
void	makelower(int i, char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	makeUpper(i, str);
	makelower(i, str);
	return (str);
}

void	makeUpper(int i, char *str)
{
	while (str[i + 1] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 47)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= ('a' - 'A');
		}
		else if (str[i] >= 58 && str[i] <= 64)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= ('a' - 'A');
		}
		else if (str[i] >= 91 && str[i] <= 96)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= ('a' - 'A');
		}
		else if (str[i] >= 123 && str[i] <= 126)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= ('a' - 'A');
		}
		i++;
	}
}

void	makelower(int i, char *str)
{
	while (str[i + 1] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
				str[i + 1] += ('a' - 'A');
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
				str[i + 1] += ('a' - 'A');
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
				str[i + 1] += ('a' - 'A');
		}
		i++;
	}
}
