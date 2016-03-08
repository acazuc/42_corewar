/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_next_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 11:00:50 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/08 11:12:48 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

char	*read_next_line(int fd)
{
	char	*line;
	char	*buff;

	if (!(buff = malloc(sizeof(*buff))))
		ERROR("Failed to malloc buff");
	line[0] = '\0';
	if (!(line = malloc(sizeof(*line))))
		ERROR("Failed to malloc line");
	line[0] = '\0';
	while ((rd = read(fd, buff, 1)) > 0 && buff[0] != '\n')
	{
		if (!(line = ft_strjoin_free3(line, buff)))
			ERROR("Failed to join line");
	}
	if (rd == -1)
		ERROR("Error while reading file");
	free(buff);
	if (line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}
