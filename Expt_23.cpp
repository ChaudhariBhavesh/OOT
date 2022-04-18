#include <iostream>
using namespace std;
class Point {
private:
 int x;
 int y;
 public:
 Point(int x1 = 0, int y1 = 0) {
    x = x1;
    y = y1;
   }
   Point addPoint(Point p) {
      Point temp;
      temp.x = x + p.x;
      temp.y = y + p.y;
      return temp;
   }
   void display() {
      cout<<"x = "<< x <<"\n";
      cout<<"y = "<< y <<"\n";
   }
};
int main() {

   Point p1(5,3);
   Point p2(12,6);
   Point p3;
   cout<<"Point 1\n";
   p1.display();
   cout<<"Point 2\n";
   p2.display();
   p3 = p1.addPoint(p2);
   cout<<"The sum of the two points is:\n";
   p3.display();
   return 0;
}
