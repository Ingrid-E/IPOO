#ifndef INGRIDVECTOR_H_
#define INGRIDVECTOR_H_

//sort
//set
//append
//remove

class IngridVector{
    private:
    int vector[10000];
    int size;
    int pivot;
    public:
    IngridVector();
    ~IngridVector();
    void setSize(int newSize);
    void append(int newNum);
    void sort();
    void remove();
    int print();
};

#endif