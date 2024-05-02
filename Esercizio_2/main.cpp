#include "SortingAlgorithm.hpp"
#include<iostream>
#include<chrono>
#include<unistd.h>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;
using namespace SortLibrary;

int main(int argc, char* argv[])
{

    int n = 0, aa=0;
    istringstream s (argv[1]);
    s>>n;
    // v1 for mergesort, v2 for bubblesort
    vector<double> v1(n), v2(n), v1_2(n), v1_3(n), v1_4(n), v2_2(n), v2_3(n), v2_4(n), a(n),b(n),c(n),d(n),e(n),f(n);

    generate(v1.begin(), v1.end(), [&aa] () {return aa++;});

    for(unsigned int i=0; i<n; i++)
    {
        v1_2[i]=v1[i];
        v1_3[i]=v1[i];
        v1_4[i]=v1[i];
    }

    int m2=n/2, m3=n/3, m4=n/4;

    for (unsigned int i=0; i<n-m2;i++)
    {
        v1_2[i] = rand() % 100;
    }

    for (unsigned int i=0; i<n-m3;i++)
    {
        v1_3[i] = rand() % 100;
    }
    for (unsigned int i=0; i<n-m4;i++)
    {
        v1_4[i] = rand() % 100;
    }

    for(unsigned int i=0; i<n; i++)
    {
        v2[i]=v1[i];
        v2_2[i]=v1_2[i];
        v2_3[i]=v1_3[i];
        v2_4[i]=v1_4[i];
        a[i]=v1_2[i];
        b[i]=v1_3[i];
        c[i]=v1_4[i];
        d[i]=v2_2[i];
        e[i]=v2_3[i];
        f[i]=v2_4[i];
    }

//MERGESORT
    cout<<"Numero di elementi dei vettori: "<<n<<endl;
    cout<<"\nCalcolo tempo con MergeSort in microsecondi:\nVettore 1:\n";

    chrono::steady_clock::time_point t_MS_2_b =chrono::steady_clock::now();
    MergeSort(v1_2);
    std::chrono::steady_clock::time_point t_MS_2_e = std::chrono::steady_clock::now();
    double d_MS_2_1 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_2_e-t_MS_2_b).count();
    cout<<"prova 1 : "<<d_MS_2_1<<endl;


    for(unsigned int i=0; i<n; i++)
    {
        v1_2[i]=a[i];
    }

    chrono::steady_clock::time_point t_MS_2_b_2 =chrono::steady_clock::now();
    MergeSort(v1_2);
    std::chrono::steady_clock::time_point t_MS_2_e_2 = std::chrono::steady_clock::now();
    double d_MS_2_2 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_2_e_2-t_MS_2_b_2).count();
    cout<<"prova 2 : "<<d_MS_2_2<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v1_2[i]=a[i];
    }

    chrono::steady_clock::time_point t_MS_2_b_3 =chrono::steady_clock::now();
    MergeSort(v1_2);
    std::chrono::steady_clock::time_point t_MS_2_e_3 = std::chrono::steady_clock::now();
    double d_MS_2_3 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_2_e_3-t_MS_2_b_3).count();
    cout<<"prova 3 : "<<d_MS_2_3<<endl;

    double media_MS_2 = (d_MS_2_1+d_MS_2_2+d_MS_2_3)/3;
    cout <<"media :"<<media_MS_2<<"\n\nVettore 2 :"<<endl;

    chrono::steady_clock::time_point t_MS_3_b =chrono::steady_clock::now();
    MergeSort(v1_3);
    std::chrono::steady_clock::time_point t_MS_3_e = std::chrono::steady_clock::now();
    double d_MS_3 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_3_e-t_MS_3_b).count();
    cout<<"prova 1 : "<<d_MS_3<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v1_3[i]=b[i];
    }

    chrono::steady_clock::time_point t_MS_3_b_2 =chrono::steady_clock::now();
    MergeSort(v1_3);
    std::chrono::steady_clock::time_point t_MS_3_e_2 = std::chrono::steady_clock::now();
    double d_MS_3_2 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_3_e_2-t_MS_3_b_2).count();
    cout<<"prova 2 : "<<d_MS_3_2<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v1_3[i]=b[i];
    }

    chrono::steady_clock::time_point t_MS_3_b_3 =chrono::steady_clock::now();
    MergeSort(v1_3);
    std::chrono::steady_clock::time_point t_MS_3_e_3 = std::chrono::steady_clock::now();
    double d_MS_3_3 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_3_e_3-t_MS_3_b_3).count();
    cout<<"prova 3 : "<<d_MS_3_3<<endl;

    double media_MS_3 = (d_MS_3+d_MS_3_2+d_MS_3_3)/3;
    cout <<"media :"<<media_MS_3<<"\n\nVettore 3 :"<<endl;


    chrono::steady_clock::time_point t_MS_4_b =chrono::steady_clock::now();
    MergeSort(v1_4);
    std::chrono::steady_clock::time_point t_MS_4_e = std::chrono::steady_clock::now();
    double d_MS_4 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_4_e-t_MS_4_b).count();
    cout<<"prova 1 : "<<d_MS_4<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v1_4[i]=c[i];
    }


    chrono::steady_clock::time_point t_MS_4_b_2 =chrono::steady_clock::now();
    MergeSort(v1_4);
    std::chrono::steady_clock::time_point t_MS_4_e_2 = std::chrono::steady_clock::now();
    double d_MS_4_2 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_4_e_2-t_MS_4_b_2).count();
    cout<<"prova 2 : "<<d_MS_4_2<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v1_4[i]=c[i];
    }

    chrono::steady_clock::time_point t_MS_4_b_3 =chrono::steady_clock::now();
    MergeSort(v1_4);
    std::chrono::steady_clock::time_point t_MS_4_e_3 = std::chrono::steady_clock::now();
    double d_MS_4_3 = std::chrono::duration_cast<std::chrono::microseconds>(t_MS_4_e_3-t_MS_4_b_3).count();
    cout<<"prova 3 : "<<d_MS_4_3<<endl;


    double media_MS_4 = (d_MS_4+d_MS_4_2+d_MS_4_3)/3;
    cout <<"media :"<<media_MS_4<<endl;

