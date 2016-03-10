/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_argument_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:58:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 16:00:10 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int		get_argument_size(t_argument *argument)
{
	if (argument->type == T_REG)
		return (8);
	if (argument->type == T_IND)
		return (16);
	if (argument->type == T_DIR)
		return (32);
	return (0);
}
