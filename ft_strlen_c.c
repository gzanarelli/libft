/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_c.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sifouche <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 15:40:24 by sifouche     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 15:41:20 by sifouche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_c(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}
