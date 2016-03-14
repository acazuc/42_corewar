/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_zjmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:00:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 16:30:19 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_zjmp(t_bin *bin)
{
	ft_putstr("zjmp ");
	print_indirect(read_int16(bin));
	ft_putchar('\n');
}
