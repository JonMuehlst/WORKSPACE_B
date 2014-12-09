#ifndef __HEAP_H__
#define __HEAP_H__

#include <assert.h>
#include "gtest/gtest.h"

template <typename T, int MAX_HEAP_ELEMS = 100>
class heap{
  
  private:
    /* Number of values currently in the heap. */
    int num_values;
    
    /* The values in the heap. */
    T values[MAX_HEAP_ELEMS];  
  
  public:
    heap(){
      num_values = 0;
    }
    
    heap(T * a, int a_size){
      num_values = 0;
      for(int i = 0; i < a_size; i++){
        add_value(a[i]);
      }
    }


    int size();
    int get_max_size();
    
    FRIEND_TEST(heap_test_class, heapified);
};

#endif /* __HEAP_H__ */
