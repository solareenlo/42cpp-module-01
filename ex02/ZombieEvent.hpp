/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:12:19 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/11 23:24:56 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_ZOMBIEEVENT_HPP_
#define EX02_ZOMBIEEVENT_HPP_

#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class   ZombieEvent {
 public:
    void        setZombieType(std::string type);
    Zombie*     newZombie(std::string name);
    void        randomChump();

 private:
    std::string type_;
};

#endif  // EX02_ZOMBIEEVENT_HPP_
