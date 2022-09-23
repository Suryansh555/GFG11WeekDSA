#include<bits/stdc++.h>
using namespace std ;


int main(){

    int n , m ; 
    cin >> n >> m ;
    vector<vector<int>> Games;
    for(int i = 0 ; i < n ; i++ ){
        vector<int> add ; 
        for(int j = 0 ; j < m ; j++){
            int x ;
            cin >> x;
            add.push_back(x);
        }
        Games.push_back(add);
    }
    int q;
    cin >> q ;
    vector<vector<int>> query;
    for(int i = 0 ; i < q ; i++){
        vector<int> add ;
        for(int j = 0 ; j < m ; j++){
            int x ;
            cin >> x ;
            add.push_back(x);
        }
        query.push_back(add);
    }

    vector<int> indexes; 
   
    for(int i = 0 ; i < q ; i++){
        int count = 0 ;
        for(int k = 0 ; k < n ; k++){
            for(int j = 0 ; j < m ; j++){
                if(Games[k][j] == query[i][j]){
                    while(Games[k][j] == query[i][j]){
                        j++;
                    }
                    if(query[i][j] == -1){
                        count++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        indexes.push_back(count);
    }
    cout << indexes[0] << endl;

    return 0 ;
}