#include<iostream>
using namespace std;

void update(int **p2)
{
   // p=p+1;  no change

   // *p2=*p2+1;  hoga

    **p2=**p2+1; //hoga value update

}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<"Printing p : "<<p<<endl;
    cout<<"printing p2 : "<<*p2<<endl;

    cout<<endl;
    //same value
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<endl;
    //address printing
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    
    cout<<endl;
    cout<<"before"<<endl<<i<<" "<<p<<" "<<p2<<endl;
    update(p2);
    cout<<"after"<<endl<<i<<" "<<p<<" "<<p2<<endl;
    

//    //MCQ questions in notes
//     int first=8;
//     int second=18;
//     int *ptr=&second;
//     *ptr=9;
//     cout<<first<<" "<<second<<endl;

    return 0;
}