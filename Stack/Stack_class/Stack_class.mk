##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Stack_class
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/PC/Desktop/DSA/Stack
ProjectPath            :=C:/Users/PC/Desktop/DSA/Stack/Stack_class
IntermediateDirectory  :=../build-$(ConfigurationName)/Stack_class
OutDir                 :=../build-$(ConfigurationName)/Stack_class
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
Objects0=../build-$(ConfigurationName)/Stack_class/Stack.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Stack_class/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Stack_class/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Stack_class" mkdir "..\build-$(ConfigurationName)\Stack_class"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Stack_class" mkdir "..\build-$(ConfigurationName)\Stack_class"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Stack_class/.d:
	@if not exist "..\build-$(ConfigurationName)\Stack_class" mkdir "..\build-$(ConfigurationName)\Stack_class"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Stack_class/Stack.cpp$(ObjectSuffix): Stack.cpp ../build-$(ConfigurationName)/Stack_class/Stack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PC/Desktop/DSA/Stack/Stack_class/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Stack_class/Stack.cpp$(DependSuffix): Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Stack_class/Stack.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Stack_class/Stack.cpp$(DependSuffix) -MM Stack.cpp

../build-$(ConfigurationName)/Stack_class/Stack.cpp$(PreprocessSuffix): Stack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Stack_class/Stack.cpp$(PreprocessSuffix) Stack.cpp

../build-$(ConfigurationName)/Stack_class/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Stack_class/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PC/Desktop/DSA/Stack/Stack_class/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Stack_class/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Stack_class/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Stack_class/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Stack_class/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Stack_class/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Stack_class//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


