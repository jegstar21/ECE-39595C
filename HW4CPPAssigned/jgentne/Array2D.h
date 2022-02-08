#ifndef ARRAY2D_H_
#define ARRAY2D_H_
#include <iostream>
class Array2D {

public:
   Array2D(int numR, int numC); 
   Array2D(int numR, int numC, int val); 
   Array2D(const Array2D& other); 
   ~Array2D();

   virtual int& operator( )(int row, int col);
   virtual int operator( )(int row, int col) const;
   virtual int getNumCols() const;
   virtual int getNumRows() const;
   virtual Array2D& operator*(const Array2D& other);
   virtual Array2D& operator=(const Array2D& other);
   virtual bool operator==(const Array2D& other);

private:
   Array2D(int numR, int numC, char differentiator);
   void deleteAry(int** ary);
   bool sameSize(const Array2D& other) const;

   int numRows, numCols;
   int** ary;
};

std::ostream& operator<<(std::ostream& stream, const Array2D& other);

#endif /* ARRAY2D_H_ */
