/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:17:53 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 17:18:48 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "unistd.h"

int	ft_isascii(int sym)
{
	if (sym >= 0 && sym <= 127)
		return (1);
	else
		return (0);
}