/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 10:30:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/08 10:45:07 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void	print_bin(t_bin *bin, char *file)
{
	ssize_t	written;
	int		fd;

	if ((fd = open(file, O_TRUNC | O_CREAT, 0700)) == -1)
		ERROR("Failed to open .cor file");
	if ((written = write(fd, bin->data, bin->len)) == 1)
		ERROR("Failed to write to file");
	close(fd);
}
