/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:32:45 by mlata             #+#    #+#             */
/*   Updated: 2024/10/10 13:04:57 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	n;

	i = 0;
	n = size - 1;
	while (i < size / 2)
	{
		temp = tab[n];
		tab[n] = tab[i];
		tab[i] = temp;
		i++;
		n--;
	}
}

/*
int	main(void)
{
	int	arr[5] = {1, 2, 3, 4, 5};
	//int*	ptr;
	int	i;

	//ptr = arr;
	ft_rev_int_tab(arr, 5);
	i = 0;
	while (i < 5)
	{
		printf ("%d", *(arr + i));
		i++;
	}
	return (0);
}
*/
