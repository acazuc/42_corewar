/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 09:21:28 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 09:23:02 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	parse_error(t_parser *p, char *message)
{
	ft_putstr("\033[1;32m");
	ft_putstr(message);
	ft_putstr(" (");
	ft_putstr(p->file);
	ft_putstr(":");
	ft_putnbr(p->line_count);
	ft_putstr(")");
	exit(-1);
}
