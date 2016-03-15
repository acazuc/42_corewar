/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_arena.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 09:06:54 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/15 09:19:29 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface.h"

void	draw_arena(t_caps *caps)
{
	int		x;
	int		y;

	y = 0;
	while (y < sqrt(MEM_SIZE) + 4)
	{
		move_to(caps, 1, y);
		ft_putstr(caps->hl_b);
		ft_putstr("\033[0;37m ");
		ft_putstr(caps->hl_e);
		y++;
	}
}
