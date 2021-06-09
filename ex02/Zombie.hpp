/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:33:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 05:58:07 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_ZOMBIE_HPP_
#define EX02_ZOMBIE_HPP_

#include <iostream>
#include <string>

class   Zombie {
 public:
    Zombie(std::string name, std::string type);

    void        putNameType(void);
    void        announce(void);

 private:
    std::string name_;
    std::string type_;
};

#endif  // EX02_ZOMBIE_HPP_
