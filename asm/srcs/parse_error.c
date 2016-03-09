/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 09:21:28 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 10:05:14 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	parse_error(t_parser *p, char *message)
{
	ft_putstr_fd("\033[1;31m", 2);
	ft_putstr_fd(message, 2);
	ft_putstr_fd(" (", 2);
	ft_putstr_fd(p->file, 2);
	ft_putstr_fd(":", 2);
	ft_putnbr_fd(p->line_count, 2);
	ft_putendl_fd(")", 2);
	exit(-1);
}
