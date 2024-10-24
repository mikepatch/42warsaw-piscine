/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:24:39 by mlata             #+#    #+#             */
/*   Updated: 2024/10/23 19:03:50 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(char **params, int paramsl)
{
	int		i;
	int		swapped;
	char	*tmp;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < paramsl - 1)
		{
			if (ft_strcmp(params[i], params[i + 1]) > 0)
			{
				tmp = params[i];
				params[i] = params[i + 1];
				params[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_params(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_print_str(argv[i]);
		i++;
	}
	return (0);
}
