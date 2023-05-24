#include <iostream>
#include <vector>

int main(){
    int n,m; //n itens, m compostos
    int v,p,q;
    float aux;
    std::vector<int>precos; //preço de venda de cada item
    std::vector<int>custos; //Custo por litro de cada composto
    std::vector<int>limites; //Limite diário de volume
    //Matriz n x m que contem quantidade de cada composto por item
    std::cin >> n >> m;
    std::vector<std::vector<float>>compostos(n,std::vector<float>(m));
    
    //Le da entrada padrão e armazena os preços de cada item no vector precos
    for (int i = 0; i < n; i++){
        std::cin >> v;
        precos.push_back(v);
    }
   //Le da entrada padrão e armazena os preços e limites de cada composto
    std::cout << std::endl;    
    for (int i = 0; i < m; i++){
        std::cin >> p >> q;
        custos.push_back(p);
        limites.push_back(q);
    }   
    //Armazena na matriz a quantidade de cada composto utilizada por item
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> compostos[i][j];
        }
    }
    
    std::cout << "max : "; //Problema de maximizar os lucros
    for (int i = 0; i < n; i++){ 
        aux=precos[i]; //Preço do item
        //Calcula custo do item de acordo com a quantidade de cada composto
        for (int j = 0; j < m; j++){
            aux -= custos[j]*compostos[i][j];
        }
        //Imprime a função objetivo no formato lp_solve
        if(i==n-1)
            std::cout << aux << " x" << i+1 << ";" << std::endl;
        else
            std::cout << aux << " x" << i+1 << " + ";
    }
    //Imprime as equações de limitação no formato lp_solve
    for (int j = 0; j < m; j++){
        //quantidade do composto de cada item somada deve ser menor que o limite
        for (int i = 0; i < n; i++){
            if(i==n-1)
                std::cout << compostos[i][j] << " x" << i+1 << " <=" << limites[j] << ";" << std::endl;
            else
                std::cout << compostos[i][j] << " x" << i+1 << " + ";
        }
    }

    return 0;
}