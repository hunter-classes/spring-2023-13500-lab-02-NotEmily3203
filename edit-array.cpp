//Name: Emily Lin; Github: NotEmily3203
#include <iostream>
int main(){
    const int size =10;
    int myData[size];
    for(int i=0;i<size;i++){
        myData[i]=1;
    }
    int i=0;
    int v;
    do{
        for(int i=0;i<size;i++){
            std::cout<<myData[i]<<" ";
        }
        std::cout<<"\nInput index: ";
        std::cin>>i;
        if(i>=0 && i<10){
            std::cout<<"Input value: ";
            std::cin>>v;
            myData[i]=v;
        }else{
            std::cout<<"Index out of range. Exit."<<std::endl;
        }
    }while(i>=0 && i<10);
    return 0;
}