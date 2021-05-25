/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:33:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 00:51:03 by tayamamo         ###   ########.fr       */
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

 private:
    void        announce_(void);
    std::string name_;
    std::string type_;
};

#endif  // EX02_ZOMBIE_HPP_
