/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 04:26:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/24 17:09:52 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) {
    this->name_ = name;
}

Pony::~Pony(void) {
}

std::string Pony::getName(void) {
    return (this->name_);
}

void    *Pony::getAddress(void) {
    return (this);
}
