/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 18:07:03 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 14:42:55 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void	bin_append(t_bin *bin, unsigned char *data, size_t len)
{
	unsigned char	*new;

	if (!(new = malloc(sizeof(*new) * (bin->len + len))))
		ERROR("Failed to realloc new bin data");
	ft_memcpy(new, bin->data, bin->len);
	ft_memcpy(new + bin->len, data, len);
	bin->data = new;
	bin->len += len;
}

void	bin_append_int8(t_bin *bin, int8_t value)
{
	bin_append(bin, &value, sizeof(value));
}

void	bin_append_int16(t_bin *bin, int16_t value)
{
	int16_t	tmp;

	tmp = 0;
	tmp += (value & 0xFF00) >> 8;
	tmp += (value & 0x00FF);
	bin_append(bin, &tmp, sizeof(tmp));
}

void	bin_append_int32(t_bin *bin, int32_t value)
{
	int32_t	tmp;

	tmp = 0;
	tmp += (value & 0xFF000000) >> 24;
	tmp += (value & 0x00FF0000) >> 16;
	tmp += (value & 0x0000FF00) >> 8;
	tmp += (value & 0x000000FF);
	bin_append(bin, &tmp, sizeof(tmp));
}
