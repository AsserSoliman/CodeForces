#include <iostream>
using namespace std;
 
char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int main()
{
    int x, n;
    cin >> x >> n;
 
 
    int index = 0;
    string password = "";
 
    while (x--)
    {
        index %= n;
        password += alphabet[index];
        index++;
 
    }
 
    cout << password;
 
 
}