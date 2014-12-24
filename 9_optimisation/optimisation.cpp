#include <iostream>
#include <vector>
#include <cassert> 
#include <cstdlib>
#include "gtest/gtest.h"

#include "optimisation.hpp"
#include "tictoc.hpp"

using std::cout;
using std::endl;
using std::vector;
using std::swap;

//  Matrix Multiplication - Naive O(n^3)
// =================================================================================
void matrixMultiplication(int A[][N], int B[][N], int C[][N], size_t size){
    
    assert(size <= N);
    
    
    
}
// =================================================================================

// Quick Sort
// =================================================================================
void quickSort(int A[], int left, int right){
    
    
    
}
// =================================================================================

// Generic Quick Sort
// =================================================================================
template <typename T>
void quick_sort_template(T A[], int left, int right){
    
    
    
}
// =================================================================================

// Generate Fibonacci sequence by matrix multiplication
// =================================================================================
/*

(F(n+1) F(n)  ) (1 1) = ( F(n+1)+F(n)   F(n+1))
(F(n)   F(n-1)) (1 0) = ( F(n)+F(n-1)   F(n)  )

*/
unsigned long long int fibonacci_by_matrix(size_t num){
    
    
    
}

// Helper function. 
inline void two_by_two_matrix_multiplication(unsigned long long int F[2][2], unsigned long long int A[2][2]){
        
        
}
// =================================================================================




// Using Google test to measure computation time

/*================================================================================

                                    Tests

================================================================================*/

// TEST(Opt, matrix_multiplication){
    
//     srand((unsigned int) time(0));
    
//     int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
//     int C[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
//     int exptected_C[3][3] = {{30,24,18},{84,69,54},{138,114,90}};
    
//     // for (int i = 0; i < N; i++) {
//     //     for (int j = 0; j < N; j++) {
//     //             A[i][j] = (int)rand()*1000 + 1;
//     //             B[i][j] = (int)rand()*1000 + 1;
//     //             C[i][j] = (int)rand()*1000 + 1;
//     //     }
//     // }
    
//     matrixMultiplication(A,B,C,3);
    
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//                 EXPECT_EQ(exptected_C[i][j],C[i][j]);
//         }
//     }
// }

TEST(Opt, matrix_multiplication_time){
    
    srand((unsigned int) time(0));
    
    int A[N][N];
    int B[N][N];
    int C[N][N];
    
    size_t size = N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
                A[i][j] = (int)rand()*1000 + 1;
                B[i][j] = (int)rand()*1000 + 1;
                C[i][j] = (int)rand()*1000 + 1;
        }
    }
    
    matrixMultiplication(A,B,C,size);
    
}

TEST(Opt, quick_sort){
    
    int A[M];
    srand(time(0));
    for (int i = 0; i < M; i++) {
        A[i] = (int)rand()*1000000 + 1;
    }
    
    quickSort(A, 0, M);
   
    // cout << "Done" << endl;
    for(size_t i = 0; i < M - 1; i++){
        EXPECT_LE(A[i], A[i+1]);   
    }
    
}

TEST(Opt, quick_sort_template_int){
    
    int A[M];
    srand(time(0));
    for (int i = 0; i < M; i++) {
        A[i] = (int)rand()*1000000 + 1;
    }
    
    quick_sort_template(A, 0, M);
    
    for(size_t i = 0; i < M - 1; i++){
        EXPECT_LE(A[i], A[i+1]);   
    }
    
}

TEST(Opt, quick_sort_template_double){
    
    double D[M];
    srand(time(0));
    for (int i = 0; i < M; i++) {
        D[i] = rand()*1000000 + 1;
    }
    
    quick_sort_template(D, 0, M);
    
    for(size_t i = 0; i < M - 1; i++){
        EXPECT_LE(D[i], D[i+1]);   
    }
    
}

TEST(Opt, fib){
    
    // fibonacci_by_matrix(100);
    
    EXPECT_EQ(3736710778780434371, fibonacci_by_matrix(100));
    
}