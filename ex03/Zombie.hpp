/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:33:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 03:19:28 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_ZOMBIE_HPP_
#define EX03_ZOMBIE_HPP_

#include <iostream>
#include <string>

class   Zombie {
 public:
    Zombie(void);
    Zombie(std::string name, std::string type);

    void        putNameType(void);
    void        setName(std::string name);
    void        setType(std::string type);
    void        announce(void);

 private:
    std::string name_;
    std::string type_;
};

#endif  // EX03_ZOMBIE_HPP_
