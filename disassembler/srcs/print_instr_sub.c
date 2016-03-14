/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_sub.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 10:55:34 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 16:31:33 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_sub(t_bin *bin)
{
	ft_putstr("sub ");
	print_register(read_int8(bin));
	print_arg_sep();
	print_register(read_int8(bin));
	print_arg_sep();
	print_register(read_int8(bin));
	ft_putchar('\n');
}
