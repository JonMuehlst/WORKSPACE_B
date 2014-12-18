#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP

#include <cassert>

template <typename T>
class BinarySearchTree{
    
    private:
    
        // Inner Node struct
        //=======================
        struct node{
            // Member variables
            //=======================
            T key;
            node * left;
            node * right;
            //=======================
            
            // Ctor
            //=======================
            node(T _val){
                key = _val;
                left = NULL;
                right = NULL;
            }
            
            node(const node * n){ 
                
                if(n == NULL){    
                    this = NULL;
                } else {
                    key = n->key;
                    delete left;
                    delete right;
                    left = new node(n->left);
                    right = new node(n->right);
                }
                
            }
            //=======================
            
            // Assignment operator
            //=======================
            const node& operator = (const node& n) {
                
                key = n.key;
                delete left;
                delete right;
                
                left = new node(n.left);
                right = new node(n.right);
                
                return *this;
            }
            //=======================
            
            // Dtor
            //=======================
            ~node(){
                delete left;
                delete right;
            }
            //=======================
            
            // Equality operator
            //=======================
            template<typename innerT>
            friend bool operator == (const node & lhs, const node & rhs);
            //=======================
            
            // Inequality operator
            //=======================
            template<typename innerT>
            friend bool operator != (const node & lhs, const node & rhs);
            //=======================
            
            // get minimum of the (sub)tree
            // represented by the current node
            //=======================
            T minimum(){
                if(left == NULL)
                    return key;
                return left->minimum();
            //=======================
        }
            
        };
        //=======================
        
        // Member variables
        //=======================
        node * root;
        //=======================
        
    public:
        
        // Ctor
        //=======================
        BinarySearchTree(){
            root = NULL;
        }
        
        BinarySearchTree(const BinarySearchTree * bst) { 
            *this = *bst;
        }
    
        BinarySearchTree(T a[], int size){
            root = NULL;
            for(int i = 0; i < size; i++)
                insert(a[i]);
        }
        //=======================
        
        // Dtor
        //=======================
        ~BinarySearchTree(){
            delete root; 
        }
        //=======================
        
        // Assignment operator
        //=======================
        const BinarySearchTree<T> & operator = (const BinarySearchTree<T>& bst) {
                
            if(*this != bst){

                if(bst.root == NULL)
                    root = NULL;
                else{
                    delete root;
                    root = new node(bst.root);
                }
            }
                
                return *this;
            }
        //=======================
        
        // Equality operator
        //=======================
        template <typename P>
        friend bool operator == (const BinarySearchTree<P>& lhs, const BinarySearchTree<P>& rhs);
        //=======================
        
        // Inequality operator
        //=======================
        template <typename P>
        friend bool operator != (const BinarySearchTree<P>& lhs, const BinarySearchTree<P>& rhs);
        //=======================
        
        // Insert
        //=======================
        bool insert(T _val);
        //=======================
        
        // Delete
        //=======================
        bool deleteNode(T val);
        //=======================
        
        // Delete helpers
        //=======================
        void onlyOneChild(node * to_remove, node * parent){
           
        }
        
        void twoChildren(node * to_remove, node * parent){
            
            
        }
        //=======================
        
        // Contains
        //=======================
        bool contains(T val){

        }
        //=======================
        
        
        // Traverse: Pre order
        //=======================
        void preOrderWalk(){
   
        }
        
        void preOrderWalk(node * n){
           
        }
        //=======================
        
        // Traverse: In order
        //=======================
        void inOrderWalk(){
          
        }
        
        void inOrderWalk(node * n){
            
        }
        //=======================
        
        // Traverse: Post order
        //=======================
        void postOrderWalk(){
            
        }
        
        void postOrderWalk(node * n){
            
            
        }
        //=======================
    
        // Friend TESTs
        //=======================
        FRIEND_TEST(bst_test_class, print_bst);
        //=======================
        
    
};


template<typename T>
bool operator == (const typename BinarySearchTree<T>::node & lhs, const typename BinarySearchTree<T>::node & rhs){
    if( (lhs.key == rhs.key) && (lhs.left == rhs.left) && (lhs.right == rhs.right) )
        return true;
    return false;
}

template<typename T>
bool operator != (const typename BinarySearchTree<T>::node & lhs, const typename BinarySearchTree<T>::node & rhs){
    return !(lhs == rhs);
}


template <typename P>
bool operator == (const BinarySearchTree<P>& lhs, const BinarySearchTree<P>& rhs) {

    if(lhs.root == rhs.root)
        return true;
    return false;

}

template <typename P>
bool operator != (const BinarySearchTree<P>& lhs, const BinarySearchTree<P>& rhs) {

    return !(lhs == rhs);

}

template <typename T>
bool BinarySearchTree<T>::insert(T _val){
   
}

template <typename T>
bool BinarySearchTree<T>::deleteNode(T val){

}



#endif