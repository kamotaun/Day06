/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:36:23 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/15 15:04:22 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);

int main(int argc, char** argv){
	if(argc > 1)
		while(*argv)
			ft_putchar(**argv++);
		else
		{
			char* c = "./a.out";
			while(*c){
				ft_putchar(*c++);
			}
		}
	return 0;
}
void ft_putchar(char c){
	write(1, &c, 1);
}
