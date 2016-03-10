/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 14:09:08 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 14:59:46 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	check_valid_args(t_parser *p, t_instruction *ins, char *expected)
{
	t_argument_list	*lst;
	int				i;

	lst = ins->arguments;
	i = 0;
	while (expected[i] != -1)
	{
		if (!lst)
			parse_error(p, "Invalid number of arguments (not enough)");
		invalid_argument(p, expected[i], lst->argument->type);
		lst = lst->next;
		i++;
	}
	if (lst)
		parse_error(p, "Invalid number of arguments (too much)");
	free(expected);
}
