//Name: Emily Lin; Github: NotEmily3203
#include <iostream>
int main(){
    int n = 0;
    do{
        std::cout<<"Please enter an integer: ";
        std::cin>>n;
    }while(n>=100 || n<=0);
    std::cout<<"Number squared is "<<n*n<<std::endl;
    return 0;
}