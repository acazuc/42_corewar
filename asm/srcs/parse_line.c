/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 09:07:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 10:36:15 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	parse_line(t_bin *bin, t_parser *p)
{
	p->line = ft_strtrim(p->line);
	if (ft_strlen(p->line) == 0 || p->line[0] == ';')
		return ;
	if (!bin->has_name || !bin->has_comment)
		parse_name_comment(bin, p);
	check_label(bin, p);
}
