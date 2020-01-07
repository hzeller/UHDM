/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   parameters.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef PARAMETERS_H
#define PARAMETERS_H

namespace UHDM {

  class parameters : public BaseClass {
  public:
    // Implicit constructor used to initialize all members,
    // comment: parameters();
    ~parameters()  {}
    
    virtual unsigned int getUhdmType() { return uhdmparameters; }   
  private:
    
  };

  class parametersFactory {
  friend Serializer;
  public:
  static parameters* make() {
    parameters* obj = new parameters();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<parameters*> objects_;
  };
 	      
  class VectorOfparametersFactory {
  friend Serializer;
  public:
  static std::vector<parameters*>* make() {
    std::vector<parameters*>* obj = new std::vector<parameters*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<parameters*>*> objects_;
  };

};

#endif
