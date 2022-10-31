// isPalid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int isPalidarome(char str[]) {
    // Start from leftmost and
    // rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters
    // while they are same
    while (h > l) {
        if (str[l++] != str[h--]) {
            return 0;
        }
        
    }
    return 1;

}

int list_palidarome(char c[][10]) {
    int count = 0;
    /*
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            
            int w = isPalidarome(c[i][j]);
                if (w == i) {
                    count++;
                }
        }
    }
    */
    for (int i = 0; i < 4; i++) {
        //cout << c[i];
        int index = isPalidarome(c[i]);
        if (index == 1)
            count++;
    }
    
    return count;
}

int main()
{
    char colour[4][10]{
        "blue","moom","jooj","yellow"
    };
 //#abbba
    int occurance =list_palidarome(colour);
    cout << "the number palidrome names:" << occurance << endl;

   // char str[] = { "maya" };
    //nt w=isPalidarome(str);
    ///cout << w;


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
