/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:18:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/11 23:43:01 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type) {
    this->type_ = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    return (new Zombie(name, this->type_));
}

void ZombieEvent::randomChump() {
    std::string num = "0123456789";
    std::string alpha = "abcdefghijklmnopqrstuvwxyz";
    std::string name = "", type = "";
    for (int i = 0; i < 3; i++) {
        name += alpha[rand() % 26];
        type += num[rand() % 10];
    }
    Zombie zom = Zombie(name, type);
    zom.announce();
}
