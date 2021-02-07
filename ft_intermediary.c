/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intermediary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:18:42 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/14 12:18:44 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void ft_intermediary(const char *format, t_printf *tab, va_list list)
{
	if (tab->conv == 'd' || tab->conv == 'i')
		ft_di_convert(format, tab, list);
	if (tab->conv == 'c')
		ft_c_convert(format, tab, list);
	if (tab->conv == 's')
		ft_s_convert(format, tab, list);
	if (tab->conv == 'p')
		ft_p_convert(format, tab, list);
	if (tab->conv == 'x')
		ft_x_convert(format, tab, list);
	if (tab->conv == 'X')
		ft_mx_convert(format, tab, list);
}
Ceci est une request
