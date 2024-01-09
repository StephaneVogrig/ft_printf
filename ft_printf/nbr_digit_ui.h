/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_digit_ui.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:09:21 by stephane          #+#    #+#             */
/*   Updated: 2024/01/08 23:05:22 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef INT_LEN_B10_H
# define INT_LEN_B10_H

# include "vs_type.h"

int	nbr_digit_ui8(t_ui8 n);
int	nbr_digit_ui16(t_ui16 n);
int	nbr_digit_ui32(t_ui32 n);
int	nbr_digit_ui64(t_ui64 n);

#endif