/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 10:30:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 09:50:28 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	print_bin(t_bin *bin, char *file)
{
	int32_t	magic;
	int		fd;

	if ((fd = open(file, O_TRUNC | O_CREAT, 0700)) == -1)
		ERROR("Failed to open .cor file");
	magic = COREWAR_EXEC_MAGIC;
	write(fd, &magic, sizeof(magic));
	write(fd, &(bin->name[0]), sizeof(bin->name));
	write(fd, &(bin->len), 4);
	write(fd, &(bin->comment[0]), sizeof(bin->comment));
	write(fd, bin->data, bin->len);
	close(fd);
}
