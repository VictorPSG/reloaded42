/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:53:08 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/06 20:55:03 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	lenght;

	lenght = 0;
	i = 0;
	while (s1[lenght] != '\0')
		lenght++;
	while (i <= lenght)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			else
				return (-1);
			i++;
		}
	}
	return (0);
}
/*
int main(void)
{
 char teste[] = "apple";
 char teste1[] = "banana";

 printf("Função FT: %d\n", ft_strcmp(teste, teste1));
 printf("Função strcmp: %d", strcmp(teste, teste1));
}
*/
