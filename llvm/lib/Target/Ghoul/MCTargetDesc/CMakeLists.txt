add_llvm_component_library(LLVMGhoulDesc
  GhoulMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  GhoulInfo

  ADD_TO_COMPONENT
  Ghoul
 )