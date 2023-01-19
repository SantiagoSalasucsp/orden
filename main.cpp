#include <iostream>

using namespace std;


void quicksort(int A[],int izq, int der )
{ 
int i, j, x , aux; 
i = izq; 
j = der; 
x = A[ (izq + der) /2 ]; 
    do{ 
        while( (A[i] < x) && (j <= der) )
        { 
            i++;
        } 
 
        while( (x < A[j]) && (j > izq) )
        { 
            j--;
        } 
 
        if( i <= j )
        { 
            aux = A[i]; A[i] = A[j]; A[j] = aux; 
            i++;  j--; 
        }
         
    }while( i <= j ); 
 
    if( izq < j ) 
        quicksort( A, izq, j ); 
    if( i < der ) 
        quicksort( A, i, der ); 
}





void sort (int arr[],int tam)
{  for(int o=0;o<tam;o++) 
  {for (int i=0;i<tam;i++)
    { 
        int a= i+1;
       if (a<tam) 
        {if (arr[a]<arr[i])
            {
                int b=arr[a];
                arr[a]=arr[i];
                arr[i]=b;
            }}
    }
}}

void imprimir(const int arr[],const int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main() {
int arr[]={3,4,1,2,24,56,2,23,34,9,45,878,98,12,459};
  sort(arr,14);
imprimir(arr,14);
cout<<"ahora con el otro metodo"<<endl;
  quicksort(arr,0,13);
  imprimir(arr,14);
  

  
}
