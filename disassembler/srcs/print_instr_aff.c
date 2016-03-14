/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_aff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:03:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 16:33:55 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_aff(t_bin *bin)
{
	ft_putstr("aff ");
	read_int8(bin);
	print_register(read_int8(bin));
	ft_putchar('\n');
}
