/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_live.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 10:50:15 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 13:24:40 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_live(t_bin *bin)
{
	int32_t		value;

	value = read_int32(bin);
	ft_putstr("live %");
	ft_putnbr(value);
	ft_putchar('\n');
}
