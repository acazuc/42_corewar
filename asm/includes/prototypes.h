/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:15:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 11:46:39 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "instruction.h"
# include "parser.h"
# include "bin.h"

void				error_quit(char *message, char *file, int line);
t_bin				parse_file(char *input);
void				bin_append(t_bin *bin, unsigned char *data, size_t len);
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
t_instruction_type	read_instruction(t_parser *p);
void				init_ops(void);
t_argument			*read_arg(t_bin *bin, t_parser *p);
void				remove_comment(char **line);
void				read_mnemo_live(t_bin *bin, t_parser *p);
void				read_mnemo_ld(t_bin *bin, t_parser *p);
void				read_mnemo_st(t_bin *bin, t_parser *p);
void				read_mnemo_add(t_bin *bin, t_parser *p);
void				read_mnemo_sub(t_bin *bin, t_parser *p);
void				read_mnemo_and(t_bin *bin, t_parser *p);
void				read_mnemo_or(t_bin *bin, t_parser *p);
void				read_mnemo_xor(t_bin *bin, t_parser *p);
void				read_mnemo_zjmp(t_bin *bin, t_parser *p);
void				read_mnemo_ldi(t_bin *bin, t_parser *p);
void				read_mnemo_sti(t_bin *bin, t_parser *p);
void				read_mnemo_fork(t_bin *bin, t_parser *p);
void				read_mnemo_lld(t_bin *bin, t_parser *p);
void				read_mnemo_lldi(t_bin *bin, t_parser *p);
void				read_mnemo_lfork(t_bin *bin, t_parser *p);
void				read_mnemo_aff(t_bin *bin, t_parser *p);
int					is_label_char(char c);
t_argument			*create_argument(void);
void				add_label_replace(char *name, size_t position);
t_instruction		*create_instruction(void);

#endif
