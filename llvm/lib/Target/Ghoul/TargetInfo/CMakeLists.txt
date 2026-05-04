add_llvm_component_library(LLVMGhoulInfo
  GhoulTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  Ghoul
  )