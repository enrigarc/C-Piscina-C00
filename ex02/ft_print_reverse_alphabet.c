/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@stundet.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:18:15 by enrigarc          #+#    #+#             */
/*   Updated: 2023/08/14 17:18:20 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter-- ;
	}
}
/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
