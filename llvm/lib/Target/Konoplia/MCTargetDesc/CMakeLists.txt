add_llvm_component_library(LLVMKonopliaDesc
    KonopliaMCTargetDesc.cpp

    LINK_COMPONENTS
    MC
    Support
    KonopliaInfo

    ADD_TO_COMPONENT
    Konoplia
    )