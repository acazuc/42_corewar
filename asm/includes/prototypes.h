/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:15:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 15:59:53 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "instruction.h"
# include "parser.h"
# include "bin.h"

void				error_quit(char *message, char *file, int line);
t_bin				parse_file(char *input);
void				bin_append(t_bin *bin, void *data, size_t len);
void				bin_init(t_bin *bin);
void				print_bin(t_bin *bin, char *file);
char				*read_next_line(int fd);
void				parse_line(t_bin *bin, t_parser *p);
int					parse_name_comment(t_bin *bin, t_parser *p);
void				parse_error(t_parser *p, char *message);
void				check_label(t_bin *bin, t_parser *p);
void				print_big_int8(int fd, int8_t value);
void				print_big_int16(int fd, int16_t value);
void				print_big_int32(int fd, int32_t value);
void				print_big_int64(int fd, int64_t value);
void				add_label(t_bin *bin, char *name);
void				parse_instruction(t_bin *bin, t_parser *p);
char				read_instruction(t_parser *p);
t_argument			*read_arg(t_bin *bin, t_parser *p);
void				remove_comment(char **line);
void				read_mnemo_live(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_ld(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_st(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_add(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_sub(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_and(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_or(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_xor(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_zjmp(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_ldi(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_sti(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_fork(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_lld(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_lldi(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_lfork(t_parser *p, t_bin *bin, t_instruction *i);
void				read_mnemo_aff(t_parser *p, t_bin *bin, t_instruction *i);
int					is_label_char(char c);
t_argument			*create_argument(void);
void				add_label_replace(char *name, size_t position);
t_instruction		*create_instruction(void);
void				add_argument(t_instruction *i, t_argument *a);
char				*build_valid_args_3(char a1, char a2, char a3);
char				*build_valid_args_2(char a1, char a2);
char				*build_valid_args_1(char a1);
void				check_valid_args(t_parser *p, t_instruction *i, char *e);
void				invalid_argument(t_parser *p, char expected, char got);
int8_t				get_ocp3(char arg1, char arg2, char arg3);
int8_t				get_ocp2(char arg1, char arg2);
int8_t				get_ocp1(char arg1);
void				bin_append_int8(t_bin *bin, int8_t value);
void				bin_append_int16(t_bin *bin, int16_t value);
void				bin_append_int32(t_bin *bin, int32_t value);
void				print_ocp(t_bin *bin, t_instruction *instr);
void				bin_append_size(t_bin *bin, int32_t value, int size);
int					get_argument_size(t_argument *argument);

#endif
