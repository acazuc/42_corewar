/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_header.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:36:47 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/12 15:50:03 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	read_header(t_bin *bin)
{
	ssize_t	readed;

	if ((readed = read(bin->fd, &bin->header
					, sizeof(bin->header))) != sizeof(bin->header))
		ERROR("Failed to read header");
	bin->header.magic = get_little_32(bin->header.magic);
	if (bin->header.magic != COREWAR_EXEC_MAGIC)
		ERROR("Invalid magic number");
	bin->header.prog_size = get_little_32(bin->header.prog_size);
	if (!(bin->data = malloc(sizeof(*bin->data)
					* (bin->header.prog_size + 1))))
		ERROR("Failed to malloc bin data");
	if ((readed = read(bin->fd, bin->data
					, (bin->header.prog_size + 1))) != bin->header.prog_size)
		ERROR("Invalid prog size value");
}
