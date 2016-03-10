/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 15:33:36 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 10:35:15 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static t_argument	*parse_label(t_bin *bin, t_parser *p, t_argument *argument)
{
	char	*name;
	int		start;

	p->i++;
	start = p->i;
	while (is_label_char(p->line[p->i]))
		p->i++;
	if (p->line[p->i] && p->line[p->i] != SEPARATOR_CHAR
			&& p->line[p->i] != ' ' && p->line[p->i] != '\t')
		parse_error(p, "Invalid label value");
	if (!(name = ft_strsub(p->line, start, p->i - start)))
		ERROR("Failed to sub label name");
	add_label_replace(name, bin->len);
	return (argument);
}

static t_argument	*parse_arg(t_parser *p, t_argument *argument)
{
	char	*sub;
	int		start;

	start = p->i;
	while (ft_isdigit(p->i))
		p->i++;
	if (!(sub = ft_strsub(p->line, start, p->i - start)))
		ERROR("Failed to sub argument value");
	argument->value = ft_atoi(sub);
	return (argument);
}

t_argument			*read_arg(t_bin *bin, t_parser *p)
{
	t_argument	*argument;

	argument = create_argument();
	if (p->line[p->i] == DIRECT_CHAR)
		argument->type = DIRECT;
	else if (p->line[p->i] == 'r')
		argument->type = REGISTER;
	else if (ft_isdigit(p->line[p->i]))
		argument->type = INDIRECT;
	else if (!p->line[p->i])
		return (NULL);
	else
		parse_error(p, "Unknown parameter");
	if (argument->type == DIRECT || argument->type == REGISTER)
		p->i++;
	if (argument->type == DIRECT && p->line[p->i] == LABEL_CHAR)
		return (parse_label(bin, p, argument));
	return (parse_arg(p, argument));
}
