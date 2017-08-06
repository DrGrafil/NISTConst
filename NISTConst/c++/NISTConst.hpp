/// @file NISTConst/c++/NISTConst.hpp
///
/// @brief NIST Constants
///
//	 http://physics.nist.gov/constants
/// @author Elliot Grafil (Metex)
/// @date 8/5/17


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
// Document Groupings

// Following grouping done by NIST for constants

/// @defgroup NISTConst NIST Constants

/// @defgroup Universal Universal
/// @ingroup NISTConst

/// @defgroup Electromagnetic Electromagnetic
/// @ingroup NISTConst


/// @defgroup Atomic Atomic and nuclear
/// @ingroup NISTConst

/// 	@defgroup Alpha Alpha particle
/// 	@ingroup Atomic

/// 	@defgroup Bohr Bohr radius
/// 	@ingroup Atomic

/// 	@defgroup Compton Compton Wavelength
/// 	@ingroup Atomic

/// 	@defgroup Deuteron Deuteron nucleus
/// 	@ingroup Atomic

/// 	@defgroup Electron Electron particle
/// 	@ingroup Atomic



/// @defgroup PhysicoChemical Physico-Chemical
/// @ingroup NISTConst

/// @defgroup Adopted Adopted
/// @ingroup NISTConst

/// @defgroup Non-SI Non-SI units
/// @ingroup NISTConst

/// @defgroup ConversionFactors Conversion factors
/// @ingroup NISTConst

/// @defgroup X-ray X-ray values
/// @ingroup NISTConst



namespace NISTConst
{

/*
	const double {220} lattice spacing of silicon                            192.0155714e-12;        0.0000032e-12;          m
*/	

