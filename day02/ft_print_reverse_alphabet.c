/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:49:54 by gbintcli          #+#    #+#             */
/*   Updated: 2020/07/10 09:44:12 by gbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void) {
	char start;
	char end;
	start='z';
	end='a';
	while (start >=  end) {
		ft_putchar (start);
		start--;
	}
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	main(void)
{
	ft_print_reverse_alphabet();	
	return 0;
}
