/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 00:17:46 by mlata             #+#    #+#             */
/*   Updated: 2024/10/07 14:46:29 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	if (n >= 0)
	{
		positive = 80;
		write (1, &positive, 1);
	}
	else
	{
		negative = 78;
		write (1, &negative, 1);
	}
}
