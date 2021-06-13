/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 01:14:58 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 03:25:10 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_ZOMBIEHORDE_HPP_
#define EX03_ZOMBIEHORDE_HPP_

#include <string>
#include "Zombie.hpp"

#define ZOMBIE_NAME_NUM 8
#define ZOMBIE_TYPE_NUM 8

const char    ZOMBIE_NAME[ZOMBIE_NAME_NUM][10] = {
    "Arya",
    "Benjen",
    "Bran",
    "Jon",
    "Lyanna",
    "Rikon",
    "Robb",
    "Sansa",
};

const char  ZOMBIE_TYPE[ZOMBIE_TYPE_NUM][2] = {
    "A",
    "B",
    "C",
    "D",
    "E",
    "F",
    "G",
    "H",
};

class   ZombieHorde {
 public:
    explicit    ZombieHorde(int N);
    ~ZombieHorde();

    void        announce() const;

 private:
    int         N_;
    Zombie      *zombie_horde_;
};

#endif  // EX03_ZOMBIEHORDE_HPP_
