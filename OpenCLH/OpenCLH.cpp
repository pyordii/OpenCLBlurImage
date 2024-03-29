// OpenCLH.cpp : Этот файл содержит функцию "main". Здесь начинается и
// заканчивается выполнение программы.
//
#define CL_USE_DEPRECATED_OPENCL_1_2_APIS

#include "OpenCLHelper.h"
#include "OpenCLImage.h"

int main(int argc, char* argv[]) {
  std::string myImageInName = "forest1.jpg";
  std::string myImageOutName = "forest.jpg";

  for (int i = 1; i < 3; i++) {
    if (argv[i] == NULL) {
      exit(1);
    }
  }

  myImageInName = argv[1];
  myImageOutName = argv[2];
  /*
  OpenCLImage openCLI_CPU(myImageInName, myImageOutName);
  std::cout << "100% CPU: ";
  openCLI_CPU.BlurImageCPU();
  std::cout << std::endl;
  
  openCLI_CPU.WriteImage(openCLI_CPU.GetImageOut(), myImageOutName);
    
  
  OpenCLImage openCLI_GPU(myImageInName, myImageOutName);
  std::cout << "100% GPU: ";
  openCLI_GPU.BlurImageGPU();
  std::cout << std::endl;
  
  openCLI_GPU.WriteImage(openCLI_GPU.GetImageOut(), myImageOutName);
    */
  
  OpenCLImage openCLI_GPU_CPU(myImageInName, myImageOutName);
  std::cout << "70% GPU 30% CPU: ";
  openCLI_GPU_CPU.BlurImageGPU70_CPU30();
  std::cout << std::endl;
  openCLI_GPU_CPU.WriteImage(openCLI_GPU_CPU.GetImageOut(), myImageOutName);

  /*
   OpenCLImage openCLI_CPU_GPU(myImageInName, myImageOutName);
  std::cout << "70% CPU 30% GPU: ";
   openCLI_CPU_GPU.BlurImageGPU30_CPU70();
  std::cout << std::endl;
   openCLI_CPU_GPU.WriteImage(openCLI_CPU_GPU.GetImageOut(), myImageOutName);
  */


  
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и
//   другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый
//   элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий
//   элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" >
//   "Открыть" > "Проект" и выберите SLN-файл.
