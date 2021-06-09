/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 01:35:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 05:59:48 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
    if (N < 0)
        return;
    this->N_ = N;
    this->zombie_horde_ = new Zombie[N];
    for (int i = 0; i < N; i++) {
        this->zombie_horde_[i].setName(ZOMBIE_NAME[rand() % ZOMBIE_NAME_NUM]);
        this->zombie_horde_[i].setType(ZOMBIE_TYPE[rand() % ZOMBIE_TYPE_NUM]);
    }
}

ZombieHorde::~ZombieHorde(void) {
    if (this->N_ < 0)
        return;
    delete[] this->zombie_horde_;
}

void    ZombieHorde::announce(void) {
    for (int i = 0; i < this->N_; i++)
        this->zombie_horde_[i].announce();
}
