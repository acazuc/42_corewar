/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:15:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 14:23:00 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "parser.h"
# include "bin.h"
# include "op.h"

void	error_quit(char *message, char *file, int line);
t_bin	parse_file(char *input);
void	bin_append(t_bin *bin, unsigned char *data, size_t len);
void	bin_init(t_bin *bin);
void	print_bin(t_bin *bin, char *file);
char	*read_next_line(int fd);
void	parse_line(t_bin *bin, t_parser *p);
int		parse_name_comment(t_bin *bin, t_parser *p);
void	parse_error(t_parser *p, char *message);
void	check_label(t_bin *bin, t_parser *p);
void	print_big_int8(int fd, int8_t value);
void	print_big_int16(int fd, int16_t value);
void	print_big_int32(int fd, int32_t value);
void	print_big_int64(int fd, int64_t value);
void	add_label(t_bin *bin, char *name);
void	parse_instruction(t_bin *bin, t_parser *p);
t_op	*read_instruction(t_parser *p);
void	init_ops(void);

#endif
