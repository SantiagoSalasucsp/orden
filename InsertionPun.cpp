#include <iostream>
using namespace std;

int insertionSort(int arr[], int tam, int pos, int elem) {
int* pun;
pun=arr;
int array[tam];
  for (int i=0; i<tam+1; i++) 
    {
      if(i==pos)
        {array[i]=elem;}
      else 
        array[i]=*(pun+i);

        return 0;

  }}

  void imprimir(const int arr[],const int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<arr[i]<<endl;
    }
}




int main ()
{
    int array[]={3,4,6,1};
    insertionSort(array,4,1,8);
    imprimir(array,4);

    


}
