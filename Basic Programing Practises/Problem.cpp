#include <bits/stdc++.h>
using namespace std;

void solve(int x[], int y[], int size)
{
    float sum = 0.0;
    for (int i = size-1; i >=0; i--)
    {
        
        for (int j = i-1; j >=0; j--)
        {
            float v1 = abs(x[i] - x[j]);
            float v2 = abs(y[i] - y[j]);

            float v3 = sqrt((v1*v1) + (v2*v2));
            sum = sum + v3;
        }
        break;
    }
    cout<<sum<<endl;
}

int main()
{
    int posk; // position of starting house
    cin >> posk;
    int num; // number of houses on x-axis
    cin >> num;
    int x_cordinate[num]; // x-coordinate of these houses
    for (int i = 0; i < num; i++)
    {
        cin >> x_cordinate[i];
    }
    int dairy_x; // x-coordinate of dairy
    cin >> dairy_x;
    int dairy_y; // y-coordinate of dairy
    cin >> dairy_y;

    int x[num + 1];
    int y[num + 1];
    for (int i = 0; i < num; i++){ 
        x[i] = x_cordinate[i];
    }
    for (int i = 0; i < num; i++) 
    {
        y[i] = 0;
    }
    x[num] = dairy_x; 
    y[num] = dairy_y;  

    solve(x, y, num + 1);
    return 0;
}
