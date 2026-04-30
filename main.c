/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpavlov <alpavlov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:13:28 by alpavlov          #+#    #+#             */
/*   Updated: 2026/04/30 14:59:52 by alpavlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	x;
	int	a;
	int	b;

	x = 42;
	a = ft_printf("Mine: %c %s %p %d %i %u %x %X %%\n",
			'A', "hello", &x, -42, 42, 3000000000u, 255, 255);
	b = printf("Real: %c %s %p %d %i %u %x %X %%\n",
			'A', "hello", &x, -42, 42, 3000000000u, 255, 255);
	printf("ft_printf return: %d\n", a);
	printf("printf return: %d\n", b);
	printf("NULL format return: %d\n", ft_printf("%d\nuijnmji9ujuojouijioujoiuojiujiuojiujiujoiji;ojijijioio;j;joijoijoip;pjij;oij;oijoioji;ojioij;ojiojij;iojjioj;iojio;ijjiojijj;iooj8ioji;ojiio;jo;ijjioijo;;oji;oijjoi;oji",  7879890));
	return (0);
}
// Pour lancer, compiler dans l ordre
// cc main.c libftprintf.a
// ./a.out