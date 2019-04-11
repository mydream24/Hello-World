/* This is Program that Converts Binary to Decimal number and Vice Versa */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void decimal()
{
    int decimal;
        vector<int> vector_binary;
        cout << "Enter a decimal number: ";
        cin >> decimal;

      for(int x=0; decimal > 0; x++){
          if (decimal%2 == 0){
              vector_binary.push_back(0);
          }
          else{
            vector_binary.push_back(1);
          }
        decimal /= 2;
      }
        cout << endl;
        int dsize = static_cast<int>(vector_binary.size());
        for(int i=1; dsize>0 ; --dsize){
            cout << vector_binary[dsize-i] << " ";
        }
        cout << endl;
}

void binary()
{
    vector<int> vbinary;
        cout << "Enter a binary number(input -1 to stop): ";
        int binary;
        cin >> binary;

        while (binary != -1){
            vbinary.push_back(binary);
            cin >> binary;
        }
        int bsize = static_cast<int>(vbinary.size());
        cout << "The size of the binary is: " << bsize << endl;
        int converted_decimal=0;
        for(unsigned int i=0; vbinary.size()> i ; i++){
            --bsize;
            converted_decimal += pow(2, bsize) * vbinary[i];
        }
        cout << "The decimal number is: " << converted_decimal << endl;
    }

int main()
{
    string choice;

    cout << "This is Program that Converts Binary to Decimal number and Vice Versa" << endl << endl;
    cout << "What type of conversion do you want?" << endl << endl;
    cout << "Decimal to Binary? (input decimal)" << endl;
    cout << "Binary to Decimal? (input binary)" << endl;
    cin >> choice;

    if(choice == "decimal"){
        decimal();
    }
    else
    if (choice == "binary"){
        binary();
    }
    else
        cout << "System Error: No choice found!" << endl;
}
