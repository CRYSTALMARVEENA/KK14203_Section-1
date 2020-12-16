//Name: CRYSTAL MARVEENA MARITIN
//Matric No : BI19110079
//Lab Assignment 3

#include <iostream>
#include <stack>

using namespace std; 
  
// isBracketBalanced() is to check if input brackets are balanced 
bool isBracketBalanced(string input) 
{   
    stack<char> s; 
    char y; 
  
    // Traversing the Expression 
    for (int i = 0; i < input.length(); i++)  
    { 
        if (input[i] == '(' || input[i] == '[' || input[i] == '{')  
        { 
            // Push the element in the stack 
            s.push(input[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
            return false; 
  
        switch (input[i]) { 
        case ')': 
              
            // Store the top element in a 
            y = s.top(); 
            s.pop(); 
            if (y == '{' || y == '[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            y = s.top(); 
            s.pop(); 
            if (y == '(' || y == '[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            y = s.top(); 
            s.pop(); 
            if (y == '(' || y == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check if the stack is empty 
    return (s.empty()); 
} 
  
//main function 
int main() 
{ 
    // string input = "{()}[()]"; 
    string input;
  cout<< "Enter input: ";
  cin >>input;
    // Function call 
    if (isBracketBalanced(input)) 
        cout << "True"; 
    else
        cout << "False"; 
    return 0; 
} 
