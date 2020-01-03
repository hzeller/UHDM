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
 * File:   interface.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef INTERFACE_H
#define INTERFACE_H

namespace UHDM {

  class interface : public BaseClass {
  public:
    interface(){}
    ~interface() final {}
    
    BaseClass* get_vpiParent() const { return vpiParent_; }

    void set_vpiParent(BaseClass* data) { vpiParent_ = data; }

    unsigned int get_uhdmParentType() const { return uhdmParentType_; }

    void set_uhdmParentType(unsigned int data) { uhdmParentType_ = data; }

    std::string get_vpiFile() const { return SymbolFactory::getSymbol(vpiFile_); }

    void set_vpiFile(std::string data) { vpiFile_ = SymbolFactory::make(data); }

    unsigned int get_vpiLineNo() const { return vpiLineNo_; }

    void set_vpiLineNo(unsigned int data) { vpiLineNo_ = data; }

    unsigned int get_vpiType() { return vpiInterface; }

    const VectorOfprocess* get_process() const { return process_; }

    void set_process(VectorOfprocess* data) { process_ = data; }

    const VectorOfinterface_tf_decl* get_interface_tf_decls() const { return interface_tf_decls_; }

    void set_interface_tf_decls(VectorOfinterface_tf_decl* data) { interface_tf_decls_ = data; }

    const VectorOfmodport* get_modports() const { return modports_; }

    void set_modports(VectorOfmodport* data) { modports_ = data; }

    clocking_block* get_global_clocking() const { return global_clocking_; }

    void set_global_clocking(clocking_block* data) { global_clocking_ = data; }

    clocking_block* get_default_clocking() const { return default_clocking_; }

    void set_default_clocking(clocking_block* data) { default_clocking_ = data; }

    const VectorOfmod_path* get_mod_paths() const { return mod_paths_; }

    void set_mod_paths(VectorOfmod_path* data) { mod_paths_ = data; }

    const VectorOfcont_assign* get_cont_assigns() const { return cont_assigns_; }

    void set_cont_assigns(VectorOfcont_assign* data) { cont_assigns_ = data; }

    const VectorOfinterface* get_interfaces() const { return interfaces_; }

    void set_interfaces(VectorOfinterface* data) { interfaces_ = data; }

    const VectorOfinterface_array* get_interface_arrays() const { return interface_arrays_; }

    void set_interface_arrays(VectorOfinterface_array* data) { interface_arrays_ = data; }

  private:
    
    BaseClass* vpiParent_;

    unsigned int uhdmParentType_;

    unsigned int vpiFile_;

    unsigned int vpiLineNo_;

    VectorOfprocess* process_;

    VectorOfinterface_tf_decl* interface_tf_decls_;

    VectorOfmodport* modports_;

    clocking_block* global_clocking_;

    clocking_block* default_clocking_;

    VectorOfmod_path* mod_paths_;

    VectorOfcont_assign* cont_assigns_;

    VectorOfinterface* interfaces_;

    VectorOfinterface_array* interface_arrays_;

  };

  class interfaceFactory {
  friend Serializer;
  public:
  static interface* make() {
    interface* obj = new interface();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<interface*> objects_;
  };
 	      
  class VectorOfinterfaceFactory {
  friend Serializer;
  public:
  static std::vector<interface*>* make() {
    std::vector<interface*>* obj = new std::vector<interface*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<interface*>*> objects_;
  };

};

#endif
