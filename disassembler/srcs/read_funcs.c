/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:09:31 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 15:12:15 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

int32_t		read_int32(t_bin *bin)
{
	int32_t		val;

	if (bin->i + 4 > bin->header.prog_size)
		ERROR("No more bytes to read");
	val = 0;
	val |= bin->data[bin->i++] << 24;
	val |= bin->data[bin->i++] << 16;
	val |= bin->data[bin->i++] << 8;
	val |= bin->data[bin->i++] << 0;
	return (val);
}

int16_t		read_int16(t_bin *bin)
{
	int16_t		val;

	if (bin->i + 2 > bin->header.prog_size)
		ERROR("No more bytes to read");
	val = 0;
	val |= bin->data[bin->i++] << 8;
	val |= bin->data[bin->i++];
	return (val);
}

int8_t		read_int8(t_bin *bin)
{
	int8_t		val;

	if (bin->i + 1 > bin->header.prog_size)
		ERROR("No more bytes to read");
	val = 0;
	val |= bin->data[bin->i++];
	return (val);
}
