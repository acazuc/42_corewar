/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 09:16:27 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/15 09:19:22 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface.h"

void	move_to(t_caps *caps, int x, int y)
{
	char	*gotostr;

	if (!(gotostr = tgoto(caps->move, x, y)))
		ERROR("Failed to move to another position");
	ft_putstr(gotostr);
}
