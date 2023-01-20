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

  };
