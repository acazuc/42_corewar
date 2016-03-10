/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_append_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:56:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 15:57:54 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	bin_append_size(t_bin *bin, int32_t value, int size)
{
	if (size == 8)
		bin_append_int8(bin, value);
	else if (size == 16)
		bin_append_int16(bin, value);
	else if (size == 32)
		bin_append_int32(bin, value);
	else
		ERROR("Invalid bin size");
}
