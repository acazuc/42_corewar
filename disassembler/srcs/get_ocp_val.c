/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ocp_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 13:49:51 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 14:34:58 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

char	read_ocp_val(char ocp, int pos)
{
	if (pos == 1)
		return ((ocp & 0xFF000000) >> 24);
	else if (pos == 2)
		return ((ocp & 0x00FF0000) >> 16);
	else if (pos == 3)
		return ((ocp & 0x0000FF00) >> 8);
	else
		return (0);
}
