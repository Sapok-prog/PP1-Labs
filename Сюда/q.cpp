#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n+1][m+1];

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "coordinates of min elements: " << endl;
    int sum = 0;
     for(int i = 1; i<=m; i++)
    {   
        int x, y;
        int min = 9999;
        for(int j = 1; j<=n; j++)
        {
           if(a[j][i] < min)
           {
            min = a[j][i];
            x = j;
            y = i;
           }

        }
        sum+=min;
        cout << x << ';' << y << endl;
    }
    cout << endl << "Their sum:" << endl << sum;




}