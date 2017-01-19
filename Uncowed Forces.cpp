#include<iostream>
#include<stdio.h>
using namespace std;
 float main()
{
    float m1,m2,m3,m4,m5,m;
    float w1,w2,w3,w4,w5;
    float hs,hu;
    float a=500.0,b=1000.0,c=1500.0,d=2000.0,e=2500.0;
    float A,B,C,D,E;
    cin>>m1>>m2>>m3>>m4>>m5;
    cin>>w1>>w2>>w3>>w4>>w5;
    cin>>hs>>hu;
    //if(m1!=0&&m2!=0&&m3!=0&&m4!=0&m5!=0)
    float a1=0.3*a;
    float b1=0.3*b;
    float c1=0.3*c;
    float d1=0.3*d;
    float e1=0.3*e;



        A=max(a1,(1-(m1/250.0)*a)-50.0*w1);
        B=max(b1,(1-(m2/250.0)*b)-50.0*w2);

        C=max(c1,(1-(m3/250.0)*c)-50.0*w3);
        D=max(d1,(1-(m4/250.0)*d)-50.0*w4);
        E=max(e1,(1-(m5/250.0)*e)-50.0*w5);
    float  haks=((100.0*hs)-(50.0*hu));
    cout<<haks;
    cout<<A+B+C+D+E+haks;

    return 0.0;

}
