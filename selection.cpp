#include <iostream>
#include <vector>
using namespace std;

void mySwap(int& a, int& b){
    int temp = a; //Se guarda el valor de a en una variable temporal
    a = b; //Se asigna el valor de b a a
    b = temp; //Se asigna el valor de la variable temporal a b
}

void selectionSort(vector<int>& vec){
    int n = vec.size(); //Se obtiene el tamaño del vector
    
    for(int i = 0; i < n - 1; i++){
        int minVal = i; //Se inicializa el valor minimo
        for(int j = i + 1; j < n; j++){
            if(vec[j] < vec[minVal]){
                minVal = j; //Se actualiza el valor minimo
            }
        }
        if(minVal != i){
            mySwap(vec[i], vec[minVal]); //Se intercambian los valores
        }
    }
}

int main(){
    vector<int> vec = {2, 18, 33, 3, 10};
    
    selectionSort(vec);
    
    for(int num: vec){
        cout << num << ",";
    }

    return 0;

}