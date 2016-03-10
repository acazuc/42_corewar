/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ocp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 10:19:46 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 15:13:22 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int8_t			get_ocp3(char arg1, char arg2, char arg3)
{
	int8_t	ret;

	ret = 0;
	ret += arg1 << 6;
	ret += arg2 << 4;
	ret += arg3 << 2;
	return (ret);
}

int8_t			get_ocp2(char arg1, char arg2)
{
	int8_t	ret;

	ret = 0;
	ret += arg1 << 6;
	ret += arg2 << 4;
	return (ret);
}

int8_t			get_ocp1(char arg1)
{
	int8_t	ret;

	ret = 0;
	ret += arg1 << 6;
	return (ret);
}
