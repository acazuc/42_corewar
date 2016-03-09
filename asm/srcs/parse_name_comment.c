/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_name_comment.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 09:17:58 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 09:51:20 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static void	parse_comment(t_bin *bin, t_parser *p)
{
	size_t		i;
	size_t		j;

	i = 5;
	while (p->line[i] == '\t' || p->line[i] == ' ')
		i++;
	if (p->line[i] != '"')
		parse_error(p, "Expected comment value in dquotes");
	i++;
	j = 0;
	while (p->line[i] != '"')
	{
		if (j == COMMENT_LENGTH)
			parse_error(p, "Comment to long");
		bin->comment[j] = p->line[i];
		j++;
		i++;
	}
}


static void	parse_name(t_bin *bin, t_parser *p)
{
	size_t		i;
	size_t		j;

	i = 5;
	while (p->line[i] == '\t' || p->line[i] == ' ')
		i++;
	if (p->line[i] != '"')
		parse_error(p, "Expected name value in dquotes");
	i++;
	j = 0;
	while (p->line[i] != '"')
	{
		if (j == PROG_NAME_LENGTH)
			parse_error(p, "Name to long");
		bin->name[j] = p->line[i];
		j++;
		i++;
	}
}

void	parse_name_comment(t_bin *bin, t_parser *p)
{
	if (!bin->has_name && ft_strstr(p->line, ".name") == p->line)
		parse_name(bin, p);
	else if (!bin->has_comment && ft_strstr(p->line, ".comment") == p->line)
		parse_comment(bin, p);
	else
		parse_error(p, "Expected file name or comment");
}
