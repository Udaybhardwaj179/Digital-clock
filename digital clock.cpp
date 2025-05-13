#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
    int h,m,s;
    int d=1000;
    int x=1;
    cout<<"set time :"<<endl;
    cin>>h>>m>>s;
    if (h>12 || m>60 ||s>60)
    {
        cout<<"wrong input";
    }
    while(1){
        s++;
        if  (s>59){
            m++;
            s=0;
        }
        //  c++;hello
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        cout<<"clock :"<<endl;
        cout<<h<<" "<<m<<" "<<s;
        Sleep(d);
        system("CLS");
    }
    return 0;
}