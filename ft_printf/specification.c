/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specification.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 04:18:57 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/19 04:22:49 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	specification_init(t_specification *specification)
{
	specification->flag_# = 0;
	specification->flag_0 = 0;
	specification->flag_minus = 0;
	specification->flag_space = 0;
	specification->flag_plus = 0;
	specification->width = 0;
	specification->dot = 0;
	specification->precision = 0;
	specification->conversion = 0;
}