/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_bin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 09:50:59 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 09:52:02 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

t_bin	read_bin(char *file)
{
	t_bin			bin;
	int				rd;
	unsigned char	*buff;
	int				fd;

	bin_init(&bin);
	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putendl("Failed to open file");
		exit(-1);
	}
	if (!(buff = malloc(sizeof(*buff) * 100)))
	{
		ft_putendl("Failed to malloc read buffer");
		exit(-1);
	}
	while ((rd = read(fd, buff, 100)) > 0)
		bin_append(&bin, buff, rd);
	if (rd == -1)
	{
		ft_putendl("Error while reading file");
		exit(-1);
	}
	free(buff);
	return (bin);
}
