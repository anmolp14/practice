#include<iostream>
struct pt {

int x;
int y;


};
using namespace std;

int main()
 {

struct pt p1,p2,p3;

cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y ;

cout << 3<< endl	;

cout << p2.x + p3.x - p1.x << ' '<<p2.y + p3.y - p1.y << endl;
cout << p1.x + p3.x - p2.x <<' '<< p1.y + p3.y - p2.y << endl;
cout << p2.x + p1.x - p3.x <<' '<<  p2.y + p1.y - p3.y << endl;









return 0;

 } 

