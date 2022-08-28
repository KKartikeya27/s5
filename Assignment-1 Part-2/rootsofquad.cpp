#include<iostream>
#include<cmath>
using namespace std;
void QuadSolver(float* p, float*q,float*r)
    {
        cout<<((-1*(*q))+(sqrt(((*q)*(*q)-4*((*p)*(*r))))))/2*(*p)<<endl;
        cout<<((-1*(*q))-(sqrt(((*q)*(*q)-4*((*p)*(*r))))))/2*(*p);
        // cout<<*p<<*q<<*r;
    }
int main()
    {
        float a,b,c;
        float* p,*q,*r;
        p=&a;
        q=&b;
        r=&c;
        cin>>a>>b>>c;
        QuadSolver(p,q,r);

    }

