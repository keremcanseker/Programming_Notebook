#include <iostream>
#include <string>

class Entitiy
{
private:
    int x;
    int y;

public:
    int GetX() const //const here means you cannot modify any of the class member variables
    {
        // f.e this is wrong x =5;
        return x;
    }

    void setX(int xn) // making a setter const  is not true 
    {
        x = xn;  
    }
};



int main(){

    
    int const maxAge= 50;
    // this will couse error because max age is constant
    //maxAge= 45;

    const int*  p = new int;

    *p = 2;// if you put const before int* this will throw an error
    p = (int*)&maxAge; // this is okey tho but if you put const after int* it will throw an error
    // this well couse error becasue int* const int* deger atamasi
    // p = &maxAge;
    


    return 0;
}