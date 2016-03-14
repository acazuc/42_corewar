/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 10:55:02 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 16:36:05 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_add(t_bin *bin)
{
	ft_putstr("add ");
	read_int8(bin);
	print_register(read_int8(bin));
	print_arg_sep();
	print_register(read_int8(bin));
	print_arg_sep();
	print_register(read_int8(bin));
	ft_putchar('\n');
}
