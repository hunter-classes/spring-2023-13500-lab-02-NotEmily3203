/*
Author: Emily Lin
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: Lab2C

Here, briefly, at least in one or a few sentences
describe what the program does.
*/
#include <iostream>
int main(){
    const int size =10;
    int myData[size];
    for(int i=0;i<size;i++){
        myData[i]=1;
    }
    int i;
    int v;
    do{
        for(int i=0;i<size;i++){
            std::cout<<myData[i]<<" ";
        }
        std::cout<<"\nInput index: ";
        std::cin>>i;
        std::cout<<"Input value: ";
        std::cin>>v;
        myData[i]=v;
    }while(i>0 && i<=10);
    std::cout<<"Index out of range. Exit"<<std::endl;
    return 0;
}