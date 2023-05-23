#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,v,p,q;
    float aux;
    vector<int>precos;
    vector<int>custos;
    vector<int>limites;
    cin >> n >> m;
    vector<vector<float>>compostos(n,vector<float>(m));
    
    for (int i = 0; i < n; i++){
        cin>>v;
        precos.push_back(v);
    }
   
    cout<<endl;    
    for (int i = 0; i < m; i++){
        cin>>p>>q;
        custos.push_back(p);
        limites.push_back(q);
    }   
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>compostos[i][j];
        }
    }
    
    cout<<"max : ";
    for (int i = 0; i < n; i++){
        aux=precos[i];
        for (int j = 0; j < m; j++){
            aux-= custos[j]*compostos[i][j];
        }
        if(i==n-1)
            cout<<aux<<" x"<<i+1<<";"<<endl;
        else
            cout<<aux<<" x"<<i+1<<" + ";
    }
    
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            if(i==n-1)
                cout<<compostos[i][j]<<" x"<<i+1<<" <="<<limites[j]<<";"<<endl;
            else
                cout<<compostos[i][j]<<" x"<<i+1<<" + ";
        }
    }

    return 0;
}