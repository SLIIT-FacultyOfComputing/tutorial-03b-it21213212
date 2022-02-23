#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : "; // get input from user
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";  // get input from user
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";  // get input from user
    cin >> box1Length;
    
     cout << "Enter Box 2 Height : ";  // get input from user
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";  // get input from user
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";  // get input from user
    cin >> box2Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);  // calculate the volume
             
    cout << "Volume of Box is " << totalVolume << endl;  // print the value
    
    return 0;
}

// Implement the Volume() function here
int volume(int height, int width, int length)
{
  return height * width * length; // return the volume 
}
