// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string encode(string input, vector<char> cipher)
{
    vector<char> encoded
}


int main()
{
    vector<char> cipher({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    string input;
    string output;

    cout << "Input text to encode: ";
    getline(cin, input);
    
    for (char letter : input)
    {
        if (letter >= 65 && letter <= 90) //uppercase
        {
            output += cipher[letter - 65]; //return letter at slot [-65]
        }
        else if (letter >= 97 && letter <= 122) //lowercase
        {
            char uppercaseLetter = letter - 32; //convert to uppercase
            int uppercaseCode = uppercaseLetter - 65; //uppercase code
            char encodedLetter = cipher[uppercaseCode];
            output += cipher[uppercaseCode + 32]; //convert to lowercase
        }
        else //is not a letter
        {
            output += letter;
        }
    }

    cout << "Encoded message: " << output;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
