#include<iostream>

#include <stack>
using namespace std

int main(int argc, char** argv){


    int i=1;
    int compteur=0;

    for (; i<argc; i++  ){
        const std::string str=argv[i];
    }
    
    std::vector<int> V;

    for (; i<argc; i++  ){
        

    
        if str[i]=='+'{
            if len(compteur)==0{
                V.push-back(str[i-1]+str[i-2]);
            }
            V.push_back(str[i-1]+V[compteur-1]);
            compteur ++;
        }
        
        if str[i]=='x'{
            if len(compteur)==0{
                V.push-back(str[i-1]*str[i-2]);
            }
            V.push_back(str[i-1]*V[compteur-1]);
            compteur ++;
        }
        
        if str[i]=='-'{
            if len(compteur)==0{
                V.push-back(str[i-1]-str[i-2]);
            }
            V.push_back(str[i-1]-V[compteur-1]);
            compteur ++;
        }
        
        if str[i]=='/'{
            if len(compteur)==0{
                V.push-back(str[i-1]/str[i-2]);
            }
            V.push_back(str[i-1]/V[compteur-1]);
            compteur ++;
        }
        return(V[compteur-1]);
    }
