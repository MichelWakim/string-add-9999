#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void stringAdd9999 ();

int main () {
   cout<<"***********************   This app is to take a very big number and add it to 9999   ***********************\n\n";
   stringAdd9999();
   return 0;
}


bool isNumber(string s) 
{ 
    for (int i = 0; i < s.length(); i++) 
        if (isdigit(s[i]) == false) 
            return false; 
  
    return true;
}

void stringAdd9999 () {
   //creating string to read the input
   string input;
   
   cout<<"Please end any big number you want.\n";
   //reading the input from the user
   getline(cin, input);
   
   cout<<endl<<input<<" + 9999 = \t";
   
   //adding 9999 = adding 10000 - 1
   //last digit is decreased by one
   input[input.length() - 1] --;
   //if the length < 5 then concatinate the input string with a 1 in the front
   if (input.length() < 5) {
      //it is separated into 2 steps cuz if u use the pow in the to_string it will use it as a float not integer
      int power = pow(10, 5 - 1 - input.length()) ;
      //concatination
      input = to_string(power) + input;
   }  
   //else add 10000 to the number
   else {input[input.length() - 5] ++ ;} 
   
   cout<<input<<endl;

}
