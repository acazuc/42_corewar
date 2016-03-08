/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:39:50 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/08 11:21:37 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

t_bin	parse_file(char *input)
{
	t_parser	parser;
	t_bin		bin;
	int			fd;

	line = 0;
	bin_init(&bin);
	if ((fd = open(input, O_RDONLY)) == -1)
		ERROR("Faild to open file");
	while ((line = read_next_line(fd)))
	{
		parse_line(&bin, 
		line++;
	}
}
