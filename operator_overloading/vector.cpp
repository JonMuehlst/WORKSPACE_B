#include <iostream>
#include <string>
#include <ostream>
#include "gtest/gtest.h" // google test
#include "vector.h"
#include <assert.h>

vector::vector(){
    
    this->x = 0;
    this->y = 0;
    this->z = 0;
    
}

vector::vector(double x, double y, double z){
    
    
    
}

const vector vector::operator/ (const double scalar){
    
       
    
}

const double operator* (const vector& v1, const vector& v2){
    
    
    
}
vector& vector::operator= (const vector& v){
    
    
}

vector& vector::operator+= (const vector& v){
    
    

}

vector& vector::operator-= (const vector& v){
    
    
    
}

vector& vector::operator*= (const double scalar){
    
    
    
}
    
bool vector::operator== (const vector& v){
    
    
    
}

bool vector::operator!= (const vector& v){
    
    
    
}

vector vector::operator++ (int i = 1){
    
   
    
}

const vector vector::operator- () const{
      
    
}

double vector::operator[] (const int i){
    
    assert( (1 <= i) && (i <= 3) );
    
    
}

const vector operator+ (const vector& v1, const vector& v2){
    
   
    
}

const vector operator+ (const vector& v1, const double scalar){
    
    
    
}

const vector operator+ (const double scalar, const vector& v2){
    
     
    
}

const vector operator- (const vector& v1, const vector& v2){
    
        
    
}

const vector operator- (const vector& v1, const double scalar){
    
        
    
}

const vector operator- (const double scalar, const vector& v2){
    
    
    
}

const vector operator* (const double scalar, const vector& v){
    
  
    
}

const vector operator* (const vector& v, const double scalar){
    
    
    
}


std::ostream& operator<< (std::ostream& os, const vector& v){
    
               
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

TEST_F(vector_test_case, lscalar_plus){
    
    
    
}

TEST_F(vector_test_case, rscalar_plus){
    
    
    
}

TEST_F(vector_test_case, minus){
    
    
    
}

TEST_F(vector_test_case, rscalar_minus){
    
    
    
}

TEST_F(vector_test_case, lscalar_minus){
    
    
    
}

TEST_F(vector_test_case, unary_minus){
    
    
    
}

TEST_F(vector_test_case, dot_product){
    

    
}

TEST_F(vector_test_case, lscalar_multiplication){
    

    
}

TEST_F(vector_test_case, rscalar_multiplication){
    
    
    
}

TEST_F(vector_test_case, scalar_division){
    
    
    
}

TEST_F(vector_test_case, assignment){
    
    
    
}

TEST_F(vector_test_case, plus_assignment){
    
    
}

TEST_F(vector_test_case, minus_assignment){
    

    
}

TEST_F(vector_test_case, multiplication_assignment){
    


    
}

TEST_F(vector_test_case, subscripting){
    

}

TEST_F(vector_test_case, equality){

    

}

TEST_F(vector_test_case, inequality){

    

}

TEST_F(vector_test_case, increment){
    

    
}

TEST_F(vector_test_case, output){

    std::stringstream ss1;
    ss1 << v1;
    std::string str1 = ss1.str();
    
    std::stringstream ss2;
    ss2 << "[" << v1.x << "]" << "\n" 
        << "[" << v1.y << "]" << "\n"  
        << "[" << v1.z << "]" << "\n" ;
    std::string str2 = ss2.str();
    
    const char * cstr1 = str1.c_str();
    const char * cstr2 = str2.c_str();
    
    EXPECT_STREQ(cstr2, cstr1);
    
}
