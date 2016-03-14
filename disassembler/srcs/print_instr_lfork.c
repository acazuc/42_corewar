/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_lfork.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:03:29 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 15:25:25 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_lfork(t_bin *bin)
{
	ft_putstr("lfork ");
	print_direct(read_int16(bin));
	ft_putchar('\n');
}
