/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ocp_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 13:49:51 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 15:09:39 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

char	read_ocp_val(char ocp, int pos)
{
	if (pos == 1)
		return ((ocp >> 6) & 3);
	else if (pos == 2)
		return ((ocp >> 4) & 3);
	else if (pos == 3)
		return ((ocp >> 2) & 3);
	else
		return (0);
}
