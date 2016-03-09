/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_next_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 11:00:50 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 16:14:51 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static void	init(char **buff, char **line)
{
	if (!(*buff = malloc(sizeof(**buff) * 2)))
		ERROR("Failed to malloc buff");
	(*buff)[0] = '\0';
	(*buff)[1] = '\0';
	if (!(*line = malloc(sizeof(**line))))
		ERROR("Failed to malloc line");
	(*line)[0] = '\0';
}

char		*read_next_line(int fd)
{
	char	*line;
	char	*buff;
	int		has;
	int		rd;

	has = 0;
	init(&buff, &line);
	while ((rd = read(fd, buff, 1)) > 0 && buff[0] != '\n')
	{
		has = 1;
		if (!(line = ft_strjoin_free1(line, buff)))
			ERROR("Failed to join line");
	}
	if (rd == -1)
		ERROR("Error while reading file");
	if (!has && rd == 0)
		free(line);
	if (!has && rd == 0)
		return (NULL);
	free(buff);
	return (line);
}
