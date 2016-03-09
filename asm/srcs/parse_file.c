/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:39:50 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 13:57:25 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

t_bin	parse_file(char *input)
{
	t_parser	parser;
	t_bin		bin;

	parser.line_count = 1;
	parser.file = input;
	bin_init(&bin);
	if ((parser.fd = open(parser.file, O_RDONLY)) == -1)
		ERROR("Faild to open file");
	while ((parser.line = read_next_line(parser.fd)))
	{
		parser.i = 0;
		parse_line(&bin, &parser);
		parser.line_count++;
	}
	return (bin);
}
