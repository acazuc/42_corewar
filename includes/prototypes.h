/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:15:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/08 11:11:11 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "bin.h"

void	error_quit(char *message, char *file, int line);
t_bin	parse_file(char *input);
void	bin_append(t_bin *bin, unsigned char *data, size_t len);
void	bin_init(t_bin *bin);
void	print_bin(t_bin *bin, char *file);
char	*read_next_line(int fd);

#endif
