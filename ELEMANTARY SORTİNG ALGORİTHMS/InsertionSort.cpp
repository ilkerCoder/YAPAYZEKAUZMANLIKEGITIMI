/*
----------------------------AÇIKLAMA------------------------------------------------------------------------------------------------                                                                                                                                  |
| !!INSERTİON SORT ALGORİTMASINDA İKİ KONSEPT VARDIR.!!                                                                            |
|1==> SIRALANANLAR , 2==> SIRALANMAMIŞLAR .                                                                                        |
|****ASAMALAR****:                                                                                                                 |
|1)FOR LOOPUNDAKİ İNDİSLER İKİ ADETTİR(İ VE J) . İ MEVCUT İNDİSİ TUTARKEN J İSE MEVCUT İNDİS İTİBARİYLE                            |
|GERİYE DOGRU SAYARAK KARSILASTIRMA YAPAR .                                                                                        |
|2)J KARSILASTIRMA YAPARKEN ASLINDA İ İNDİSİNİN SAĞINDAKİ YANİ SIRALANMAMIŞ OLARAK ADLANDIRDIĞIMIZ KISIMLARI                       |
|İŞLEME ALIR (2.LOOPTA) YANİ SIRALAR.                                                                                              |
|3)KISACASI J İ ' DEN İTİBAREN SOLDAN BASLAYARAK KARŞILAŞTIRMA YAPAR VE UYGUN SEKİLDE YER DEGİSTİRME YAPTIKTAN                     |
|SONRA SOL TARAFTA SIRALANMIŞ BİR DİZİ OLUŞMAYA BAŞLAR .                                                                           |
|4)OZETLE İ BİR ARTARAK İNDİS ELEMANLARINI TUTARKEN J İSE GEZİNEREK SOLDA SIRALAMA YAPAR .                                         |
|5)İ SONA GELDİĞİNDE TÜM DİZİ SIRALANMIŞ VE SONLANMIŞ OLUR.                                                                        |
|    **BESTCASE - WORSTCASE DURUMLARI**                                                                                            |
||BESTCASE| ==> EĞER DİZİ MÜMKÜN MERTEBE SOLDAN BAŞTAN İTİBAREN ARTARAK GİTMİSSE YANİ MÜMKÜN MERTEBE SIRALANMIŞSA                  |
| EXCHANGE VS İŞLEMLERİ O KADAR AZ YAPILIR VE BU EN İYİ DURUMDUR. MÜMKÜN MERTEBE KARIŞIKLIK SOLDA OLURSA O KADAR AZ                |
| İŞLEM YAPILMIŞ OLUR.                                                                                                             |
| ORNEK: {2,8,10,3} OLDUGUNU DUSUNELİM . SADECE SAĞDA 1 TANE KARISIKLIK VAR. SON ASAMADA GEREKLİ KADAR EXCHANGE                    |
| YAPILACAK (2 ADET) MESELA DİZİ SU SEKİLDE OLSAYDI : {2,1,8,10,12}   SON 1 KERE EXCHANE YAPACAKTI CUNKU SAĞDA KARISIKLIK VAR      |
|__________________________________________________________________________________________________________________________________|
*/
    #include <iostream>
    using namespace std ;     
    int * InsertionSort(int dizi[] , int size ){ 
            int a ; 
        for (size_t i = 0; i < size; i++)
        {

            for (size_t j = i; j > 0; j--)
            {
                    if (dizi[j] < dizi[j-1]){ 
                        int temp = dizi[j-1]; 
                        dizi[j-1] = dizi[j];
                        dizi[j] = temp ; 
                         
                    }
                    
            }
            
        }
        
        return dizi;    
    }

    int main() {
        int dizi[7];
        int size = 7 ; 
        cout << "----->\tELEMENTARY SORT ALGORITMASI ORNEGINE HOSGELDIN.\n"; 
        cout << "----->\tSIRALAMAM ICIN BANA 5 TANE SAYI VERMEN GEREKIYOR. ISTERSEN BASLAYALIM\n"; 
        int girilenSayi;
        
        for (size_t i = 0; i < size; i++)
        {
            cout<< i+1 <<".SAYI==>   " ;
            cin >> girilenSayi ; 
            dizi[i] = girilenSayi ; 
        }
        cout << "----->\tTESEKKURLER. SIMDI GIRDIGIN SAYILARI SIRALIYORUM...\n";
        try
        {
                
                int *sortedDizi;
                sortedDizi=InsertionSort(dizi , size);
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

