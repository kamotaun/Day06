/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:36:23 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/15 10:48:13 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);
void ft_print_program_name(void);

int main(void){
	ft_print_program_name();
	return 0;
}
void ft_print_program_name(void){
	char* prog_name = "./a.out";

	while(*prog_name != '\0'){
		ft_putchar(*prog_name++);
	}
}
void ft_putchar(char c){
	write(1, &c, 1);
}
