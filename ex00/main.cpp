/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:28:47 by qdo               #+#    #+#             */
/*   Updated: 2024/06/17 17:49:56 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <algorithm>
#include <iostream>
#include <map>
#include "easyfind.hpp"
#include <vector>

int main() {

    std::vector<int> ve;
    ve.push_back(1);
    ve.push_back(1);
    ve.push_back(1);
    ve.push_back(2);
    ve.push_back(2);
    ve.push_back(2);
    ve.push_back(3);
    ve.push_back(4);
    ve.push_back(5);

    try{        easyFind(ve, 0);}
    catch (NotExist &e){std::cout << e.what() << std::endl;}
    std::cout << "------------ -------- " << std::endl;

    try{        easyFind(ve, 1);}
    catch (NotExist &e){std::cout << e.what() << std::endl;}
    std::cout << "------------ -------- " << std::endl;

    try{        easyFind(ve, 2);}
    catch (NotExist &e){std::cout << e.what() << std::endl;}
    std::cout << "------------ -------- " << std::endl;

    try{        easyFind(ve, 3);}
    catch (NotExist &e){std::cout << e.what() << std::endl;}
    std::cout << "------------ -------- " << std::endl;

    try{        easyFind(ve, 4);}
    catch (NotExist &e){std::cout << e.what() << std::endl;}
    std::cout << "------------ -------- " << std::endl;

    try{        easyFind(ve, 5);}
    catch (NotExist &e){std::cout << e.what() << std::endl;}
    std::cout << "------------ -------- " << std::endl;
    
    try{        easyFind(ve, 6);}
    catch (NotExist &e){std::cout << e.what() << std::endl;}
    std::cout << "------------ -------- " << std::endl;

    // try
    // {
    //     easyFind(ve, a);
    // }
    // catch (NotExist &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << "------------ -------- " << std::endl;
}

