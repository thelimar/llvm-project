add_llvm_component_library(LLVMKonopliaInfo
    KonopliaTargetInfo.cpp

    LINK_COMPONENTS
    MC
    Support

    ADD_TO_COMPONENT
    Konoplia
    )