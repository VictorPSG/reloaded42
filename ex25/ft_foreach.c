/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:59:57 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/10 14:30:48 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void print_number(int n) {
    printf("Número: %d\n", n);
}
#include <stdio.h>
int	main(void)
{
	int	arr[5] = {1,2,3,4,5};
	ft_foreach(arr, 5, print_number);
}
*/