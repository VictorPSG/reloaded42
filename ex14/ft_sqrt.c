/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:05:09 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/13 20:53:21 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	i;

	sqrt = 0;
	i = 1;
	while (i < nb)
	{
		sqrt = i * i;
		i++;
		if (sqrt == nb)
			return (i - 1);
	}
	return (0);
}
/*
#include <limits.h>
#include <stdio.h>
int main(void)
{
 //printf("%d \n", INT_MAX);
 printf("%d \n", ft_sqrt(2147395600));
}
*/
