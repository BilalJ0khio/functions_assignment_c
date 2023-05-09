//
//  main.cpp
//  assignment function
//
//  Created by Bilal Ahmed on 08/05/2023.
//

#include <iostream>
using namespace std;
int circleArea(int radius);
int oddEven(int number);
void naturalNumbers(int number);
void oddNatural(int numbers);
int checkNum(int number,int digit);
int fact(int number);
void primeFactors(int number);



int main(int argc, const char * argv[]) {

//    int area;
//    int radius;
//    area = circleArea(4);
//    cout<<"Area of circle is "<<area<<endl;
//    cout<<oddEven(2+2)<<endl;
//    naturalNumbers(5);
//    oddNatural(10);
//    cout<<fact(5)<<endl;
//    cout<<checkNum(132, 1)<<endl;
    
//    int number = 36;
//    int nextNum = number/2;   // denominator i
//    cout<<nextNum<<endl;
    
    
    primeFactors(18);
    
    
    
    
    
    
    return 0;
    
}








void primeFactors(int number){
    
//    int nextNumber=0;
    int i=1;
    while(i<=number)
    {
    
        for(int i=2;i<=number;i++)
        {
            if(number%i == 0)
            {
                number= number/i;
                cout<<i<<" ";
                break;
            }
            
            
            
        }
        
        
        i++;
        
        
    }
    
    
    
}


int checkNum(int number,int digit)
{
 
    int numless,lastDigit;
    
                                //1234
    lastDigit = number %10;     //4
    numless = number /10;        // 123
    
    do
    {
        if(lastDigit == digit)    // 4==3
            return 1;             //
        if(numless == 0)          // 123 == 0
            break;
        
        lastDigit = numless % 10; // 3
        numless = numless /10; //  12
        
        
        
    }while(1);
    
    return 0;
    
}



int fact(int number)
{
    
    int f=1;
    for(number;number>=1;number--)
    {
        f= f * number;
        cout<<number;
        if(number == 1)
        continue;
        cout<<" * ";
            
        
    }
    cout<<" = ";
    return f;
}




void oddNatural(int numbers)
{
    for(int i=1;i<numbers;i++)
    {
        if(i%2!=0)
            cout<<i<<" ";
            
        
    }
    
    
    
}



void naturalNumbers(int number)
{
    for(int i=1;i<=number;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
}


int oddEven(int number)
{
    if(number%2==0)
        return 1;
    return 0;
    
}


////////////////////// / / / / / / / / / / / / //  // / //
int circleArea(int radius)
{
    
    const int pie = 3.14159;
    return (pie*radius*radius);
}