//BUBBLESORT


    cout<<"\n\nCalcolo tempo con BubbleSort in microsecondi:\nVettore 1:"<<endl;

    chrono::steady_clock::time_point t_BS_2_b =chrono::steady_clock::now();
    BubbleSort(v2_2);
    std::chrono::steady_clock::time_point t_BS_2_e = std::chrono::steady_clock::now();
    double d_BS_2 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_2_e-t_BS_2_b).count();
    cout<<"prova 1 : "<<d_BS_2<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v2_2[i]=d[i];
    }

    chrono::steady_clock::time_point t_BS_2_b_2 =chrono::steady_clock::now();
    BubbleSort(v2_2);
    std::chrono::steady_clock::time_point t_BS_2_e_2 = std::chrono::steady_clock::now();
    double d_BS_2_2 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_2_e_2-t_BS_2_b_2).count();
    cout<<"prova 2 : "<<d_BS_2_2<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v2_2[i]=d[i];
    }

    chrono::steady_clock::time_point t_BS_2_b_3 =chrono::steady_clock::now();
    BubbleSort(v2_2);
    std::chrono::steady_clock::time_point t_BS_2_e_3 = std::chrono::steady_clock::now();
    double d_BS_2_3 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_2_e_3-t_BS_2_b_3).count();
    cout<<"prova 3 : "<<d_BS_2_3<<endl;

    double media_BS_2 = (d_BS_2+d_BS_2_2*d_BS_2_3)/3;
    cout<<"media : "<<media_BS_2<<"\n\nVettore 2 :"<<endl;



    chrono::steady_clock::time_point t_BS_3_b =chrono::steady_clock::now();
    BubbleSort(v2_3);
    std::chrono::steady_clock::time_point t_BS_3_e = std::chrono::steady_clock::now();
    double d_BS_3 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_3_e-t_BS_3_b).count();
    cout<<"prova 1 : "<<d_BS_3<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v2_3[i]=e[i];
    }

    chrono::steady_clock::time_point t_BS_3_b_2 =chrono::steady_clock::now();
    BubbleSort(v2_3);
    std::chrono::steady_clock::time_point t_BS_3_e_2 = std::chrono::steady_clock::now();
    double d_BS_3_2 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_3_e_2-t_BS_3_b_2).count();
    cout<<"prova 2 : "<<d_BS_3_2<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v2_3[i]=e[i];
    }

    chrono::steady_clock::time_point t_BS_3_b_3 =chrono::steady_clock::now();
    BubbleSort(v2_3);
    std::chrono::steady_clock::time_point t_BS_3_e_3 = std::chrono::steady_clock::now();
    double d_BS_3_3 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_3_e_3-t_BS_3_b_3).count();
    cout<<"prova 3 : "<<d_BS_3_3<<endl;

    double media_BS_3 = (d_BS_3+d_BS_3_2*d_BS_3_3)/3;
    cout<<"media : "<<media_BS_3<<"\n\nVettore 3 :"<<endl;



    chrono::steady_clock::time_point t_BS_4_b =chrono::steady_clock::now();
    BubbleSort(v2_4);
    std::chrono::steady_clock::time_point t_BS_4_e = std::chrono::steady_clock::now();
    double d_BS_4 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_4_e-t_BS_4_b).count();
    cout<<"prova 1 : "<<d_BS_4<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v2_4[i]=f[i];
    }

    chrono::steady_clock::time_point t_BS_4_b_2 =chrono::steady_clock::now();
    BubbleSort(v2_4);
    std::chrono::steady_clock::time_point t_BS_4_e_2 = std::chrono::steady_clock::now();
    double d_BS_4_2 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_4_e_2-t_BS_4_b_2).count();
    cout<<"prova 2 : "<<d_BS_4_2<<endl;

    for(unsigned int i=0; i<n; i++)
    {
        v2_4[i]=f[i];
    }


    chrono::steady_clock::time_point t_BS_4_b_3 =chrono::steady_clock::now();
    BubbleSort(v2_4);
    std::chrono::steady_clock::time_point t_BS_4_e_3 = std::chrono::steady_clock::now();
    double d_BS_4_3 = std::chrono::duration_cast<std::chrono::microseconds>(t_BS_4_e_3-t_BS_4_b_3).count();
    cout<<"prova 3 : "<<d_BS_4_3<<endl;

    double media_BS_4 = (d_BS_4+d_BS_4_2*d_BS_4_3)/3;
    cout<<"media : "<<media_BS_4<<endl;



    return 0;
}

