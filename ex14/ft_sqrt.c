/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:05:09 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/04 18:08:11 by victda-s         ###   ########.fr       */
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
			return (sqrt);
	}
	return (0);
}
/*
int main(void)
{
 //printf("%d \n", INT_MAX);
 printf("%d \n", ft_sqrt(INT_MIN));
}
*/