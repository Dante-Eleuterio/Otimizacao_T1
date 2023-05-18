#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,v,p,q;
    vector<int>precos;
    vector<int>custos;
    vector<int>limites;
    cin >> n >> m;
    vector<vector<float>>compostos(n,vector<float>(m));
    
    cout<<n<<" "<<m<<endl;
    for (int i = 0; i < n; i++){
        cin>>v;
        precos.push_back(v);
    }
    for (int i = 0; i < n; i++){
        cout<<precos[i]<<" ";
    }

    cout<<endl;    
    for (int i = 0; i < m; i++){
        cin>>p>>q;
        custos.push_back(p);
        limites.push_back(q);
    }   
    for (int i = 0; i < m; i++){
        cout<<custos[i]<<" "<<limites[i]<<endl;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>compostos[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<compostos[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}