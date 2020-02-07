// -*- mode: c++; c-basic-offset: 2; indent-tabs-mode: nil; -*-

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <iostream>

#include "headers/uhdm.h"
#include "vpi_visitor.h"

using namespace UHDM;

int main (int argc, char** argv) {
  std::string fileName = "surelog.uhdm";
  if (argc > 1) {
    fileName = argv[1];
  }
  struct stat buffer;
  if (stat(fileName.c_str(), &buffer) != 0) {
      std::cout << "File " << fileName << " does not exist!" << std::endl;
      return 1;
  }
  Serializer serializer;
  std::cout << "Restore design from: " << fileName << std::endl;
  std::vector<vpiHandle> restoredDesigns = serializer.Restore(fileName);

  std::string restored = visit_designs(restoredDesigns);
  std::cout << restored;
  return 0;
}
