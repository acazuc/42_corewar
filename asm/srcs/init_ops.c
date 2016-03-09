/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 14:10:15 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 16:20:04 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

t_op	*g_ops = NULL;

void	init_ops(void)
{
	t_op	*ops;
	t_op	local[17] = {
		{"live", 1, {T_DIR}, 1},
		{"ld", 2, {T_DIR | T_IND, T_REG}, 2},
		{"st", 2, {T_REG, T_IND | T_REG}, 3},
		{"add", 3, {T_REG, T_REG, T_REG}, 4},
		{"sub", 3, {T_REG, T_REG, T_REG}, 5},
		{"and", 3, {T_REG | T_DIR | T_IND, T_REG | T_IND | T_DIR, T_REG}, 6},
		{"or", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 7},
		{"xor", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 8},
		{"zjmp", 1, {T_DIR}, 9},
		{"ldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 10},
		{"sti", 3, {T_REG, T_REG | T_DIR | T_IND, T_DIR | T_REG}, 11},
		{"fork", 1, {T_DIR}, 12},
		{"lld", 2, {T_DIR | T_IND, T_REG}, 13},
		{"lldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 14},
		{"lfork", 1, {T_DIR}, 15},
		{"aff", 1, {T_REG}, 16},
		{0, 0, {0}, 0}
	};
	if (!(ops = malloc(sizeof(local))))
		ERROR("Failed to malloc ops");
	ft_memcpy(ops, local, sizeof(local));
	g_ops = ops;
}
