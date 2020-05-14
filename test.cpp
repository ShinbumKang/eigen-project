#include <iostream>
#include <Eigen/Dense>
 
using namespace Eigen;
using namespace std;
 
int main()
{
  MatrixXd input(2,2);
  MatrixXd ans(2,2);
  float det;

  cout << "Enter matrix(2X2)" << endl;
  cin >> input(0,0) >> input(0,1) >> input(1,0) >> input(1,1);
  
  det = (input(0,0)*input(1,1) - input(0,1)*input(1,0));
  
  if(det == 0)
  {
    cout << "Reverse matrix does not exist." << endl;
    return 0;   
  }
  ans(0,0) = input(1,1);
  ans(1,0) = (-1)*input(1,0);
  ans(0,1) = (-1)*input(0,1);
  ans(1,1) = input(0,0);
 
  ans = ans / det; 
  
  cout << endl << "Entered matrix is" << endl << input << endl << endl;

  cout << "Inverse matrix is" << endl << ans << endl;

  return 0;
}