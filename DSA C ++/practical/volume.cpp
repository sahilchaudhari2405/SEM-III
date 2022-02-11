#include <iostream>
using namespace std;
void Volume(int);
void Volume(int,int,int);
void Volume(int ,int);
void Volume(int Side)
{
    int ans;
    ans = Side * Side * Side;
    cout << "\nVolume of cube is=" << ans << endl;
}
void Volume(int length, int height, int width)
{
    int ans = length * height * width;
    cout << "\nVolume of rectangle is=" << ans << endl;
}
void Volume(int radius, int Height)
{
    float pi = 3.14;
    float ans = pi * radius * radius * Height;
    cout << "\nVolume of cylinder is=" << ans << endl;
}
int main()
{
    cout << "Enter the any one side of cube=>";
    int C_side;
    cin >> C_side;
    Volume(C_side);
    int Length, Height, Width;
    cout << "\nEnter the length of rectangle=>";
    cin >> Length;
    cout << "Enter the height of rectangle=>";
    cin >> Height;
    cout << "Enter the width of rectangle=>";
    cin >> Width;
    Volume(Length, Height, Width);
    int Radius, Heights;
    cout << "\nEnter the radius of cylinder=>";
    cin >> Radius;
    cout << "Enter the height of cylinder=>";
    cin >> Heights;
    Volume(Radius, Heights);
    return 0;
}