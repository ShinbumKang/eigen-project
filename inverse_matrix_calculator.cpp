#include <iostream>
#include <Eigen/Dense>
#include <Eigen/LU> 

 
using namespace Eigen;
using namespace std;
 
int main()
{
  MatrixXd input(2,2);
  MatrixXd ans(2,2);
  float det;
  int size_want,i,j;

  cout << "what size matrix do you want?" << endl;

  cin >> size_want; 

  if(size_want <= 0)
  {
    cout << "Size must be at least 1" << endl;
    return 0;
  }

  input.resize(size_want,size_want);
  ans.resize(size_want,size_want);

  //cout << "Enter matrix" << endl;

  for(i=0;i<size_want;i++)
  {
    if(i+1==1)
      cout << "Enter " << i+1 << "st column" << endl;
    else if(i+1==2)
      cout << "Enter " << i+1 << "nd column" << endl;
    else if(i+1==3)
      cout << "Enter " << i+1 << "rd column" << endl;
    else
      cout << "Enter " << i+1 << "th column" << endl;
    for(j=0;j<size_want;j++)
      cin >> input(j,i);  
  }                              
  
  det = input.determinant();

  ans = input.inverse(); 
  
  cout << endl << "Entered matrix is" << endl << input << endl << endl;

  cout << "Inverse matrix is" << endl << input.inverse() << endl << endl;

  cout << "Determinant is " << input.determinant() << endl;

  return 0;
}