/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:52:21 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 14:29:48 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

static void	print_instr_2(t_bin *bin, char instr)
{
	if (instr == OP_ZJMP)
		print_instr_zjmp(bin);
	else if (instr == OP_LDI)
		print_instr_ldi(bin);
	else if (instr == OP_STI)
		print_instr_sti(bin);
	else if (instr == OP_FORK)
		print_instr_fork(bin);
	else if (instr == OP_LLD)
		print_instr_lld(bin);
	else if (instr == OP_LLDI)
		print_instr_lldi(bin);
	else if (instr == OP_LFORK)
		print_instr_lfork(bin);
	else if (instr == OP_AFF)
		print_instr_aff(bin);
	else
		ERROR("Invalid instruction");
}

static void	print_instr(t_bin *bin, char instr)
{
	if (instr == OP_LIVE)
		print_instr_live(bin);
	else if (instr == OP_LD)
		print_instr_ld(bin);
	else if (instr == OP_ST)
		print_instr_st(bin);
	else if (instr == OP_ADD)
		print_instr_add(bin);
	else if (instr == OP_SUB)
		print_instr_sub(bin);
	else if (instr == OP_AND)
		print_instr_and(bin);
	else if (instr == OP_OR)
		print_instr_or(bin);
	else if (instr == OP_XOR)
		print_instr_xor(bin);
	else
		print_instr_2(bin, instr);
}

void	print_bin(t_bin *bin)
{
	char	instr;

	print_name(bin);
	print_comment(bin);
	ft_putchar('\n');
	bin->i = 0;
	while (bin->i < bin->header.prog_size)
	{
		instr = read_int8(bin);
		print_instr(bin, instr);
	}
}
