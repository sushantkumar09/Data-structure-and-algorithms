##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=infix_to_postfix_00
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/PC/Desktop/DSA/Stack
ProjectPath            :=C:/Users/PC/Desktop/DSA/Stack/infix_to_postfix_00
IntermediateDirectory  :=../build-$(ConfigurationName)/infix_to_postfix_00
OutDir                 :=../build-$(ConfigurationName)/infix_to_postfix_00
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=PC
Date                   :=16/03/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/infix_to_postfix_00/Stack.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/infix_to_postfix_00/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/infix_to_postfix_00/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\infix_to_postfix_00" mkdir "..\build-$(ConfigurationName)\infix_to_postfix_00"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\infix_to_postfix_00" mkdir "..\build-$(ConfigurationName)\infix_to_postfix_00"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/infix_to_postfix_00/.d:
	@if not exist "..\build-$(ConfigurationName)\infix_to_postfix_00" mkdir "..\build-$(ConfigurationName)\infix_to_postfix_00"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/infix_to_postfix_00/Stack.cpp$(ObjectSuffix): Stack.cpp ../build-$(ConfigurationName)/infix_to_postfix_00/Stack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PC/Desktop/DSA/Stack/infix_to_postfix_00/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/infix_to_postfix_00/Stack.cpp$(DependSuffix): Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/infix_to_postfix_00/Stack.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/infix_to_postfix_00/Stack.cpp$(DependSuffix) -MM Stack.cpp

../build-$(ConfigurationName)/infix_to_postfix_00/Stack.cpp$(PreprocessSuffix): Stack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/infix_to_postfix_00/Stack.cpp$(PreprocessSuffix) Stack.cpp

../build-$(ConfigurationName)/infix_to_postfix_00/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/infix_to_postfix_00/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PC/Desktop/DSA/Stack/infix_to_postfix_00/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/infix_to_postfix_00/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/infix_to_postfix_00/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/infix_to_postfix_00/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/infix_to_postfix_00/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/infix_to_postfix_00/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/infix_to_postfix_00//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


