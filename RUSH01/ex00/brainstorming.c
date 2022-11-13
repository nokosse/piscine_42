/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainstorming.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwolf <bwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:47:17 by bwolf             #+#    #+#             */
/*   Updated: 2022/09/25 19:09:02 by bwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

VERIF CONDITIONS
===
//ARGV 
===
ft_verifargv = verif si argc == 2, si argv[i] == 31, si paires = 1234 & impaire = ' '
SI OUI letsgo
SI NON ERROR


====
Parametres autour
====
ft_verif_up
	//- definir up down left right
	//- verif si pas 2 x '1'
	//- != 2 * '4'
	- != 3 * '3'
	- != 4 * '2'
	- si '4', +4 == '1'
	-[i]+[i+4] == > 2 && < 6
	- coins (changer coordonnees a chaque fois) != 1 & 4 
ft_verif_down
	la meme chose en changeant les coordonnees
ft_verif_left
ft_verif_right
ft_verif_all
	- si les 4 precedentes sont ok return 1

===
Verif_remplissage tableau
===
ft_defcol
	-utiliser les coordonnees de tab pour creer nouveau tab pour chaque colonne
	tabcol1 = {tab[0], tab[4],tab[8],tab[12]}
ft_defrow
	la meme
	- verif 1234
	- verif total = 10
	-verif 

============================================
BACKTRACKING
===
- si verif_remplissage ok
	REMPLIS