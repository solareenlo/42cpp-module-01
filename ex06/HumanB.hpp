/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:21:39 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/09 22:35:11 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX06_HUMANB_HPP_
#define EX06_HUMANB_HPP_

#include <iostream>
#include <string>
#include "Weapon.hpp"

class   HumanB {
 public:
    explicit HumanB(std::string);
    void        setWeapon(const Weapon& weapon);
    void        attack(void);

 private:
    std::string name;
    const Weapon      *pweapon_;
};

#endif  // EX06_HUMANB_HPP_
