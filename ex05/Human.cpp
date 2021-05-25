/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 04:54:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 05:09:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify(void) const {
    return (this->getBrain().identify());
}

const Brain&    Human::getBrain(void) const {
    return (this->brain_);
}
