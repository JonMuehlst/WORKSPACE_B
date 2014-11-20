#include "gtest/gtest.h" // google test
#include "vector.h"
#include <assert.h>

vector::vector(){
    
    
    
}

vector::vector(double x, double y, double z){
    
    
}

vector& vector::operator+ (const vector& v){
    
    
    
}

vector& vector::operator- (const vector& v){
    
    
    
}

double vector::operator* (const vector& v){
    
    
    
}

vector& vector::operator* (const double scalar){
    
    
    
}

vector& vector::operator/ (const double scalar){
    
    
    
}

vector& vector::operator= (const vector& v){
    
    
    
}









// ==========================================================================================
// 
//                                      Tests
// 
// ==========================================================================================

class vector_test_case : public ::testing::Test {
    
    public:
        vector v1,v2,v3;
        double scalar;
    
        virtual void SetUp(){
            v1 = vector(5.5,6.5,7.5);
            v2 = vector(1.5,2.5,3.5);
            v3 = vector(9.5,5.5,4.5);
            
            scalar = 5.5;
        }
    
};


TEST_F(vector_test_case, plus){
    
    v1 = v1 + v2;
    
    EXPECT_DOUBLE_EQ(5.5 + 1.5, v1.x);
    EXPECT_DOUBLE_EQ(6.5 + 2.5, v1.y);
    EXPECT_DOUBLE_EQ(7.5 + 3.5, v1.z);
    
}

TEST_F(vector_test_case, minus){
    
    
    
}

TEST_F(vector_test_case, dot_product){
    
    
    
}

TEST_F(vector_test_case, scalar_multiplication){
    
    
    
}

TEST_F(vector_test_case, scalar_division){
    
    
    
}

TEST_F(vector_test_case, assignment){
    
    
    
}

TEST_F(vector_test_case, subscripting){
    

}

TEST_F(vector_test_case, equality){
    
    
    
}

TEST_F(vector_test_case, increment){
    
    
    
}

