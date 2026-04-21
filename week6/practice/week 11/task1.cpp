#include <iostream>
#include <cmath>
using namespace std;
void printcars(int cars[][5], int row_size);
int main()
{
    const int rowsize = 5;
    const int colsize = 5;
    int cars[rowsize][colsize] = {{10, 7, 12, 4, 5},
                                  {23, 19, 12, 16, 14},
                                  {23, 19, 12, 16, 14},
                                  {3, 5, 18, 10, 2},
                                  {3, 4, 17, 9, 03}};
    printcars(cars, rowsize);
}
void printcars(int cars[][5], int rowsize)
{
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < 5 ; col++){
            cout<<cars[row][col]<<"\t";
        }
        cout<<endl;
    }
}
