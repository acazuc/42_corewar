/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 12:42:38 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 12:46:50 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	add_argument(t_instruction *instruction, t_argument *argument)
{
	t_argument_list	*new;
	t_argument_list	*lst;

	if (!(new = malloc(sizeof(*new))))
		ERROR("Failed to malloc new argument list");
	new->argument = argument;
	new->next = NULL;
	if (!instruction->arguments)
		instruction->arguments = new;
	else
	{
		lst = instruction->arguments;
		while (lst->next)
			lst = lst->next;
		lst->next = new;
	}
}
