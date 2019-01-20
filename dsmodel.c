/* DSblock model generated by Dymola from Modelica model FirstOrder
 Dymola Version 2018 FD01 (64-bit), 2017-10-11 translated this at Sun Jan 20 16:36:25 2019

   */

#include <matrixop.h>
/* Declaration of C-structs */
/* Prototypes for functions used in model */
/* Codes used in model */
/* DSblock C-code: */

#define NX_    1
#define NX2_   0
#define NU_    0
#define NY_    0
#define NW_    0
#define NP_    2
#define NPS_   0
#define ND_   0
#define NXP_   0
#define NInitial_   0
#define MAXAuxStr_   0
#define MAXAuxStrLen_   500
#define NHash1_ 1262996867
#define NHash2_ -1932777009
#define NHash3_ 0
#define NI_    0
#define NRelF_ 0
#define NRel_  0
#define NTim_  0
#define NSamp_ 0
#define NCons_ 0
#define NA_    0
#define SizePre_ 0
#define SizeEq_ 0
#define SizeDelay_ 0
#define QNLmax_ 0
#define MAXAux 0
#define NrDymolaTimers_ 0
#define NWhen_ 0
#define NCheckIf_ 0
#define NGlobalHelp_ 0
#define NGlobalHelpI_ 0
#ifndef NExternalObject_
#define NExternalObject_ 0
#endif
#include <moutil.c>
DYMOLA_STATIC unsigned int FMIClockValueReferences_[1]={0};
DYMOLA_STATIC unsigned int FMIClockFirstValueReferences_[1]={0};
PreNonAliasDef(0)
PreNonAliasDef(1)
PreNonAliasDef(2)
PreNonAliasDef(3)
PreNonAliasDef(4)
PreNonAliasDef(5)
#if !defined(DYM2CCUR)
 DYMOLA_STATIC const char*modelName="FirstOrder";
#endif
DYMOLA_STATIC const char*usedLibraries[]={0};
DYMOLA_STATIC const char*dllLibraryPath[]={0};
DYMOLA_STATIC const char*default_dymosim_license_filename=
 "c:/users/magne/appdata/roaming/dassaultsystemes/dymola/dymola.lic";
#include <dsblock1.c>

/* Define variable names. */

#define Sections_

TranslatedEquations

InitialSection
if (!DymolaUserHomotopy) UpdateInitVars(time, X_, XD_, U_, DP_, IP_, LP_, F_, Y_, W_, QZ_, duser_, iuser_, cuser_, did_, 1);
BoundParameterSection
InitialSection
InitialSection
InitialStartSection
InitialSection
DefaultSection
InitializeData(0)
InitialSection
InitialSectionB
Init_=false;InitializeData(2);Init_=true;
EndInitialSection

OutputSection

DynamicsSection
DYNX(F_,0) = DYNX(DP_,0)*DYNX(X_,0)+DYNX(DP_,1);

AcceptedSection1

AcceptedSection2

DefaultSection
InitializeData(1)
EndTranslatedEquations

#include <dsblock6.c>

PreNonAliasNew(0)
StartNonAlias(0)
DeclareParameter("a", "Growth rate", 0, -3, 0.0,0.0,0.0,0,560)
DeclareParameter("b", "Steady-state value", 1, 17, 0.0,0.0,0.0,0,560)
DeclareState("x", "State", 0, -2, 0.0,0.0,0.0,0,560)
DeclareDerivative("der(x)", "der(State)", 0.0, 0.0,0.0,0.0,0,512)
EndNonAlias(0)

#define DymolaHaveUpdateInitVars 1
#include <dsblock5.c>

DYMOLA_STATIC void UpdateInitVars(double*time, double* X_, double* XD_, double* U_, double* DP_, int IP_[], Dymola_bool LP_[], double* F_, double* Y_, double* W_, double QZ_[], double duser_[], int iuser_[], void*cuser_[],struct DYNInstanceData*did_,int initialCall) {
}
StartDataBlock
EndDataBlock
