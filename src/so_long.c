/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuisto <apuisto@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:53:12 by apuisto           #+#    #+#             */
/*   Updated: 2025/03/21 13:53:13 by apuisto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"
#include <stdio.h>

int	file_check(char *input)
{
	int		len;
	int		pos;
	char	*test;

	test = ".ber";
	pos = 0;
	len = ft_strlen(input) - 4;
	if (len < 5)
		return (1);
	while (input[len])
	{
		if (input[len] == test[pos])
		{
			len++;
			pos++;
		}
		else
			return (1);
	}
	return (0);
}

size_t		total_len(int fd)
{
	int 	bytes_read;
	char	buffer[1];
	int		total_len;

	total_len = 0;
	while(1)
	{
		bytes_read = read(fd, buffer, 1);
		total_len += bytes_read;
		if(bytes_read == 0)
			break ; 
	}
	return (total_len);
}

int main(int argc, char **argv)
{
	t_game	game_data;
	int		one_line;
	char	*the_line;

	if (argc != 2)
	{
		write(1, "Invalid argument count.", 23);
	}
	/*if (file_check(argv[1]) == 1)
	{
		write(1, "Invalid map name.", 17);
		return (1);
	}*/
	game_data.fd = open(argv[1], O_RDONLY);
	if (game_data.fd == -1)
	{
		write(1, "Invalid file.", 13);
	}
	one_line = total_len(game_data.fd);
	the_line = ft_calloc(sizeof(char), one_line + 1);
	close(game_data.fd);
	game_data.fd = open(argv[1], O_RDONLY);
	read(game_data.fd, the_line, one_line);
	game_data.map = ft_split(the_line, '\n');
	printf("%i, %s", one_line, the_line);
	free(the_line);
	return(0);
}