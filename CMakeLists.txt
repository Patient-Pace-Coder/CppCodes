cmake_minimum_required(VERSION 3.16)

project(PracticeCPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PracticeCPP 01_main.cpp
    practice.cpp
    03_BitManipulation.cpp
    ScopeResolutionOperator1.cpp
    ScopeResolutionOperator2.cpp
    VariableShadowing.cpp
    Linkage.cpp
    Namespaces.cpp
    circle.h
    growth.h
    RandomNumber.cpp
    ArithmeticConversions.cpp
    Typecasting.cpp
    FixedType.cpp
    FunctionOverloading.cpp
    DefaultArguments.cpp
    FunctionTemplates.cpp
    FunctionTemplatesInMultipleFiles.cpp
    ForwardDeclaration.cpp
    AddOne.cpp
    ADD_TWO.h
    ConstantExprFunc.cpp
    LvalueRvalue.cpp
    PassByValuePassByReference.cpp
    Pointers.cpp
    ConstantPointers.cpp
    AddThree.cpp
    UnscopedEnums.cpp
    DoublePointers.cpp
    OperatorOverloading.cpp
    ScopedEnums.cpp
    StructIntro.cpp
    PointerToStructsObjects.cpp
    StructWithProgramDefinedTypes.cpp
    ClassTemplates.cpp
    ClassTemplates1.cpp
    ClassTemplateWithMultipleTemplateTypes.cpp
    IntroToClasses.cpp
    MemberFunctions.cpp
    constAndNonconstMemberFunctions.cpp
    constAndNonconstMemberFunctionExmpl.cpp
    AccessSpecifiers.cpp
    AccessSpecifier1.cpp

    Teacher.h
    Student.h
    SettersAndGetters.cpp
    GettersSetters.cpp
    example1.cpp
    Log.h
    example2.cpp
    example3.cpp
    OneDefinitionRule.cpp
    InlineFunctions.h
    InlineFunctions.cpp
    InlineFunctions1.cpp
    ConstExpressionFunctions.cpp
    ConstExpressionFunctions.h
    ConstExpressionFunctions1.cpp
    constAndNonconstMemberFunctionsExmpl2.cpp
    Constructors.cpp
    DelegatingConstructor.cpp
    ConvertingConstructors.cpp
    constExpr_aggregates_classses.cpp
    date.h date.cpp
    date1.cpp
    NestedTypeMemberTypes.cpp
    NestedClasses.cpp
    NestedClassesForwardDeclarations.cpp
    Destructors.cpp
    ClassTemplateInAndMemberFunctions.cpp
    StaticMemberVariables.cpp
    StaticMemberFunctions.cpp
    FriendNonMemberFunctions.cpp
    RefQualifiers.cpp
    Vector.cpp
    VectorCapacityLength.cpp
    Array.cpp


)

include(GNUInstallDirs)
install(TARGETS PracticeCPP
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
