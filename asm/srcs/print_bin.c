/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 10:30:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/11 16:06:44 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static int32_t	to_big(int32_t v)
{
	int32_t		r;

	r=  0;
	r |= (v & 0xFF000000) >> 24;
	r |= (v & 0x00FF0000) >> 8;
	r |= (v & 0x0000FF00) << 8;
	r |= (v & 0x000000FF) << 24;
	return (r);
}

void	print_bin(t_bin *bin, char *file)
{
	int		fd;

	if ((fd = open(file, O_TRUNC | O_CREAT | O_WRONLY, 0766)) == -1)
		ERROR("Failed to open .cor file");
	bin->header.magic = to_big(COREWAR_EXEC_MAGIC);
	bin->header.prog_size = to_big(bin->len);
	write(fd, &bin->header, sizeof(bin->header));
	write(fd, bin->data, bin->len);
	close(fd);
}
