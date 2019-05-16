#include <iostream>
#include <string>
using namespace std;

int main() {

string arr[] = {"X", "XX", "XXX"};

string userInput;
getline(cin,userInput);

for (int i = 0; i < int(userInput.length()); i++)
{
    if (userInput == arr[i])
    {
        cout << userInput << " is in the array at position " << i << endl;
    }
    else
    {
        cout << userInput << " is not in the array at position " << i << endl;
    }
}
}
