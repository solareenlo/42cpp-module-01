/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:08:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/11 23:10:49 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name_(""), type_("") {}
Zombie::Zombie(std::string name, std::string type) : name_(name), type_(type) {}

void    Zombie::announce() const {
    std::cout << "<" << this->getName() << " (" << this->getType();
    std::cout << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getName() const { return (this->name_); }
std::string Zombie::getType() const { return (this->type_); }
void        Zombie::setName(std::string name) { this->name_ = name; }
void        Zombie::setType(std::string type) { this->type_ = type; }
