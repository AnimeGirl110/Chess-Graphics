#include "Model.h"
#include <iostream>
#include "App.h"
#include "Config.h"

namespace leah_chess {

  Model::Model(Mvc& mvc)
    : mvc{mvc}, board{*this}, aiPlayer{}, humanPlayer{} {
  std::cout << "Model::Model()" << std::endl;

  isReady = true;  //<- always last line
}

Model::~Model() {
  std::cout << "Model::~Model()" << std::endl;
}

void Model::Run() {}
}  // namespace leah_chess