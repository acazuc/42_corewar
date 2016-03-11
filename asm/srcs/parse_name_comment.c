/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_name_comment.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 09:17:58 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/11 16:06:07 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static void	parse_comment(t_bin *bin, t_parser *p)
{
	size_t		j;

	while (p->line[p->i] == '\t' || p->line[p->i] == ' ')
		p->i++;
	if (p->line[p->i] != '"')
		parse_error(p, "Expected comment value in dquotes");
	p->i++;
	j = 0;
	while (p->line[p->i] != '"')
	{
		if (j == COMMENT_LENGTH)
			parse_error(p, "Comment to long");
		bin->header.comment[j] = p->line[p->i];
		j++;
		p->i++;
	}
}

static void	parse_name(t_bin *bin, t_parser *p)
{
	size_t		j;

	while (p->line[p->i] == '\t' || p->line[p->i] == ' ')
		p->i++;
	if (p->line[p->i] != '"')
		parse_error(p, "Expected name value in dquotes");
	p->i++;
	j = 0;
	while (p->line[p->i] && p->line[p->i] != '"')
	{
		if (j == PROG_NAME_LENGTH)
			parse_error(p, "Name to long");
		bin->header.name[j] = p->line[p->i];
		j++;
		p->i++;
	}
	if (p->line[p->i] != '"')
		parse_error(p, "Expected name end");
}

int			parse_name_comment(t_bin *bin, t_parser *p)
{
	if (!bin->has_name && ft_strstr(p->line, NAME_CMD_STRING) == p->line)
	{
		p->i += ft_strlen(NAME_CMD_STRING);
		parse_name(bin, p);
		bin->has_name = 1;
		return (1);
	}
	else if (!bin->has_comment
			&& ft_strstr(p->line, COMMENT_CMD_STRING) == p->line)
	{
		p->i += ft_strlen(COMMENT_CMD_STRING);
		parse_comment(bin, p);
		bin->has_comment = 1;
		return (1);
	}
	else
		parse_error(p, "Expected file name or comment");
	return (0);
}
