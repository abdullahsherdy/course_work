// 


#include<bits/stdc++.h>
using namespace std;

/// Function 
/// any function solve some sort of problems 
/// Tax 
/// handling errors 
// <return data types> <name> <(parameters)>
/*
{ // begining of the function 

    // logic 

} // end of the function 
*/ 

/// Definition  
float CalculateTax(float Salary, float taxPrecentage = .2){

    if(Salary > 5000)
      Salary -= Salary*taxPrecentage;

    return Salary;
}


int main(){

    /// calling 
    
    cout << CalculateTax(6000, .2);

    return 0;
}