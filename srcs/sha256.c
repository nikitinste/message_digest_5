/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha256.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uhand <uhand@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:53:03 by uhand             #+#    #+#             */
/*   Updated: 2020/11/19 15:13:33 by uhand            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ssl.h"

int		ft_sha256(char const *message, size_t msg_size, char **digest)
{
	if (digest == NULL)
		return (-1);
	ft_sprintf(digest, "# sha256 hash for \"%s\" #\"", message);
	return (1);
}