	/// @addtogroup Alpha
	/// @{
	const double alphaParticleElectronMassRatio =                          	7294.29954136;				/**< \f$m_\alpha/m_e \ (1)\f$  */ 
	const double alphaParticleMass =										6.644657230e-27;			/**< \f$m_\alpha \ (kg)\f$  */ 
	const double alphaParticleMassInJ =										5.971920097e-10;			/**< \f$m_\alpha \ (\frac{J}{c^2})\f$  */ 
	const double alphaParticleMassInMeV =									3727.379378;				/**< \f$m_\alpha \ (\frac{MeV}{c^2})\f$  */ 
	const double alphaParticleMassInu =										4.001506179127;				/**< \f$m_\alpha \ (u)\f$  */ 
	const double alphaParticleMolarMass =									4.001506179127e-3;			/**< \f$M_\alpha \ (\frac{kg}{mol})\f$  */ 
	const double alphaParticleProtonMassRatio =								3.97259968907;        		/**< \f$m_\alpha/m_p \ (1)\f$  */ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double alphaParticleElectronMassRatioUncertainty =				0.00000024;					/**< \f$m_\alpha/m_e \ (1)\f$  */ 
	const double alphaParticleMassUncertainty =								0.000000082e-27;     		/**< \f$m_\alpha \ (kg)\f$  */ 
	const double alphaParticleMassInJUncertainty =							0.000000073e-10;      		/**< \f$m_\alpha \ (\frac{J}{c^2})\f$  */ 
	const double alphaParticleMassInMeVUncertainty =						0.000023;                	/**< \f$m_\alpha \ (\frac{MeV}{c^2})\f$  */ 
	const double alphaParticleMassInuUncertainty =							0.000000000063;     		/**< \f$m_\alpha \ (u)\f$  */ 
	const double alphaParticleMolarMassUncertainty =						0.000000000063e-3;  		/**< \f$M_\alpha \ (\frac{kg}{mol})\f$  */ 
	const double alphaParticleProtonMassRatioUncertainty =					0.00000000036;         		/**< \f$m_\alpha/m_p \ (1)\f$  */ 
	#endif  
	/// @}
/*	
	const double Angstrom star                                               1.000 014 95 e-10        0.000 000 90 e-10        m
	
	const double atomic mass constant                                        1.660 539 040 e-27       0.000 000 020 e-27       kg
	const double atomic mass constant energy equivalent                      1.492 418 062 e-10       0.000 000 018 e-10       J
	const double atomic mass constant energy equivalent in MeV               931.494 0954             0.000 0057               MeV
	const double atomic mass unit-electron volt relationship                 931.494 0954 e6          0.000 0057 e6            eV
	const double atomic mass unit-hartree relationship                       3.423 177 6902 e7        0.000 000 0016 e7        E_h
	const double atomic mass unit-hertz relationship                         2.252 342 7206 e23       0.000 000 0010 e23       Hz
	const double atomic mass unit-inverse meter relationship                 7.513 006 6166 e14       0.000 000 0034 e14       m^-1
	const double atomic mass unit-joule relationship                         1.492 418 062 e-10       0.000 000 018 e-10       J
	const double atomic mass unit-kelvin relationship                        1.080 954 38 e13         0.000 000 62 e13         K
	const double atomic mass unit-kilogram relationship                      1.660 539 040 e-27       0.000 000 020 e-27       kg
	
	const double atomic unit of 1st hyperpolarizability                      3.206 361 329 e-53       0.000 000 020 e-53       C^3 m^3 J^-2
	const double atomic unit of 2nd hyperpolarizability                      6.235 380 085 e-65       0.000 000 077 e-65       C^4 m^4 J^-3
	const double atomic unit of action                                       1.054 571 800 e-34       0.000 000 013 e-34       J s
	const double atomic unit of charge                                       1.602 176 6208 e-19      0.000 000 0098 e-19      C
	const double atomic unit of charge density                               1.081 202 3770 e12       0.000 000 0067 e12       C m^-3
	const double atomic unit of current                                      6.623 618 183 e-3        0.000 000 041 e-3        A
	const double atomic unit of electric dipole mom.                         8.478 353 552 e-30       0.000 000 052 e-30       C m
	const double atomic unit of electric field                               5.142 206 707 e11        0.000 000 032 e11        V m^-1
	const double atomic unit of electric field gradient                      9.717 362 356 e21        0.000 000 060 e21        V m^-2
	const double atomic unit of electric polarizability                      1.648 777 2731 e-41      0.000 000 0011 e-41      C^2 m^2 J^-1
	const double atomic unit of electric potential                           27.211 386 02            0.000 000 17             V
	const double atomic unit of electric quadrupole mom.                     4.486 551 484 e-40       0.000 000 028 e-40       C m^2
	const double atomic unit of energy                                       4.359 744 650 e-18       0.000 000 054 e-18       J
	const double atomic unit of force                                        8.238 723 36 e-8         0.000 000 10 e-8         N
	const double atomic unit of length                                       0.529 177 210 67 e-10    0.000 000 000 12 e-10    m
	const double atomic unit of mag. dipole mom.                             1.854 801 999 e-23       0.000 000 011 e-23       J T^-1
	const double atomic unit of mag. flux density                            2.350 517 550 e5         0.000 000 014 e5         T
	const double atomic unit of magnetizability                              7.891 036 5886 e-29      0.000 000 0090 e-29      J T^-2
	const double atomic unit of mass                                         9.109 383 56 e-31        0.000 000 11 e-31        kg
	const double atomic unit of mom.um                                       1.992 851 882 e-24       0.000 000 024 e-24       kg m s^-1
	const double atomic unit of permittivity                                 1.112 650 056... e-10    (exact)                  F m^-1
	const double atomic unit of time                                         2.418 884 326 509 e-17   0.000 000 000 014 e-17   s
	const double atomic unit of velocity                                     2.187 691 262 77 e6      0.000 000 000 50 e6      m s^-1
	const double Avogadro constant                                           6.022 140 857 e23        0.000 000 074 e23        mol^-1

	const double Bohr magneton                                               927.400 9994 e-26        0.000 0057 e-26          J T^-1
	const double Bohr magneton in eV/T                                       5.788 381 8012 e-5       0.000 000 0026 e-5       eV T^-1
	const double Bohr magneton in Hz/T                                       13.996 245 042 e9        0.000 000 086 e9         Hz T^-1
	const double Bohr magneton in inverse meters per tesla                   46.686 448 14            0.000 000 29             m^-1 T^-1
	const double Bohr magneton in K/T                                        0.671 714 05             0.000 000 39             K T^-1
	const double Bohr radius                                                 0.529 177 210 67 e-10    0.000 000 000 12 e-10    m

	const double Boltzmann constant                                          1.380 648 52 e-23        0.000 000 79 e-23        J K^-1
	const double Boltzmann constant in eV/K                                  8.617 3303 e-5           0.000 0050 e-5           eV K^-1
	const double Boltzmann constant in Hz/K                                  2.083 6612 e10           0.000 0012 e10           Hz K^-1
	const double Boltzmann constant in inverse meters per kelvin             69.503 457               0.000 040                m^-1 K^-1

	const double characteristic impedance of vacuum                          376.730 313 461...       (exact)                  ohm
	const double classical electron radius                                   2.817 940 3227 e-15      0.000 000 0019 e-15      m
	const double Compton wavelength                                          2.426 310 2367 e-12      0.000 000 0011 e-12      m
	const double Compton wavelength over 2 pi                                386.159 267 64 e-15      0.000 000 18 e-15        m
	const double conductance quantum                                         7.748 091 7310 e-5       0.000 000 0018 e-5       S
	const double conventional value of Josephson constant                    483 597.9 e9             (exact)                  Hz V^-1
	const double conventional value of von Klitzing constant                 25 812.807               (exact)                  ohm
	const double Cu x unit                                                   1.002 076 97 e-13        0.000 000 28 e-13        m
	const double deuteron-electron mag. mom. ratio                           -4.664 345 535 e-4       0.000 000 026 e-4        
	const double deuteron-electron mass ratio                                3670.482 967 85          0.000 000 13             
	const double deuteron g factor                                           0.857 438 2311           0.000 000 0048           
	const double deuteron mag. mom.                                          0.433 073 5040 e-26      0.000 000 0036 e-26      J T^-1
	const double deuteron mag. mom. to Bohr magneton ratio                   0.466 975 4554 e-3       0.000 000 0026 e-3       
	const double deuteron mag. mom. to nuclear magneton ratio                0.857 438 2311           0.000 000 0048           
	const double deuteron mass                                               3.343 583 719 e-27       0.000 000 041 e-27       kg
	const double deuteron mass energy equivalent                             3.005 063 183 e-10       0.000 000 037 e-10       J
	const double deuteron mass energy equivalent in MeV                      1875.612 928             0.000 012                MeV
	const double deuteron mass in u                                          2.013 553 212 745        0.000 000 000 040        u
	const double deuteron molar mass                                         2.013 553 212 745 e-3    0.000 000 000 040 e-3    kg mol^-1
	const double deuteron-neutron mag. mom. ratio                            -0.448 206 52            0.000 000 11             
	const double deuteron-proton mag. mom. ratio                             0.307 012 2077           0.000 000 0015           
	const double deuteron-proton mass ratio                                  1.999 007 500 87         0.000 000 000 19         
	const double deuteron rms charge radius                                  2.1413 e-15              0.0025 e-15              m
	const double electric constant                                           8.854 187 817... e-12    (exact)                  F m^-1

	const double electron charge to mass quotient                            -1.758 820 024 e11       0.000 000 011 e11        C kg^-1
	const double electron-deuteron mag. mom. ratio                           -2143.923 499            0.000 012                
	const double electron-deuteron mass ratio                                2.724 437 107 484 e-4    0.000 000 000 096 e-4    
	const double electron g factor                                           -2.002 319 304 361 82    0.000 000 000 000 52     
	const double electron gyromag. ratio                                     1.760 859 644 e11        0.000 000 011 e11        s^-1 T^-1
	const double electron gyromag. ratio over 2 pi                           28 024.951 64            0.000 17                 MHz T^-1
	const double electron-helion mass ratio                                  1.819 543 074 854 e-4    0.000 000 000 088 e-4    
	const double electron mag. mom.                                          -928.476 4620 e-26       0.000 0057 e-26          J T^-1
	const double electron mag. mom. anomaly                                  1.159 652 180 91 e-3     0.000 000 000 26 e-3     
	const double electron mag. mom. to Bohr magneton ratio                   -1.001 159 652 180 91    0.000 000 000 000 26     
	const double electron mag. mom. to nuclear magneton ratio                -1838.281 972 34         0.000 000 17             
	const double electron mass                                               9.109 383 56 e-31        0.000 000 11 e-31        kg
	const double electron mass energy equivalent                             8.187 105 65 e-14        0.000 000 10 e-14        J
	const double electron mass energy equivalent in MeV                      0.510 998 9461           0.000 000 0031           MeV
	const double electron mass in u                                          5.485 799 090 70 e-4     0.000 000 000 16 e-4     u
	const double electron molar mass                                         5.485 799 090 70 e-7     0.000 000 000 16 e-7     kg mol^-1
	const double electron-muon mag. mom. ratio                               206.766 9880             0.000 0046               
	const double electron-muon mass ratio                                    4.836 331 70 e-3         0.000 000 11 e-3         
	const double electron-neutron mag. mom. ratio                            960.920 50               0.000 23                 
	const double electron-neutron mass ratio                                 5.438 673 4428 e-4       0.000 000 0027 e-4       
	const double electron-proton mag. mom. ratio                             -658.210 6866            0.000 0020               
	const double electron-proton mass ratio                                  5.446 170 213 52 e-4     0.000 000 000 52 e-4     
	const double electron-tau mass ratio                                     2.875 92 e-4             0.000 26 e-4             
	const double electron to alpha particle mass ratio                       1.370 933 554 798 e-4    0.000 000 000 045 e-4    
	const double electron to shielded helion mag. mom. ratio                 864.058 257              0.000 010                
	const double electron to shielded proton mag. mom. ratio                 -658.227 5971            0.000 0072               
	const double electron-triton mass ratio                                  1.819 200 062 203 e-4    0.000 000 000 084 e-4    
	const double electron volt                                               1.602 176 6208 e-19      0.000 000 0098 e-19      J
	const double electron volt-atomic mass unit relationship                 1.073 544 1105 e-9       0.000 000 0066 e-9       u
	const double electron volt-hartree relationship                          3.674 932 248 e-2        0.000 000 023 e-2        E_h
	const double electron volt-hertz relationship                            2.417 989 262 e14        0.000 000 015 e14        Hz
	const double electron volt-inverse meter relationship                    8.065 544 005 e5         0.000 000 050 e5         m^-1
	const double electron volt-joule relationship                            1.602 176 6208 e-19      0.000 000 0098 e-19      J
	const double electron volt-kelvin relationship                           1.160 452 21 e4          0.000 000 67 e4          K
	const double electron volt-kilogram relationship                         1.782 661 907 e-36       0.000 000 011 e-36       kg

	const double elementary charge                                           1.602 176 6208 e-19      0.000 000 0098 e-19      C
	const double elementary charge over h                                    2.417 989 262 e14        0.000 000 015 e14        A J^-1

	const double Faraday constant                                            96 485.332 89            0.000 59                 C mol^-1
	const double Faraday constant for conventional electric current          96 485.3251              0.0012                   C_90 mol^-1

	const double Fermi coupling constant                                     1.166 3787 e-5           0.000 0006 e-5           GeV^-2
	const double fine-structure constant                                     7.297 352 5664 e-3       0.000 000 0017 e-3       
	const double first radiation constant                                    3.741 771 790 e-16       0.000 000 046 e-16       W m^2
	const double first radiation constant for spectral radiance              1.191 042 953 e-16       0.000 000 015 e-16       W m^2 sr^-1
	const double hartree-atomic mass unit relationship                       2.921 262 3197 e-8       0.000 000 0013 e-8       u
	const double hartree-electron volt relationship                          27.211 386 02            0.000 000 17             eV
	const double Hartree energy                                              4.359 744 650 e-18       0.000 000 054 e-18       J
	const double Hartree energy in eV                                        27.211 386 02            0.000 000 17             eV
	const double hartree-hertz relationship                                  6.579 683 920 711 e15    0.000 000 000 039 e15    Hz
	const double hartree-inverse meter relationship                          2.194 746 313 702 e7     0.000 000 000 013 e7     m^-1
	const double hartree-joule relationship                                  4.359 744 650 e-18       0.000 000 054 e-18       J
	const double hartree-kelvin relationship                                 3.157 7513 e5            0.000 0018 e5            K
	const double hartree-kilogram relationship                               4.850 870 129 e-35       0.000 000 060 e-35       kg
	const double helion-electron mass ratio                                  5495.885 279 22          0.000 000 27             
	const double helion g factor                                             -4.255 250 616           0.000 000 050            
	const double helion mag. mom.                                            -1.074 617 522 e-26      0.000 000 014 e-26       J T^-1
	const double helion mag. mom. to Bohr magneton ratio                     -1.158 740 958 e-3       0.000 000 014 e-3        
	const double helion mag. mom. to nuclear magneton ratio                  -2.127 625 308           0.000 000 025            
	const double helion mass                                                 5.006 412 700 e-27       0.000 000 062 e-27       kg
	const double helion mass energy equivalent                               4.499 539 341 e-10       0.000 000 055 e-10       J
	const double helion mass energy equivalent in MeV                        2808.391 586             0.000 017                MeV
	const double helion mass in u                                            3.014 932 246 73         0.000 000 000 12         u
	const double helion molar mass                                           3.014 932 246 73 e-3     0.000 000 000 12 e-3     kg mol^-1
	const double helion-proton mass ratio                                    2.993 152 670 46         0.000 000 000 29         
	const double hertz-atomic mass unit relationship                         4.439 821 6616 e-24      0.000 000 0020 e-24      u
	const double hertz-electron volt relationship                            4.135 667 662 e-15       0.000 000 025 e-15       eV
	const double hertz-hartree relationship                                  1.519 829 846 0088 e-16  0.000 000 000 0090 e-16  E_h
	const double hertz-inverse meter relationship                            3.335 640 951... e-9     (exact)                  m^-1
	const double hertz-joule relationship                                    6.626 070 040 e-34       0.000 000 081 e-34       J
	const double hertz-kelvin relationship                                   4.799 2447 e-11          0.000 0028 e-11          K
	const double hertz-kilogram relationship                                 7.372 497 201 e-51       0.000 000 091 e-51       kg
	const double inverse fine-structure constant                             137.035 999 139          0.000 000 031            
	const double inverse meter-atomic mass unit relationship                 1.331 025 049 00 e-15    0.000 000 000 61 e-15    u
	const double inverse meter-electron volt relationship                    1.239 841 9739 e-6       0.000 000 0076 e-6       eV
	const double inverse meter-hartree relationship                          4.556 335 252 767 e-8    0.000 000 000 027 e-8    E_h
	const double inverse meter-hertz relationship                            299 792 458              (exact)                  Hz
	const double inverse meter-joule relationship                            1.986 445 824 e-25       0.000 000 024 e-25       J
	const double inverse meter-kelvin relationship                           1.438 777 36 e-2         0.000 000 83 e-2         K
	const double inverse meter-kilogram relationship                         2.210 219 057 e-42       0.000 000 027 e-42       kg
	const double inverse of conductance quantum                              12 906.403 7278          0.000 0029               ohm
	const double Josephson constant                                          483 597.8525 e9          0.0030 e9                Hz V^-1
	const double joule-atomic mass unit relationship                         6.700 535 363 e9         0.000 000 082 e9         u
	const double joule-electron volt relationship                            6.241 509 126 e18        0.000 000 038 e18        eV
	const double joule-hartree relationship                                  2.293 712 317 e17        0.000 000 028 e17        E_h
	const double joule-hertz relationship                                    1.509 190 205 e33        0.000 000 019 e33        Hz
	const double joule-inverse meter relationship                            5.034 116 651 e24        0.000 000 062 e24        m^-1
	const double joule-kelvin relationship                                   7.242 9731 e22           0.000 0042 e22           K
	const double joule-kilogram relationship                                 1.112 650 056... e-17    (exact)                  kg
	const double kelvin-atomic mass unit relationship                        9.251 0842 e-14          0.000 0053 e-14          u
	const double kelvin-electron volt relationship                           8.617 3303 e-5           0.000 0050 e-5           eV
	const double kelvin-hartree relationship                                 3.166 8105 e-6           0.000 0018 e-6           E_h
	const double kelvin-hertz relationship                                   2.083 6612 e10           0.000 0012 e10           Hz
	const double kelvin-inverse meter relationship                           69.503 457               0.000 040                m^-1
	const double kelvin-joule relationship                                   1.380 648 52 e-23        0.000 000 79 e-23        J
	const double kelvin-kilogram relationship                                1.536 178 65 e-40        0.000 000 88 e-40        kg
	const double kilogram-atomic mass unit relationship                      6.022 140 857 e26        0.000 000 074 e26        u
	const double kilogram-electron volt relationship                         5.609 588 650 e35        0.000 000 034 e35        eV
	const double kilogram-hartree relationship                               2.061 485 823 e34        0.000 000 025 e34        E_h
	const double kilogram-hertz relationship                                 1.356 392 512 e50        0.000 000 017 e50        Hz
	const double kilogram-inverse meter relationship                         4.524 438 411 e41        0.000 000 056 e41        m^-1
	const double kilogram-joule relationship                                 8.987 551 787... e16     (exact)                  J
	const double kilogram-kelvin relationship                                6.509 6595 e39           0.000 0037 e39           K
	const double lattice parameter of silicon                                543.102 0504 e-12        0.000 0089 e-12          m
	const double Loschmidt constant (273.15 K, 100 kPa)                      2.651 6467 e25           0.000 0015 e25           m^-3
	const double Loschmidt constant (273.15 K, 101.325 kPa)                  2.686 7811 e25           0.000 0015 e25           m^-3
	const double mag. constant                                               12.566 370 614... e-7    (exact)                  N A^-2
	const double mag. flux quantum                                           2.067 833 831 e-15       0.000 000 013 e-15       Wb
	const double molar gas constant                                          8.314 4598               0.000 0048               J mol^-1 K^-1
	const double molar mass constant                                         1 e-3                    (exact)                  kg mol^-1
	const double molar mass of carbon-12                                     12 e-3                   (exact)                  kg mol^-1
	const double molar Planck constant                                       3.990 312 7110 e-10      0.000 000 0018 e-10      J s mol^-1
	const double molar Planck constant times c                               0.119 626 565 582        0.000 000 000 054        J m mol^-1
	const double molar volume of ideal gas (273.15 K, 100 kPa)               22.710 947 e-3           0.000 013 e-3            m^3 mol^-1
	const double molar volume of ideal gas (273.15 K, 101.325 kPa)           22.413 962 e-3           0.000 013 e-3            m^3 mol^-1
	const double molar volume of silicon                                     12.058 832 14 e-6        0.000 000 61 e-6         m^3 mol^-1
	const double Mo x unit     
	                                              1.002 099 52 e-13        0.000 000 53 e-13        m
	const double muon Compton wavelength                                     11.734 441 11 e-15       0.000 000 26 e-15        m
	const double muon Compton wavelength over 2 pi                           1.867 594 308 e-15       0.000 000 042 e-15       m
	const double muon-electron mass ratio                                    206.768 2826             0.000 0046               
	const double muon g factor                                               -2.002 331 8418          0.000 000 0013           
	const double muon mag. mom.                                              -4.490 448 26 e-26       0.000 000 10 e-26        J T^-1
	const double muon mag. mom. anomaly                                      1.165 920 89 e-3         0.000 000 63 e-3         
	const double muon mag. mom. to Bohr magneton ratio                       -4.841 970 48 e-3        0.000 000 11 e-3         
	const double muon mag. mom. to nuclear magneton ratio                    -8.890 597 05            0.000 000 20             
	const double muon mass                                                   1.883 531 594 e-28       0.000 000 048 e-28       kg
	const double muon mass energy equivalent                                 1.692 833 774 e-11       0.000 000 043 e-11       J
	const double muon mass energy equivalent in MeV                          105.658 3745             0.000 0024               MeV
	const double muon mass in u                                              0.113 428 9257           0.000 000 0025           u
	const double muon molar mass                                             0.113 428 9257 e-3       0.000 000 0025 e-3       kg mol^-1
	const double muon-neutron mass ratio                                     0.112 454 5167           0.000 000 0025           
	const double muon-proton mag. mom. ratio                                 -3.183 345 142           0.000 000 071            
	const double muon-proton mass ratio                                      0.112 609 5262           0.000 000 0025           
	const double muon-tau mass ratio                                         5.946 49 e-2             0.000 54 e-2             

	const double natural unit of action                                      1.054 571 800 e-34       0.000 000 013 e-34       J s
	const double natural unit of action in eV s                              6.582 119 514 e-16       0.000 000 040 e-16       eV s
	const double natural unit of energy                                      8.187 105 65 e-14        0.000 000 10 e-14        J
	const double natural unit of energy in MeV                               0.510 998 9461           0.000 000 0031           MeV
	const double natural unit of length                                      386.159 267 64 e-15      0.000 000 18 e-15        m
	const double natural unit of mass                                        9.109 383 56 e-31        0.000 000 11 e-31        kg
	const double natural unit of mom.um                                      2.730 924 488 e-22       0.000 000 034 e-22       kg m s^-1
	const double natural unit of mom.um in MeV/c                             0.510 998 9461           0.000 000 0031           MeV/c
	const double natural unit of time                                        1.288 088 667 12 e-21    0.000 000 000 58 e-21    s
	const double natural unit of velocity                                    299 792 458              (exact)                  m s^-1
	
	
	const double neutron Compton wavelength                                  1.319 590 904 81 e-15    0.000 000 000 88 e-15    m
	const double neutron Compton wavelength over 2 pi                        0.210 019 415 36 e-15    0.000 000 000 14 e-15    m
	const double neutron-electron mag. mom. ratio                            1.040 668 82 e-3         0.000 000 25 e-3         
	const double neutron-electron mass ratio                                 1838.683 661 58          0.000 000 90             
	const double neutron g factor                                            -3.826 085 45            0.000 000 90             
	const double neutron gyromag. ratio                                      1.832 471 72 e8          0.000 000 43 e8          s^-1 T^-1
	const double neutron gyromag. ratio over 2 pi                            29.164 6933              0.000 0069               MHz T^-1
	const double neutron mag. mom.                                           -0.966 236 50 e-26       0.000 000 23 e-26        J T^-1
	const double neutron mag. mom. to Bohr magneton ratio                    -1.041 875 63 e-3        0.000 000 25 e-3         
	const double neutron mag. mom. to nuclear magneton ratio                 -1.913 042 73            0.000 000 45             
	const double neutron mass                                                1.674 927 471 e-27       0.000 000 021 e-27       kg
	const double neutron mass energy equivalent                              1.505 349 739 e-10       0.000 000 019 e-10       J
	const double neutron mass energy equivalent in MeV                       939.565 4133             0.000 0058               MeV
	const double neutron mass in u                                           1.008 664 915 88         0.000 000 000 49         u
	const double neutron molar mass                                          1.008 664 915 88 e-3     0.000 000 000 49 e-3     kg mol^-1
	const double neutron-muon mass ratio                                     8.892 484 08             0.000 000 20             
	const double neutron-proton mag. mom. ratio                              -0.684 979 34            0.000 000 16             
	const double neutron-proton mass difference                              2.305 573 77 e-30        0.000 000 85 e-30        
	const double neutron-proton mass difference energy equivalent            2.072 146 37 e-13        0.000 000 76 e-13        
	const double neutron-proton mass difference energy equivalent in MeV     1.293 332 05             0.000 000 48             
	const double neutron-proton mass difference in u                         0.001 388 449 00         0.000 000 000 51         
	const double neutron-proton mass ratio                                   1.001 378 418 98         0.000 000 000 51         
	const double neutron-tau mass ratio                                      0.528 790                0.000 048                
	const double neutron to shielded proton mag. mom. ratio                  -0.684 996 94            0.000 000 16 
	
	            
	const double Newtonian constant of gravitation                           6.674 08 e-11            0.000 31 e-11            m^3 kg^-1 s^-2
	const double Newtonian constant of gravitation over h-bar c              6.708 61 e-39            0.000 31 e-39            (GeV/c^2)^-2
	
	const double nuclear magneton                                            5.050 783 699 e-27       0.000 000 031 e-27       J T^-1
	const double nuclear magneton in eV/T                                    3.152 451 2550 e-8       0.000 000 0015 e-8       eV T^-1
	const double nuclear magneton in inverse meters per tesla                2.542 623 432 e-2        0.000 000 016 e-2        m^-1 T^-1
	const double nuclear magneton in K/T                                     3.658 2690 e-4           0.000 0021 e-4           K T^-1
	const double nuclear magneton in MHz/T                                   7.622 593 285            0.000 000 047            MHz T^-1
	
	const double Planck constant                                             6.626 070 040 e-34       0.000 000 081 e-34       J s
	const double Planck constant in eV s                                     4.135 667 662 e-15       0.000 000 025 e-15       eV s
	const double Planck constant over 2 pi                                   1.054 571 800 e-34       0.000 000 013 e-34       J s
	const double Planck constant over 2 pi in eV s                           6.582 119 514 e-16       0.000 000 040 e-16       eV s
	const double Planck constant over 2 pi times c in MeV fm                 197.326 9788             0.000 0012               MeV fm
	const double Planck length                                               1.616 229 e-35           0.000 038 e-35           m
	const double Planck mass                                                 2.176 470 e-8            0.000 051 e-8            kg
	const double Planck mass energy equivalent in GeV                        1.220 910 e19            0.000 029 e19            GeV
	const double Planck temperature                                          1.416 808 e32            0.000 033 e32            K
	const double Planck time                                                 5.391 16 e-44            0.000 13 e-44            s

	const double proton charge to mass quotient                              9.578 833 226 e7         0.000 000 059 e7         C kg^-1
	const double proton Compton wavelength                                   1.321 409 853 96 e-15    0.000 000 000 61 e-15    m
	const double proton Compton wavelength over 2 pi                         0.210 308 910 109 e-15   0.000 000 000 097 e-15   m
	const double proton-electron mass ratio                                  1836.152 673 89          0.000 000 17             
	const double proton g factor                                             5.585 694 702            0.000 000 017            
	const double proton gyromag. ratio                                       2.675 221 900 e8         0.000 000 018 e8         s^-1 T^-1
	const double proton gyromag. ratio over 2 pi                             42.577 478 92            0.000 000 29             MHz T^-1
	const double proton mag. mom.                                            1.410 606 7873 e-26      0.000 000 0097 e-26      J T^-1
	const double proton mag. mom. to Bohr magneton ratio                     1.521 032 2053 e-3       0.000 000 0046 e-3       
	const double proton mag. mom. to nuclear magneton ratio                  2.792 847 3508           0.000 000 0085           
	const double proton mag. shielding correction                            25.691 e-6               0.011 e-6                
	const double proton mass                                                 1.672 621 898 e-27       0.000 000 021 e-27       kg
	const double proton mass energy equivalent                               1.503 277 593 e-10       0.000 000 018 e-10       J
	const double proton mass energy equivalent in MeV                        938.272 0813             0.000 0058               MeV
	const double proton mass in u                                            1.007 276 466 879        0.000 000 000 091        u
	const double proton molar mass                                           1.007 276 466 879 e-3    0.000 000 000 091 e-3    kg mol^-1
	const double proton-muon mass ratio                                      8.880 243 38             0.000 000 20             
	const double proton-neutron mag. mom. ratio                              -1.459 898 05            0.000 000 34             
	const double proton-neutron mass ratio                                   0.998 623 478 44         0.000 000 000 51         
	const double proton rms charge radius                                    0.8751 e-15              0.0061 e-15              m
	const double proton-tau mass ratio                                       0.528 063                0.000 048       
         
	const double quantum of circulation                                      3.636 947 5486 e-4       0.000 000 0017 e-4       m^2 s^-1
	const double quantum of circulation times 2                              7.273 895 0972 e-4       0.000 000 0033 e-4       m^2 s^-1
	
	const double Rydberg constant                                            10 973 731.568 508       0.000 065                m^-1
	const double Rydberg constant times c in Hz                              3.289 841 960 355 e15    0.000 000 000 019 e15    Hz
	const double Rydberg constant times hc in eV                             13.605 693 009           0.000 000 084            eV
	const double Rydberg constant times hc in J                              2.179 872 325 e-18       0.000 000 027 e-18       J
	
	const double Sackur-Tetrode constant (1 K, 100 kPa)                      -1.151 7084              0.000 0014               
	const double Sackur-Tetrode constant (1 K, 101.325 kPa)                  -1.164 8714              0.000 0014               
	
	const double second radiation constant                                   1.438 777 36 e-2         0.000 000 83 e-2         m K
	const double shielded helion gyromag. ratio                              2.037 894 585 e8         0.000 000 027 e8         s^-1 T^-1
	const double shielded helion gyromag. ratio over 2 pi                    32.434 099 66            0.000 000 43             MHz T^-1
	const double shielded helion mag. mom.                                   -1.074 553 080 e-26      0.000 000 014 e-26       J T^-1
	const double shielded helion mag. mom. to Bohr magneton ratio            -1.158 671 471 e-3       0.000 000 014 e-3        
	const double shielded helion mag. mom. to nuclear magneton ratio         -2.127 497 720           0.000 000 025            
	const double shielded helion to proton mag. mom. ratio                   -0.761 766 5603          0.000 000 0092           
	const double shielded helion to shielded proton mag. mom. ratio          -0.761 786 1313          0.000 000 0033           
	const double shielded proton gyromag. ratio                              2.675 153 171 e8         0.000 000 033 e8         s^-1 T^-1
	const double shielded proton gyromag. ratio over 2 pi                    42.576 385 07            0.000 000 53             MHz T^-1
	const double shielded proton mag. mom.                                   1.410 570 547 e-26       0.000 000 018 e-26       J T^-1
	const double shielded proton mag. mom. to Bohr magneton ratio            1.520 993 128 e-3        0.000 000 017 e-3        
	const double shielded proton mag. mom. to nuclear magneton ratio         2.792 775 600            0.000 000 030    

        
	const double speed of light in vacuum                                    299 792 458              (exact)                  m s^-1
	const double standard acceleration of gravity                            9.806 65                 (exact)                  m s^-2
	const double standard atmosphere                                         101 325                  (exact)                  Pa
	const double standard-state pressure                                     100 000                  (exact)                  Pa


	const double Stefan-Boltzmann constant                                   5.670 367 e-8            0.000 013 e-8            W m^-2 K^-4
	*/
	const double tauComptonWavelength                                      	0.697787e-15; 				/**< \f$\lambda_{C,\tau} \ (m)\f$  */ 
	const double tauComptonWavelengthOver2Pi                           		0.111056e-15;        		/**< \f$\lambdabar_{C,\tau} \ (m)\f$  */ //https://tex.stackexchange.com/questions/96479/how-can-i-type-lambda-bar
	const double tauElectronMassRatio                                     	3477.15;                  	/**< \f$m_\tau/m_e \ (1)\f$  */ 
	const double tauMass                                                    3.16747e-27;           		/**< \f$m_\tau \ (kg)\f$  */ 
	const double tauMassInJ                                  				2.84678e-10;				/**< \f$m_\tau \ (\frac{J}{c^2})\f$  */ 
	const double tauMassInMeV                           					1776.82;					/**< \f$m_\tau \ (\frac{MeV}{c^2})\f$  */ 
	const double tauMassInu                                               	1.90749;					/**< \f$m_\tau \ (u)\f$  */ 
	const double tauMolarMass                                              	1.90749e-3;					/**< \f$M_\tau \ (\frac{kg}{mol})\f$  */ 
	const double tauMuonMassRatio                                          	16.8167;					/**< \f$m_\tau/m_\mu \ (1)\f$  */ 
	const double tauNeutronMassRatio                                       	1.89111;					/**< \f$m_\tau/m_n \ (1)\f$  */ 
	const double tauProtonMassRatio											1.89372;					/**< \f$m_\tau/m_p \ (1)\f$  */ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double tauComptonWavelengthUncertainty =                          0.000063e-15;				/**< \f$\lambda_{C,\tau} \ (m)\f$  */ 
	const double tauComptonWavelengthOver2PiUncertainty =                   0.000010e-15; 				/**< \f$\lambdabar_{C,\tau} \ (m)\f$  */ 
	const double tauElectronMassRatioUncertainty =                         	0.31;                     	/**< \f$m_\tau/m_e \ (1)\f$  */ 
	const double tauMassUncertainty =                                       0.00029 e-27;        		/**< \f$m_\tau \ (kg)\f$  */ 
	const double tauMassInJUncertainty =                                   	0.00026e-10; 				/**< \f$m_\tau \ (\frac{J}{c^2})\f$  */ 
	const double tauMassInMeVUncertainty = 									0.16;     					/**< \f$m_\tau \ (\frac{MeV}{c^2})\f$  */ 
	const double tauMassInuUncertainty =									0.00017;               		/**< \f$m_\tau \ (u)\f$  */ 
	const double tauMolarMassUncertainty =									0.00017e-3;             	/**< \f$M_\tau \ (\frac{kg}{mol})\f$  */ 
	const double tauMuonMassRatioUncertainty = 								0.0015;                   	/**< \f$m_\tau/m_\mu \ (1)\f$  */ 
	const double tauNeutronMassRatioUncertainty =							0.00017;                 	/**< \f$m_\tau/m_n \ (1)\f$  */ 
	const double tauProtonMassRatioUncertainty =							0.00017;       				/**< \f$m_\tau/m_p \ (1)\f$  */ 	
	#endif  


	
	
	
	/*
	          
	const double Thomson cross section                                       0.665 245 871 58 e-28    0.000 000 000 91 e-28    m^2

	const double triton-electron mass ratio                                  5496.921 535 88          0.000 000 26             
	const double triton g factor                                             5.957 924 920            0.000 000 028            
	const double triton mag. mom.                                            1.504 609 503 e-26       0.000 000 012 e-26       J T^-1
	const double triton mag. mom. to Bohr magneton ratio                     1.622 393 6616 e-3       0.000 000 0076 e-3       
	const double triton mag. mom. to nuclear magneton ratio                  2.978 962 460            0.000 000 014            
	const double triton mass                                                 5.007 356 665 e-27       0.000 000 062 e-27       kg
	const double triton mass energy equivalent                               4.500 387 735 e-10       0.000 000 055 e-10       J
	const double triton mass energy equivalent in MeV                        2808.921 112             0.000 017                MeV
	const double triton mass in u                                            3.015 500 716 32         0.000 000 000 11         u
	const double triton molar mass                                           3.015 500 716 32 e-3     0.000 000 000 11 e-3     kg mol^-1
	const double triton-proton mass ratio                                    2.993 717 033 48         0.000 000 000 22         
	
	const double unified atomic mass unit                                    1.660 539 040 e-27       0.000 000 020 e-27       kg
	
	const double von Klitzing constant                                       25 812.807 4555          0.000 0059               ohm
	
	const double weak mixing angle                                           0.2223                   0.0021                   
	
	const double Wien frequency displacement law constant                    5.878 9238 e10           0.000 0034 e10           Hz K^-1
	const double Wien wavelength displacement law constant                   2.897 7729 e-3           0.000 0017 e-3           m K
	*/
} //namespace NISTConst


