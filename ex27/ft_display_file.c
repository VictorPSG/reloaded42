/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:20:54 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/11 17:37:34 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	open_file(int num_argc, char *file)
{
	int	fd;

	fd = 0;
	if (num_argc == 2)
	{
		fd = open(file, O_RDONLY);
	}
	return (fd);
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	c;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 20);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
	fd = open_file(argc, argv[1]);
	if (fd == -1)
		return (1);
	while (read(fd, &c, 1) > 0)
	{
		write(1, &c, 1);
	}
	close(fd);
	return (0);
}
