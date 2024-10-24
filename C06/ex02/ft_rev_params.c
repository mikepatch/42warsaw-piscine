/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:09:16 by mlata             #+#    #+#             */
/*   Updated: 2024/10/21 11:16:33 by mlata            ###   ########.fr       */
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

void	ft_rev_params(char **params, int paramsl)
{
	int	i;

	i = paramsl;
	while (i > 0)
		ft_printstr(&params[i--][0]);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_rev_params(argv, argc - 1);
	return (0);
}
