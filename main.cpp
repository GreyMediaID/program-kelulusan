#include <iostream>
#include <string.h>
using namespace std;

int main(){
  int nilai;
  string namaSiswa;
  std::cout << "+====== Program Kelulusan C++ ======+" << std::endl;
  std::cout << "Nama Siswa> ";
  std::cin >> namaSiswa;
  std::cout << "Nilai> ";
  std::cin >> nilai;
  if(nilai<75){
    std::cout << "tidak lulus" << std::endl;
  } else {
    std::cout << "Lulus!" << std::endl;
  }
  return 0;
}
