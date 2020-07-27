#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!","Jhon", "Mariaca"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout <<"\ntermine";
    cout << endl;
}