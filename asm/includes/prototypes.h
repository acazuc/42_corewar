/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:15:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 10:36:11 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "parser.h"
# include "bin.h"

void	error_quit(char *message, char *file, int line);
t_bin	parse_file(char *input);
void	bin_append(t_bin *bin, unsigned char *data, size_t len);
void	bin_init(t_bin *bin);
void	print_bin(t_bin *bin, char *file);
char	*read_next_line(int fd);
void	parse_line(t_bin *bin, t_parser *p);
void	parse_name_comment(t_bin *bin, t_parser *p);
void	parse_error(t_parser *p, char *message);
void	check_label(t_bin *bin, t_parser *p);

#endif
