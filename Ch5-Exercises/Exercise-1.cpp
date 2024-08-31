#include <iostream>
using namespace std;
float circarea(float);
int main()
{
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float result = circarea(radius);

    cout << "The area of the circle: " << result << endl;

    return 0;
}

float circarea(float r)
{
    const float PI = 3.14;
    float ans = PI * r * r;
    return ans;
}
