#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Arma.o \
	${OBJECTDIR}/Armadura.o \
	${OBJECTDIR}/Artefacto.o \
	${OBJECTDIR}/Ataque.o \
	${OBJECTDIR}/Avatar.o \
	${OBJECTDIR}/Celda.o \
	${OBJECTDIR}/DataBase.o \
	${OBJECTDIR}/Dibujador.o \
	${OBJECTDIR}/Entidad.o \
	${OBJECTDIR}/Equipamiento.o \
	${OBJECTDIR}/GestorLaberinto.o \
	${OBJECTDIR}/Juego.o \
	${OBJECTDIR}/Laberinto.o \
	${OBJECTDIR}/Monstruo.o \
	${OBJECTDIR}/Pocion.o \
	${OBJECTDIR}/PocionCuracion.o \
	${OBJECTDIR}/PocionMana.o \
	${OBJECTDIR}/Saco.o \
	${OBJECTDIR}/auxiliar.o \
	${OBJECTDIR}/graficos.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-Llib -lallegro-4.4.2-md

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/juego.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/juego.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/juego ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Arma.o: Arma.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arma.o Arma.cpp

${OBJECTDIR}/Armadura.o: Armadura.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Armadura.o Armadura.cpp

${OBJECTDIR}/Artefacto.o: Artefacto.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Artefacto.o Artefacto.cpp

${OBJECTDIR}/Ataque.o: Ataque.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ataque.o Ataque.cpp

${OBJECTDIR}/Avatar.o: Avatar.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Avatar.o Avatar.cpp

${OBJECTDIR}/Celda.o: Celda.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Celda.o Celda.cpp

${OBJECTDIR}/DataBase.o: DataBase.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DataBase.o DataBase.cpp

${OBJECTDIR}/Dibujador.o: Dibujador.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Dibujador.o Dibujador.cpp

${OBJECTDIR}/Entidad.o: Entidad.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Entidad.o Entidad.cpp

${OBJECTDIR}/Equipamiento.o: Equipamiento.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Equipamiento.o Equipamiento.cpp

${OBJECTDIR}/GestorLaberinto.o: GestorLaberinto.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GestorLaberinto.o GestorLaberinto.cpp

${OBJECTDIR}/Juego.o: Juego.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Juego.o Juego.cpp

${OBJECTDIR}/Laberinto.o: Laberinto.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Laberinto.o Laberinto.cpp

${OBJECTDIR}/Monstruo.o: Monstruo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Monstruo.o Monstruo.cpp

${OBJECTDIR}/Pocion.o: Pocion.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pocion.o Pocion.cpp

${OBJECTDIR}/PocionCuracion.o: PocionCuracion.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PocionCuracion.o PocionCuracion.cpp

${OBJECTDIR}/PocionMana.o: PocionMana.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PocionMana.o PocionMana.cpp

${OBJECTDIR}/Saco.o: Saco.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Saco.o Saco.cpp

${OBJECTDIR}/auxiliar.o: auxiliar.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/auxiliar.o auxiliar.cpp

${OBJECTDIR}/graficos.o: graficos.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/graficos.o graficos.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/juego.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
