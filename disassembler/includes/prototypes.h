/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:29:51 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/12 17:01:45 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "bin.h"

void	read_header(t_bin *bin);
void	error_quit(char *error, char *file, int line);
int32_t	get_little_32(int32_t val);
int16_t	get_little_16(int16_t val);
void	print_bin(t_bin *bin);
void	print_name(t_bin *bin);
void	print_comment(t_bin *bin);
void	print_instr_live(t_bin *bin);
void	print_instr_ld(t_bin *bin);
void	print_instr_st(t_bin *bin);
void	print_instr_add(t_bin *bin);
void	print_instr_sub(t_bin *bin);
void	print_instr_and(t_bin *bin);
void	print_instr_or(t_bin *bin);
void	print_instr_xor(t_bin *bin);
void	print_instr_zjmp(t_bin *bin);
void	print_instr_ldi(t_bin *bin);
void	print_instr_sti(t_bin *bin);
void	print_instr_fork(t_bin *bin);
void	print_instr_lld(t_bin *bin);
void	print_instr_lldi(t_bin *bin);
void	print_instr_lfork(t_bin *bin);
void	print_instr_aff(t_bin *bin);

#endif
