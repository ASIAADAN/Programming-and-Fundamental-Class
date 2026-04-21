#include<iostream>
using namespace std;
string displayworld();
string setgravitystatus;
string timetask;

 char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
    };
bool gravity = false;
bool isblackhole=true;
main()
{
    displayworld();
    setgravitystatus(true);
    timetask(3);
    displayWorld();
}