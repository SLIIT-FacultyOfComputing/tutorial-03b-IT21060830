#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
struct box
{
int heigth;
int length;
int width;
}boxBox1, boxBox2;
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 height : ";
    cin >> boxBox1.height;
    cout << "Enter Box 1 width : ";
    cin >> boxBox1.width;
    cout << "Enter Box 1 length : ";
    cin >> boxBox1.length;
    
    cout << "Enter Box 2 height : ";
    cin >> boxBox2.height;
    cout << "Enter Box 2 width : ";
    cin >> boxBox2.width;
    cout << "Enter Box 2 length : ";
    cin >> boxBox2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(boxBox1.height ,boxBox1.width ,boxBox1.length )
             + volume(boxBox2.height ,boxBox2.width ,boxBox2.length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(int height, int width, int length);
{
  return heigth * width * length;
}

// Implement the functions here
