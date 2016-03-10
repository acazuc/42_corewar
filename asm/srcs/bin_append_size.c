/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_append_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:56:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 19:42:21 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	bin_append_size(t_bin *bin, t_argument *argument)
{
	int		size;

	size = get_argument_size(argument);
	if (size == 8)
		bin_append_int8(bin, argument->value);
	else if (size == 16)
		bin_append_int16(bin, argument->value);
	else if (size == 32)
		bin_append_int32(bin, argument->value);
	else
		ERROR("Invalid argument type size");
}
