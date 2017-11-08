/**
 * @Author: Michel Andy, Levy Adam
 * @Date:   2017-11-05T20:44:59-05:00
 * @Email:  Andymic12@gmail.com
 * @Project: Dynamic-Nonblocking-Hash-Table
 * @Filename: hnode.h
 * @Last modified by:   Michel Andy
 * @Last modified time: 2017-11-05T21:02:22-05:00
 */

#include<iostream>
#include "fset.h"

template<typename T>
class HNode {
    public:
        static HNode head;  //don't think we actually need this
        FSet<T> *buckets;
        int size;
        HNode *pred;
        HNode(int size);
        bool insert(T &key);
        bool remove(T &key);
        bool contains(T &key);
        void resize(bool grow);
        bool apply(OPType type, T &key);
        void initBucket(HNode t, int hashIndex);
};

int main(void){
    return 0;
}