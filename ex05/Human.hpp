/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 04:48:15 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 05:17:21 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX05_HUMAN_HPP_
#define EX05_HUMAN_HPP_

#include <string>
#include <iostream>
#include "Brain.hpp"

class   Human {
 public:
    std::string     identify(void) const;
    const Brain&    getBrain(void) const;

 private:
    Brain     brain_;
};

#endif  // EX05_HUMAN_HPP_
