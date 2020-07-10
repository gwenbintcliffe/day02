/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:50:14 by gbintcli          #+#    #+#             */
/*   Updated: 2020/07/10 09:42:19 by gbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void) {
	char start='a';
	char end='z';
	while (start <= end) {
		ft_putchar (start);
		start++;
	}
}

int 	main(void)
{
	ft_print_alphabet();
	return (0);
}
