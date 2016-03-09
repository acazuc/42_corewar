/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ocp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 10:19:46 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 16:16:31 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

static int8_t	get_ocp_part(t_arg_type arg)
{
	if (arg == T_REG)
		return (1);
	else if (arg == T_DIR)
		return (2);
	else if (arg == T_IND)
		return (3);
	return (0);
}

int8_t			get_ocp3(t_arg_type arg1, t_arg_type arg2, t_arg_type arg3)
{
	int8_t	ret;

	ret = 0;
	ret += get_ocp_part(arg1) << 6;
	ret += get_ocp_part(arg2) << 4;
	ret += get_ocp_part(arg3) << 2;
	return (ret);
}

int8_t			get_ocp2(t_arg_type arg1, t_arg_type arg2)
{
	int8_t	ret;

	ret = 0;
	ret += get_ocp_part(arg1) << 6;
	ret += get_ocp_part(arg2) << 4;
	return (ret);
}

int8_t			get_ocp1(t_arg_type arg1)
{
	int8_t	ret;

	ret = 0;
	ret += get_ocp_part(arg1) << 6;
	return (ret);
}
