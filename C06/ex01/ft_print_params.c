/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:56:07 by mlata             #+#    #+#             */
/*   Updated: 2024/10/23 19:01:29 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

void	ft_print_params(char **params)
{
	int	i;

	i = 1;
	while (params[i])
		ft_printstr(&params[i++][0]);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argv);
	return (0);
}
