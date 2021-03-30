##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Queue_using_2_stacks
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/PC/Desktop/DSA/Queue/Queue
ProjectPath            :=C:/Users/PC/Desktop/DSA/Queue/Queue/Queue_using_2_stacks
IntermediateDirectory  :=../build-$(ConfigurationName)/Queue_using_2_stacks
OutDir                 :=../build-$(ConfigurationName)/Queue_using_2_stacks
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=PC
Date                   :=19/03/2021
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
Objects0=../build-$(ConfigurationName)/Queue_using_2_stacks/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Queue_using_2_stacks/Stack.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Queue_using_2_stacks/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Queue_using_2_stacks" mkdir "..\build-$(ConfigurationName)\Queue_using_2_stacks"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Queue_using_2_stacks" mkdir "..\build-$(ConfigurationName)\Queue_using_2_stacks"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Queue_using_2_stacks/.d:
	@if not exist "..\build-$(ConfigurationName)\Queue_using_2_stacks" mkdir "..\build-$(ConfigurationName)\Queue_using_2_stacks"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Queue_using_2_stacks/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Queue_using_2_stacks/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PC/Desktop/DSA/Queue/Queue/Queue_using_2_stacks/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Queue_using_2_stacks/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Queue_using_2_stacks/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Queue_using_2_stacks/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Queue_using_2_stacks/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Queue_using_2_stacks/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Queue_using_2_stacks/Stack.cpp$(ObjectSuffix): Stack.cpp ../build-$(ConfigurationName)/Queue_using_2_stacks/Stack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PC/Desktop/DSA/Queue/Queue/Queue_using_2_stacks/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Queue_using_2_stacks/Stack.cpp$(DependSuffix): Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Queue_using_2_stacks/Stack.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Queue_using_2_stacks/Stack.cpp$(DependSuffix) -MM Stack.cpp

../build-$(ConfigurationName)/Queue_using_2_stacks/Stack.cpp$(PreprocessSuffix): Stack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Queue_using_2_stacks/Stack.cpp$(PreprocessSuffix) Stack.cpp


-include ../build-$(ConfigurationName)/Queue_using_2_stacks//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


