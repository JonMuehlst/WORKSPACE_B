/*
 * C++ implementation of Merge Sort 
 * Based on the code from the following link:
 * http://www.sanfoundry.com/cpp-program-implement-merge-sort/
 */

#ifndef MERGESORT_H
#define MERGESORT_H 
 
#include <iostream>
#include "gtest/gtest.h"

 

void merge(int *,int, int , int );


void mergesort(int *, int , int );

// Implementation

using std::cout;
using std::endl;
using std::cin;


void mergesort(int *a, int low, int high) // [low, high] inclusive
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    
}


void merge(int *a, int low, int high, int mid)
{
    int i, j, k; 
    int c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}

#endif
