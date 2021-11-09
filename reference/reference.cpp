
#include <iostream>

int main{
	int p=3
	std::cout << calcul(1) << std::endl;
    std::cout << calcul(p) << std::endl;
    std::cout << p << std::endl;
	
    return(0)
}

int calcul(int n){
	int ret=n;
	ret ++;

	return(ret);
}