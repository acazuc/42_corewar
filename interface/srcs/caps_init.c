/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caps_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 08:56:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/15 09:06:39 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface.h"

void	caps_init(t_caps *caps)
{
	if (tgetent(0, getenv("TERM")) == ERR)
		ERROR("Failed to init caps");
	if (!(caps->ul_b = tgetstr("us", 0)))
		ERROR("Failed to init us caps");
	if (!(caps->ul_e = tgetstr("ue", 0)))
		ERROR("Failed to init ue caps");
	if (!(caps->hl_b = tgetstr("so", 0)))
		ERROR("Failed to init so caps");
	if (!(caps->hl_e = tgetstr("se", 0)))
		ERROR("Failed to init se caps");
	if (!(caps->move = tgetstr("cm", 0)))
		ERROR("Failed to init cm caps");
}
