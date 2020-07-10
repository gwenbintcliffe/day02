/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:19:19 by gbintcli          #+#    #+#             */
/*   Updated: 2020/07/10 09:41:50 by gbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c,1);
}
void ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else 
	{
		ft_putchar('P');
	}
}
int	main()
{ft_is_negative(4);
	return 0;
}
