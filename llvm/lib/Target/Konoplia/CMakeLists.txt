add_llvm_component_group(Konoplia)

add_llvm_target(KonopliaCodeGen
    KonopliaTargetMachine.cpp

    LINK_COMPONENTS
    CodeGen
    Core
    Support
    Target
    KonopliaInfo

    ADD_TO_COMPONENT
    Konoplia
    )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)