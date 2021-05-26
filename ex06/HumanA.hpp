/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:40:53 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 16:08:59 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX06_HUMANA_HPP_
#define EX06_HUMANA_HPP_

#include <iostream>
#include <string>
#include "Weapon.hpp"

class   HumanA {
 public:
    HumanA(std::string name, const Weapon &weapon);
    void        attack(void);

 private:
    std::string name;
    const Weapon&     rweapon_;
};

#endif  // EX06_HUMANA_HPP_
