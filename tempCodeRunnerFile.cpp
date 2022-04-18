#include <iostream>
using namespace std;

float findVolume(int r, int h)
{
    return ((int)3.14 * r * r * h);
}
float findVolume(float r, float h)
{
    return (3.14 * (r*r) * (h/3));
}
float findVolume(float w, float h, float l)
{
    return (w * h * l);
}

int main()
{
    int rad, ht;
    float radius, height, length, width;
    cout << "\nEnter radius and height of a cylinder Respectively : ";
    cin >> rad >> ht;
    cout << "Cylinder volume : " << findVolume(rad, ht)<<" units\n\n";
    cout<<"________________________________________________________________________________________________________________________";

    cout << "\n\nEnter radius and height of cone Respectively : ";
    cin >> radius >> height;
    cout << "Cone volume : " << findVolume(radius, height)<<" units\n\n";
    cout<<"________________________________________________________________________________________________________________________";



    cout << "\n\nEnter length, width and height of cuboid Respectively : ";
    cin >> length >> width >> height;
    cout << "Cuboid volume : " << findVolume(length, width, height)<<" units\n\n";

    return 0;
}

