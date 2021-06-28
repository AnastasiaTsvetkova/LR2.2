#include <iostream> 
#include <string> 
using namespace std; 
void str() 
{ 
string a, a1, a2; 
cout << "Введите строку - "; 
getline(cin, a); 
cout << "Введите подстроку - "; 
getline(cin, a1); 
cout << "Введите свою подстроку - "; 
getline(cin, a2); 
a.replace(a.find(a1), a1.size(), a2); 
cout << a << " - строка" << endl; 
} 
int main() 
{ 
setlocale(LC_ALL, "RU"); 
str(); 
system("pause"); 
return 0; 
} 

