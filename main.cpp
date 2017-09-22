/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cplummer
 *
 * Created on September 22, 2017, 12:56 PM
 */

#include <string> 
#include <iostream>
int main() {
std::string sentence;
std::getline(std::cin, sentence);

for(int i = 0; i < sentence.length(); i++)
{
    if(sentence.at(i) == ' ' && sentence.at(i + 1) == ' ')
    {
        sentence.erase(i, 1);
        i--;
    }
}


std::cout << sentence << "\n";
}

