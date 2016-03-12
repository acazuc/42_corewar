/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_little.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:39:19 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/12 15:41:17 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

int32_t		get_little_32(int32_t val)
{
	int32_t		ret;

	ret = 0;
	ret |= (val & 0xFF000000) >> 24;
	ret |= (val & 0x00FF0000) >> 8;
	ret |= (val & 0x0000FF00) << 8;
	ret |= (val & 0x000000FF) << 24;
	return (ret);
}

int16_t		get_little_16(int16_t val)
{
	int16_t		ret;

	ret = 0;
	ret |= (val & 0xFF00) >> 8;
	ret |= (val & 0x00FF) << 8;
	return (ret);
}
