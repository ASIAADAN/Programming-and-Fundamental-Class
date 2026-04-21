#include <iostream>
using namespace std;

char board[5][5] = {
    {'.', '.', '.', '*', '*'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '.', '*', '*', '.'}
};



    if (board[row][col] == '*')
        return "BOOM";
    else
        return "splash";
}

int main()
{
    string pos;
    cout << "Enter coordinate ): ";
    cin >> pos;

    cout << "Result: " << fire(pos);
}