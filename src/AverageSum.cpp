#include "MyQueue.h"
int* AverageSum(int* a, int n, int w) {
    if ( ( a == 0 ) || ( n < 0 ) || ( w < 0 ) )
        throw 1;
    int sum = 0, old, next;
    MyQueue q;
    int* avg = new int[n-w+1];
    for (int i = 0; i < w ; i++) {
        sum+=a[i];
        q.push(a[i]);
    }
    avg[0] = sum/w;
    for (int i = w; i < n; i++) {
        old = q.GetFront();
        next = a[i];
        sum = sum-old+next;
        avg[i-w+1] = sum/w;
        q.pop();
        q.push(next);
    }
    return avg;
}
