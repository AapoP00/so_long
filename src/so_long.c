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

file_check(char *input)
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

int main(int argc, char **argv)
{
	t_game	game_data;
	int		len;

	if (argc != 2)
	{
		write(1, "Invalid argument count.", 23);
		return (-1);
	}
	if (file_check(argv[1]) == 1)
	{
		write(1, "Invalid map name.", 17);
		return (1);
	}
	game_data.fd = open(argv[1], O_RDONLY);
	if (game_data.fd == -1)
	{
		write(1, "Invalid file.", 13);
		return (1);
	}

}