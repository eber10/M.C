#include<iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], c[100][100], n, m, p, q;
    cout<<"ingrese las dimensiones de la matriz A"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    cout<<"ingrese las dimensiones de la matriz B"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"p="; cin>>p;
    cout<<"q="; cin>>q;
    if(m==p)
    {
        cout<<"ingrese la matriz A:"<<endl;
        cout<<"--------------------"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<"a["<<i<<"]["<<j<<"]:"; cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"ingrese la matriz B:"<<endl;
        cout<<"--------------------"<<endl;
        for(int i=0; i<p; i++)
        {
            for(int j=0; j<q; j++)
            {
                cout<<"b["<<i<<"]["<<j<<"]:"; cin>>b[i][j];
            }
        }
        for(int i=0; i<p; i++)
        {
            for(int j=0; j<q; j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"resultados"<<endl;
        cout<<"-----------"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                c[i][j]=0;
                for(int h=0; h<p; h++)
                {
                    c[i][j]=c[i][j]+a[i][h]*b[h][j];
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<q; j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"no se puede multiplicar la matriz"<<endl;
        cout<<"pruebe con otra matriz"<<endl;
    }
    return 0;
}