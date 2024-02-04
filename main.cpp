//
//  main.cpp
//  перевернуть массив  p q
//
//  Created by Andrey Scherbakov on 04.02.2024.
//

#include <iostream>
#include <stdlib.h>

const int n = 10;
using namespace std;
int main(){
    srand(time_t(NULL));
    int p = 2;
    int q = 5;
    int temp;
    int a[n];
    
    cout<<"Изначальный массив"<<endl;
    
    for(int i=0; i<n; i++){
        a[i] = rand() % 200-100;
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    while(p<q){
        temp = a[p];
        a[p]=a[q];
        a[q]=temp;
        p++;
        q--;
    }
    cout<<"Выходной массив"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

