/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:29:26 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/11 23:39:47 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
    srand((unsigned) time(NULL));

    Zombie  first("first", "001");
    first.announce();

    ZombieEvent zombie_evnet;
    zombie_evnet.setZombieType("123");
    Zombie *second = zombie_evnet.newZombie("second");
    second->announce();
    zombie_evnet.randomChump();
    delete second;
    return 0;
}
