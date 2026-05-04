add_llvm_component_group(Ghoul)

add_llvm_target(GhoulCodeGen
  GhoulTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  GhoulInfo

  ADD_TO_COMPONENT
  Ghoul
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)