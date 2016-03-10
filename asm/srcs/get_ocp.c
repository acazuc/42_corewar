/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ocp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 10:19:46 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 18:00:27 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int16_t			get_ocp3(char arg1, char arg2, char arg3)
{
	int16_t	ret;

	ret = 0;
	ret += get_ocp1(arg1);
	ret += get_ocp1(arg2) >> 2;
	ret += get_ocp1(arg3) >> 4;
	return (ret);
}

int16_t			get_ocp2(char arg1, char arg2)
{
	int16_t	ret;

	ret = 0;
	ret += get_ocp1(arg1);
	ret += get_ocp1(arg2) >> 2;
	return (ret);
}

int16_t			get_ocp1(char arg1)
{
	int16_t	ret;

	ret = 0;
	if (arg1 == T_REG)
		return (REG_CODE << 6);
	else if (arg1 == T_IND)
		return (IND_CODE << 6);
	return (DIR_CODE << 6);
}
