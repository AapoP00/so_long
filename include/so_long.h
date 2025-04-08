/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuisto <apuisto@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:54:23 by apuisto           #+#    #+#             */
/*   Updated: 2025/03/21 13:54:25 by apuisto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../gnl/get_next_line.h"
# include <stdio.h>
# include <fcntl.h>

typedef struct game_s
{
	char	**map;
	char	*map_1_line;
	int		full_len;
	int		collectible_check;
	int		player_check;
	int		exit_check;
	int		fd;


}	t_game;

#endif