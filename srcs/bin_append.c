/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 18:07:03 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/07 18:16:15 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void	bin_append(t_bin *bin, unsigned char *data, size_t len)
{
	unsigned char	*new;

	if (!(new = malloc(sizeof(*new) * (bin->len + len))))
		ERROR("Failed to realloc new bin data");
	ft_memcpy(new, bin->data, bin->len);
	ft_memccpy(new, data, bin->len, len);
	bin->data = new;
	bin->len += len;
}
