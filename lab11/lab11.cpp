#include <iostream>
#include"Shape.h"
#include"Parallelepiped.h"
#include"Pyramid.h"
#include"Tetrahedron.h"
#include"Ball.h"
using namespace std;

int main()
{
    Shape* arr[4];
    arr[0] = new Parallelepiped(2,3,4);
    arr[1] = new Tetrahedron(4);
    arr[2] = new Pyramid(2,3,4);
    arr[3] = new Ball(5);
    for (int i = 0; i < 4; i++)
    {
        cout<<"V = " << arr[i]->volume() << endl;
        cout << endl;
    }

}

