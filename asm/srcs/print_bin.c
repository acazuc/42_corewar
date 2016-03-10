/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 10:30:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 18:01:52 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	print_bin(t_bin *bin, char *file)
{
	int		fd;

	if ((fd = open(file, O_TRUNC | O_CREAT | O_WRONLY, 0766)) == -1)
		ERROR("Failed to open .cor file");
	print_big_int32(fd, COREWAR_EXEC_MAGIC);
	write(fd, bin->name, PROG_NAME_LENGTH + 1);
	print_big_int8(fd, 0);
	print_big_int16(fd, 0);
	print_big_int32(fd, bin->len);
	write(fd, bin->comment, COMMENT_LENGTH + 1);
	print_big_int8(fd, 0);
	print_big_int16(fd, 0);
	write(fd, bin->data, bin->len);
	close(fd);
}
