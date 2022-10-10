#include<iostream> 
#include<math.h> 

using namespace std; 

int main(int argc,int **argv) { 


    int a, b;
	int sum = 0;
	int diff = 0; 
	int pro=0;
	int quo=0;
	int rem=0; 
 
     cout << "Enter the two numbers for the following arithmetic operations " << endl; 

     cin >> a; 
     cin >> b; 


     sum = a + b; 

     diff = a - b; 

     pro = a * b; 

     quo = a / b;  

     rem=a % b; 
 

     cout << "Addition is " << sum << endl; 

     cout << "Subtraction is " << diff << endl; 

     cout << "Multiplication is " << pro << endl; 

     cout << "Division is " << quo << endl; 

     cout << "Modulus is " << rem << endl; 

return 0; 

} 