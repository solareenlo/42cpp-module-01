/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:24:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 16:05:06 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX06_WEAPON_HPP_
#define EX06_WEAPON_HPP_

#include <string>

class   Weapon {
 public:
    explicit Weapon(std::string);
    const std::string&  getType(void) const;
    void                setType(std::string str);

 private:
    std::string   type;
};

#endif  // EX06_WEAPON_HPP_
