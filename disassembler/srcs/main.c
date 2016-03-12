/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:25:57 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/12 15:52:14 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

int		main(int ac, char **av)
{
	t_bin	bin;

	if (ac != 2)
		ERROR("usage: ./disassembler <corobj.cor>");
	if ((bin.fd = open(av[1], O_RDONLY)) == -1)
		ERROR("Failed to open file");
	read_header(&bin);
	print_bin(&bin);
}
