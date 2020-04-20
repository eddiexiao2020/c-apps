//
//  main.cpp
//  myc++app2
//
//  Created by Hanyi Xu on 2020/3/12.
//  Copyright © 2020 Hanyi Xu. All rights reserved.
//

#include <iostream>
#include <iterator>
#include "myprint.hpp"
#include "person.hpp"
#include "basketballPlayer.hpp"

template <typename aT, typename bT>
bT addNumber(aT a, bT b){
    bT myresult = a+b;
    return myresult;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    myprint printshit("This is earth");
    person aperson("Mitchal, Jordan",32);
    std::map<int,std::string> mymap;
    mymap=aperson.getpersoninfo();
    std::string myshit=printshit.printathing();
    std::map<int,std::string>::iterator itr;
     std::cout << "Hello, World!\n"<<myshit.append(" \n");
    std::cout << "this  world has people: \n";
    for (itr = mymap.begin();itr!=mymap.end();itr++){
        std::cout << '\t'<< itr->first << '\t' <<itr->second << "\n";
    }
      std::cout << "this  world has basketball player: \n";
    basketballPlayer aPlayer("Kobe Bryant",32,37.5,1.7);
    std::map<int,std::string> myamap;
    myamap=aPlayer.getpersoninfo();
    std::map<int,std::string>::iterator itr0;
    for (itr0 = myamap.begin();itr0!=myamap.end();itr0++){
        std::cout << '\t'<< itr0->first << '\t' <<itr0->second << "\n";
    }
    std::map<double,double> mycmap;
    //mymap1=aPlayer.getplayerinfo();
    mycmap=aPlayer.getplayerinfo();
    std::map<double,double>::iterator itr1;
    for (itr1 = mycmap.begin();itr1!=mycmap.end();itr1++){
        std::cout << '\t'<< itr1->first << '\t' <<itr1->second << "\n";
    }
    std::cout<<addNumber(11, 12.4)<<"\n";
    int data = 50;
    int *p=&data;
    *p=100;
    int **dP = &p;
    
    std::cout<<"myvalue: "<<data<<"\n";
     std::cout<<"myvalue: "<<**dP<<"\n";
    return 0;
}
