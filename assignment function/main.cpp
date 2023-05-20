//
//  main.cpp
//  assignment function
//
//  Created by Bilal Ahmed on 08/05/2023.
//

#include <iostream>
using namespace std;
#include <cmath>
int circleArea(int radius);
int oddEven(int number);
void naturalNumbers(int number);
void oddNatural(int numbers);
int checkNum(int number,int digit);
int fact(int number);
void primeFactors(int number);
void LCM(int,int);
void reversenumber(int );
void fibonacciSeries();
bool armStrongNumber(int num);


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
    //    LCM(4, 6);
//    int number = 36;
//    int nextNum = number/2;   // denominator i
//    cout<<nextNum<<endl;
    
//    primeFactors(18);
//    reversenumber(1234);
//    fibonacciSeries();
    
//    cout<<1234%10<<endl;
//    cout<<1234/10<<endl;
//    cout<<armStrongNumber(408)<<endl;

    
     
    
    
    
    return 0;
    
}






bool armStrongNumber(int num)
{
    
    int sum=0,digit,tens=10,length=1;
    
    int num1 = num;
    
    while(num/tens!=0)
    {
        length++;
        tens*=10;
    }
    
    
    
    for(int i =0 ;i<length;i++)
    {
        digit = num1%10;
        sum = sum  + pow(digit, length);
        num1 = num1 /10;
    }
    
    if(sum == num)
    {
        return true;
    }
    return false;
}






//1 1 2 3 5 8 13

void fibonacciSeries()
{
    
    int pre1=1,pre2=1,next;
    cout<<pre1<<" "<<pre2<<" ";
    for(int i=1;i<10;i++) {
        next = pre1 + pre2;
        cout<<next<<" ";
        pre1 = pre2;
        pre2 = next;
    }
    
}



void reversenumber(int num)
{
    
    
    int lastdigit=0;
    int newNum = num;
    int tenmiltiple = 10;
    
    
    cout<<"Reverse of a number is: ";
    while(newNum!=0)
    {
        lastdigit = newNum % 10;
        newNum = num/ tenmiltiple;
        tenmiltiple*=10;
        cout<<lastdigit;

    }
    cout<<"\n";
    
    
}







void LCM(int num1,int num2)
{
    
    int n1=num1,n2=num2;
    
    int commonMiltiple=1;
    int greater;
    int flag=0;
    
    // setting i limit
    if(num1>num2)
        greater = num1;
    else
        greater = num2;
    
    while(1) {
        
        for(int i=2 ; i<=greater ; i++)
        {
//
            if(num1%i ==0 && num2%i==0)
                {
                    commonMiltiple *= i;
                    num1 = num1 / i;
                    num2 = num2 / i;
                    break;
                }
            else if(num1%i==0 && num2%i!=0)
                {
                    commonMiltiple*=i;
                    num1 = num1 / i;
                    break;
                }
            else if(num1%i!=0 && num2%i==0)
            {
                    commonMiltiple*=i;
                    num2 = num2 / i;
                    break;
                }
            
            if(num2==1 && num1 ==1)
                {
                    
                    cout<<"LCM of "<<n1<<" and "<<n2<<" is "<<commonMiltiple<<endl;
                    flag = 1;
                    break;
                }
        }
        if(flag ==1)
            break;
    }
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



