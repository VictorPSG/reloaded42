/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:20:54 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/11 16:56:24 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  // Para open()
#include <unistd.h> // Para read(), write()

int	open_file(int num_argc, char *file)
{
	int fd; // Usar `int` para o descritor de arquivo
	if (num_argc == 2)
	{
		fd = open(file, O_RDONLY);
	}
	return (fd);
}

int	main(int argc, char *argv[])
{
	char c;
	int fd;

	if (argc < 2) 
	{
		write(1, "File name missing.", 19);
		return (1);
	}
	if(argc > 2)
	{
		write(1, "Too many arguments.", 20);
	}

	fd = open_file(argc, argv[1]);

	if (fd == -1)
		return (1); // Saída em caso de erro ao abrir arquivo

	while (read(fd, &c, 1) > 0) // Lê o arquivo caractere por caractere
	{
		write(1, &c, 1); // Imprime caractere lido
	}

	close(fd);
	return (0);
}
