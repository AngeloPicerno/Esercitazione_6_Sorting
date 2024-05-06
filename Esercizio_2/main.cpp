#include<chrono>
#include<iostream>
#include<unistd.h>
#include<numeric>
#include<vector>
#include<algorithm>
#include<SortingAlgorithm.hpp>

using namespace std;
using namespace SortLibrary;



int main(int argc, char**argv)
{
    size_t size=std::atoi(argv[1]);

    int misurations=1000;
    double TotTime_I_MS=0.0;
    double TotTime_I_BS=0.0;

    double TotTime_D_MS=0.0;
    double TotTime_D_BS=0.0;

    double TotTime_F_MS=0.0;
    double TotTime_F_BS=0.0;



    for( int i=0;i<misurations;i++){



    vector<int> intVector=RandomVector<int>(size);
    vector<double> doubleVector=RandomVector<double>(size);
    vector<float> floatVector=RandomVector<float>(size);


    double Time_I_MS= ComparisonTime(MergeSort,intVector);
    double Time_I_BS=ComparisonTime(BubbleSort,intVector);

    TotTime_I_MS +=Time_I_MS;
    TotTime_I_BS += Time_I_BS;




    double Time_D_MS= ComparisonTime(MergeSort,doubleVector);
    double Time_D_BS=ComparisonTime(BubbleSort,doubleVector);

    TotTime_D_MS +=Time_D_MS;
    TotTime_D_BS += Time_D_BS;





     double Time_F_MS= ComparisonTime(MergeSort,floatVector);
     double Time_F_BS=ComparisonTime(BubbleSort,floatVector);


     TotTime_F_MS +=Time_F_MS;
     TotTime_F_BS += Time_F_BS;






    }


   cout<<"Per il vettore di interi MergeSort impiega:"<<TotTime_I_MS/misurations<<"  "<<"e BubbleSort impiega:"<<TotTime_I_BS/misurations<<endl;


   cout<<"Per il vettore di double MergeSort impiega:"<<TotTime_D_MS/misurations<<"  "<<"e BubbleSort impiega:"<<TotTime_D_BS/misurations<<endl;

   cout<<"Per il vettore di float MergeSort impiega:"<<TotTime_F_MS/misurations<<"  "<<"e BubbleSort impiega:"<<TotTime_F_BS/misurations<<endl;













    return 0;
}
