#include<iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], n, m, p, q;
    cout<<"ingrese las dimensiones de la matriz a"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    cout<<"ingrse las dimensiones de la matriz b"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"p="; cin>>p;
    cout<<"q="; cin>>q;
    if(n==p && m==q)
    {
        cout<<"matriZ A:"<<endl;
        cout<<"---------"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<"A["<<i<<"]["<<j<<"]:"; cin>>a[i][j];
            }
        }
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"matriz B:"<<endl;
        cout<<"---------"<<endl;
        for(int i=0; i<p; i++)
        {
            for(int j=0; j<q; j++)
            {
                cout<<"B["<<i<<"]["<<j<<"]:"; cin>>b[i][j];
            }
        }
        cout<<endl;
        for(int i=0; i<p; i++)
        {
            for(int j=0; j<q; j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"resultado"<<endl;
        cout<<"---------"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<q; j++)
            {
                cout<<a[i][j]+b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"no se puede sumar estas matrices "<<endl;
        cout<<"pruebe con otras matrices"<<endl;
    }
    return 0;
}