#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int CSNN(int a, int b)
{
    int count = 0;
    if(a<b)
    return 0;

    for (int i = a; i < b; i++)
    {
        int N=i;
        int flag=0;
        while (N > 0)
        {   
            
            int r = 0;
            r = N % 10;
            if (r != 1 && r != 4 && r != 9)
            {
                flag = 1;
                
            }
            N= N / 10;
        }
        if (flag == 0)
            count++;
    }
    return count;
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout<<CSNN(m, n);
    
    return -1;
}