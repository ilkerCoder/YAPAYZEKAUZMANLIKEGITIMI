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
        int dizi[7];
        int size = 7 ; 
        cout << "-----\tELEMENTARY SORT ALGORITMASI ORNEGINE HOSGELDIN.\t*****\n"; 
        cout << "-----\tSIRALAMAM ICIN BANA 5 TANE SAYI VERMEN GEREKIYOR. ISTERSEN BASLAYALIM\t*****\n"; 
        int girilenSayi;
        
        for (size_t i = 0; i < size; i++)
        {
            cout<< i+1 <<".SAYI==>   " ;
            cin >> girilenSayi ; 
            dizi[i] = girilenSayi ; 
        }
        cout << "-----\tTESEKKURLER. SIMDI GIRDIGIN SAYILARI SIRALIYORUM...\t*****\n";
        try
        {
                
                int *sortedDizi;
                sortedDizi=selectionSort(dizi , size);
                cout << "ISTE SIRALANMIS HALI==>" ; 
                for (size_t i = 0; i < size; i++)
                {
                cout << sortedDizi[i] << " " ; 
                    
                }
        
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        

    }

