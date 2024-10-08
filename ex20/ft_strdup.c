/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:19:42 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/08 15:25:05 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		bytes;
	char	*copy;
	int		i;

	bytes = 0;
	i = 0;
	while (src[bytes])
		bytes++;
	copy = (char *)malloc((bytes + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
int	main(void)
{
	char teste[5] = {'a', '2', '3', '4', '5'};

	char *copy = ft_strdup(teste);
	for (int i = 0; copy[i]; i++)
		printf("%c\n", copy[i]);
	return(0);
}
*/