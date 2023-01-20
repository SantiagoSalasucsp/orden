#include <iostream>
using namespace std;

void sort (int arr[],int tam)
{  for(int o=0;o<tam;o++) 
  {for (int i=0;i<tam;i++)
    { 
        int a= i+1;
        
        if (arr[a]<arr[i])
            {
                int b=arr[a];
                arr[a]=arr[i];
                arr[i]=b;}
            
    }
}
  return;
  };

void sortpun(int arr[],int tam)
{
  int* prim;
  int* ulti;

  for (int i=0;i<tam/2;i++)
    {
      prim=&arr[i];
      ulti=&arr[i+1];
      if (*ulti<*prim)
        {int y=*ulti;
        *ulti=*prim;
        *prim=y;
    }

void imprimir(const int arr[],const int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<arr[i]<<endl;
    }
}

        
int main (){

int array[]={10,9,8,7,6,5,4,3,2,1};

sort(array,10);
imprimir(array,10);
  
}
