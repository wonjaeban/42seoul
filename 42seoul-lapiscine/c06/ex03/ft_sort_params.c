/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wban <wban@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:05:56 by wban              #+#    #+#             */
/*   Updated: 2021/10/26 18:51:06 by wban             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	compare(int argc, char **argv, char *temp, int i);
void	change(char *temp, int i, int j, char **argv);

int	main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	compare(argc, argv, temp, i);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, argv[i] + j, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	compare(int argc, char **argv, char *temp, int i)
{
	int	j;
	int	k;

	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			k = 0;
			while (argv[i][k] || argv[j][k])
			{
				if (argv[i][k] > argv[j][k])
				{
					change(temp, i, j, argv);
					break ;
				}
				if (argv[i][k] == '\0' || argv[j][k] == '\0')
					break ;
				k++;
			}
			j++;
		}
		i++;
	}
}

void	change(char *temp, int i, int j, char **argv)
{
	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
}
