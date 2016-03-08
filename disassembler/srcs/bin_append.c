/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 18:07:03 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/08 10:06:53 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	bin_append(t_bin *bin, unsigned char *data, size_t len)
{
	unsigned char	*new;

	if (!(new = malloc(sizeof(*new) * (bin->len + len))))
	{
		ft_putendl("Failed to init bin data");
		exit(-1);
	}
	ft_memcpy(new, bin->data, bin->len);
	ft_memcpy(new + bin->len, data, len);
	bin->data = new;
	bin->len += len;
}
