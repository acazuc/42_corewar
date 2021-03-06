/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_fork.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:02:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 15:16:24 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_fork(t_bin *bin)
{
	ft_putstr("fork ");
	print_indirect(read_int16(bin));
	ft_putchar('\n');
}
