/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_big_endian.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 11:44:00 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 13:14:27 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	print_big_int8(int fd, int8_t value)
{
	write(fd, &value, 1);
}

void	print_big_int16(int fd, int16_t value)
{
	char	tmp;

	tmp = (value & 0xFF00) >> 8;
	write(fd, &tmp, 1);
	tmp = (value & 0x00FF);
	write(fd, &tmp, 1);
}

void	print_big_int32(int fd, int32_t value)
{
	char	tmp;

	tmp = (value & 0xFF000000) >> 24;
	write(fd, &tmp, 1);
	tmp = (value & 0x00FF0000) >> 16;
	write(fd, &tmp, 1);
	tmp = (value & 0x0000FF00) >> 8;
	write(fd, &tmp, 1);
	tmp = (value & 0x000000FF);
	write(fd, &tmp, 1);
}
