    #include <iostream>
    using namespace std ; 

    
    int * selectionSort(int dizi[] , int size ){ 
        for (size_t i = 0; i < size; i++)
        {
            for (size_t j = i+1; j < size; j++)
            {
                    if (dizi[j] < dizi[i]){ 
                        int temp = dizi[i]; 
                        dizi[i] = dizi[j];
                        dizi[j] = temp ;  
                    }
                    
            }
            
        }
        
        return dizi;    
    }

    int main() {
        int dizi [] =  {1,10,5,20,3,90 , 2}; 
        int size =  sizeof(dizi) / sizeof(dizi[0]) ; 
        int *sortedDizi;
        sortedDizi=selectionSort(dizi , size);
        for (size_t i = 0; i < size; i++)
        {
        cout << sortedDizi[i] << " " ; 
            
        }
        

    }

