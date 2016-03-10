/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ocp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:14:46 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 15:32:34 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	print_ocp(t_bin *bin, t_instruction *instr)
{
	t_argument_list	*lst;

	lst = instr->arguments;
	if (lst && lst->next && lst->next->next)
		bin_append_int8(bin, get_ocp3(lst->argument->type
					, lst->next->argument->type
					, lst->next->next->argument->type));
	else if (lst && lst->next)
		bin_append_int8(bin, get_ocp2(lst->argument->type
					, lst->next->argument->type));
	else if (lst)
		bin_append_int8(bin, get_ocp1(lst->argument->type));
}
