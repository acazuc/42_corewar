/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 14:09:08 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 14:20:46 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	check_valid_args(t_parser *p, t_instruction *i, char *expected)
{
	t_argument_list	*lst;
	int				i;

	lst = i->arguments;
	i = 0;
	while (expected[i] != -1)
	{
		if (!lst)
			parse_error(p, "Invalid number of arguments");
		invalid_arguments(p, expected[i], lst->argument->type);
		lst = lst->next;
	}
	if (lst)
		parse_error(p, "Invalid number of arguments");
}
