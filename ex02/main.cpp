/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:29:26 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 00:49:24 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void) {
    Zombie  first("first", "001");
    first.putNameType();
    std::cout << std::endl;

    ZombieEvent zombie_evnet;
    zombie_evnet.setZombieType("123");
    Zombie *second = zombie_evnet.newZombie("second");
    second->putNameType();
    std::cout << std::endl;
    delete second;

    Zombie *third = zombie_evnet.randomChump();
    third->putNameType();
    std::cout << std::endl;
    delete third;
    return 0;
}
