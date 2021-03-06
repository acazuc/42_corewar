/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 09:07:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 16:04:37 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	parse_line(t_bin *bin, t_parser *p)
{
	p->line = ft_strtrim(p->line);
	if (ft_strlen(p->line) == 0 || p->line[0] == COMMENT_CHAR)
		return ;
	if (!bin->has_name || !bin->has_comment)
		if (parse_name_comment(bin, p))
			return ;
	remove_comment(&p->line);
	check_label(bin, p);
	while (p->line[p->i] == ' ' || p->line[p->i] == '\t')
		p->i++;
	if (!p->line[p->i])
		return ;
	parse_instruction(bin, p);
}
