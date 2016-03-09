/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 15:33:36 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 16:59:59 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static char	*get_expected_chars(char expected)
{
	if (expected == T_REG)
		return ("register");
	else if (expected == T_IND)
		return ("indirect");
	else if (expected == T_DIR)
		return ("direct");
	else if (expected == (T_REG | T_IND))
		return ("register | indirect");
	else if (expected == (T_REG | T_DIR))
		return ("register | direct");
	else if (expected == (T_IND | T_DIR))
		return ("indirect | direct");
	else
		return ("register | indirect | direct");
}

static void	check_invalid(t_parser *p, char expected, char got)
{
	char	*error_msg;

	if (expected & got)
		return ;
	error_msg = "Invalid arg, expected ";
	if (!(error_msg = ft_strjoin(error_msg, get_expected_chars(expected))))
		ERROR("Failed to malloc invalid arg expected msg");
	if (!(error_msg = ft_strjoin_free1(error_msg, ", got ")))
		ERROR("Failed to malloc invalid arg msg");
	if (!(error_msg = ft_strjoin_free1(error_msg, get_expected_chars(got))))
		ERROR("Failed to malloc invalid arg got msg");
	parse_error(p, error_msg);
}

void	read_arg(t_bin *bin, t_parser *p, char arg)
{
	char	type;

	if (p->line[p->i] == DIRECT_CHAR)
		type = T_DIR;
	else if (p->line[p->i] == 'r')
		type = T_REG;
	else
		type = T_IND;
	check_invalid(p, arg, type);
	if (type == T_DIR || type == T_REG)
		p->i++;
	while (p->line[p->i] && p->line[p->i] != ' ' && p->line[p->i] != '\t'
			&& p->line[p->i] != SEPARATOR_CHAR)
		p->i++;
	(void)bin;
}
