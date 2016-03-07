/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:15:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/07 18:16:45 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

void	error_quit(char *message, char *file, int line);
void	parse_file(char *input, char *output);
void	bin_append(t_bin *bin, unsigned char *data, size_t len);
void	bin_init(t_bin *bin);

#endif
