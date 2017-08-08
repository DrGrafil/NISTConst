/// @file NISTConst.hpp
///
/// @brief NIST Constants
///
//	 http://physics.nist.gov/constants
/// @author Elliot Grafil (Metex)
/// @date 8/5/17
/// @todo: Decide to use energy equivelence or mass for reporting particles in MeV and J ie mc^2 = MeV or m = MeV/c^2
/// @todo: require units on all things that have multiple unit definitions.

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

/// 	@defgroup ImpedanceOfVacuum Impedance of vacuum 
/// 	@ingroup Universal

/// 	@defgroup ElectricConstant Electric constant 
/// 	@ingroup Universal

/// 	@defgroup MagneticConstant Magnetic constant 
/// 	@ingroup Universal

/// 	@defgroup GravitationalConstant Gravitational constant
/// 	@ingroup Universal

/// 	@defgroup PlanckConstant Planck constant 
/// 	@ingroup Universal

/// 	@defgroup PlanckLength Planck length 
/// 	@ingroup Universal

/// 	@defgroup PlanckMass  Planck mass 
/// 	@ingroup Universal

/// 	@defgroup PlanckTemperature Planck temperature 
/// 	@ingroup Universal

/// 	@defgroup PlanckTime Planck time 
/// 	@ingroup Universal

/// 	@defgroup SpeedOfLight Speed of light
/// 	@ingroup Universal



/// @defgroup Electromagnetic Electromagnetic
/// @ingroup NISTConst

/// 	@defgroup BohrMagneton Bohr magneton  
/// 	@ingroup Electromagnetic

/// 	@defgroup ConductanceQuantum Conductance quantum  
/// 	@ingroup Electromagnetic

/// 	@defgroup ElementaryCharge Elementary charge 
/// 	@ingroup Electromagnetic

/// 	@defgroup JosephsonConstant Josephson constant 
/// 	@ingroup Electromagnetic

/// 	@defgroup MagneticFluxQuantum  Magnetic flux quantum
/// 	@ingroup Electromagnetic

/// 	@defgroup NuclearMagneton Nuclear magneton 
/// 	@ingroup Electromagnetic

/// 	@defgroup vonKlitzingConstant von Klitzing constant   
/// 	@ingroup Electromagnetic



/// @defgroup Atomic Atomic and nuclear
/// @ingroup NISTConst

/// 	@defgroup Alpha Alpha particle (Helium-4 nucleus)
/// 	@ingroup Atomic

/// 	@defgroup BohrRadius Bohr radius
/// 	@ingroup Atomic

/// 	@defgroup ComptonWavelength Compton Wavelength
/// 	@ingroup Atomic

/// 	@defgroup Deuteron Deuteron (Deuterium/Hydrogen-2 nucleus)
/// 	@ingroup Atomic

/// 	@defgroup Electron Electron particle
/// 	@ingroup Atomic

/// 	@defgroup FermiCoupling Fermi coupling constant  
/// 	@ingroup Atomic

/// 	@defgroup FineStructure Fine-structure constant  
/// 	@ingroup Atomic

/// 	@defgroup Hartree Hartree energy
/// 	@ingroup Atomic

/// 	@defgroup Helion Helion (Helium-3 nucleus)
/// 	@ingroup Atomic

/// 	@defgroup Muon Muon particle
/// 	@ingroup Atomic

/// 	@defgroup Neutron Neutron particle
/// 	@ingroup Atomic

/// 	@defgroup Proton Proton particle
/// 	@ingroup Atomic

/// 	@defgroup QuantumCirculation Quantum of circulation  
/// 	@ingroup Atomic

/// 	@defgroup Rydberg Rydberg constant
/// 	@ingroup Atomic

/// 	@defgroup Tau Tau particle
/// 	@ingroup Atomic

/// 	@defgroup Thomson Thomson cross section 
/// 	@ingroup Atomic

/// 	@defgroup Triton Triton (Tritium/Hydrogen-3 nucleus)
/// 	@ingroup Atomic

/// 	@defgroup WeakMixingAngle Weak mixing angle 
/// 	@ingroup Atomic



/// @defgroup PhysicoChemical Physico-Chemical
/// @ingroup NISTConst

/// 	@defgroup AtomicMassConstant Atomic mass constant  
/// 	@ingroup PhysicoChemical

/// 	@defgroup AvogadroConstant Avogadro constant  
/// 	@ingroup PhysicoChemical

/// 	@defgroup BoltzmannConstant Boltzmann constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup FaradayConstant Faraday constant
/// 	@ingroup PhysicoChemical

/// 	@defgroup FirstRadiationConstant first radiation constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup LoschmidtConstant Loschmidt constant  
/// 	@ingroup PhysicoChemical

/// 	@defgroup MolarGasConstant Molar gas constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup MolarPlanckConstant Molar Planck constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup MolarVolume molar volume of ideal gas
/// 	@ingroup PhysicoChemical

/// 	@defgroup SackurTetrodeConstant Sackur-Tetrode constant
/// 	@ingroup PhysicoChemical

/// 	@defgroup SecondRadiationConstant Second radiation constant  
/// 	@ingroup PhysicoChemical

/// 	@defgroup StefanBoltzmannConstant Stefan-Boltzmann constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup WienDisplacement Wien displacement law constant  
/// 	@ingroup PhysicoChemical



/// @defgroup Adopted Adopted
/// @ingroup NISTConst

/// 	@defgroup ConventionalJosephsonConstant Josephson constant 
/// 	@ingroup Adopted

/// 	@defgroup ConventionalvonKlitzingConstant von Klitzing constant 
/// 	@ingroup Adopted

/// 	@defgroup MolarMass Molar mass   
/// 	@ingroup Adopted

/// 	@defgroup GravityAcceleration Gravity acceleration
/// 	@ingroup Adopted

/// 	@defgroup StandardAtmosphere Standard atmosphere 
/// 	@ingroup Adopted


/// @defgroup Non-SI Non-SI units
/// @ingroup NISTConst

/// 	@defgroup AtomicUnit atomic units
/// 	@ingroup Non-SI

/// 	@defgroup ElectronVoltUnit Electron Volt unit
/// 	@ingroup Non-SI

/// 	@defgroup NaturalUnit Natural units
/// 	@ingroup Non-SI

/// 	@defgroup UnifiedAtomicMassUnit Unified atomic mass unit 
/// 	@ingroup Non-SI



/// @defgroup ConversionFactors Conversion factors
/// @ingroup NISTConst

/// 	@defgroup AtomicMassUnit Atomic mass unit
/// 	@ingroup ConversionFactors

/// 	@defgroup ElectronVolt Electron volt
/// 	@ingroup ConversionFactors

/// 	@defgroup Hartree Hartree
/// 	@ingroup ConversionFactors

/// 	@defgroup Hertz	Hertz 
/// 	@ingroup ConversionFactors

// Seems weird that it is here
/// 	@defgroup InverseFineStructureConstant inverse fine-structure constant  
/// 	@ingroup ConversionFactors

/// 	@defgroup InverseMeter inverse meter
/// 	@ingroup ConversionFactors

/// 	@defgroup Joule Joule
/// 	@ingroup ConversionFactors

/// 	@defgroup Kelvin Kelvin
/// 	@ingroup ConversionFactors

/// 	@defgroup Kilogram Kilogram
/// 	@ingroup ConversionFactors



/// @defgroup X-ray X-ray values
/// @ingroup NISTConst

/// 	@defgroup AngstromStar Angstrom star  
/// 	@ingroup X-ray

/// 	@defgroup Copper Copper 
/// 	@ingroup X-ray

/// 	@defgroup Molybdenum Molybdenum  
/// 	@ingroup X-ray

/// 	@defgroup Sillicon Sillicon
/// 	@ingroup X-ray

namespace NISTConst
{

	/// @addtogroup Sillicon
	/// @{
	const double latticeSpacingOfSilicon =									192.0155714e-12;			/**< \f$d_{220} \ (m)\f$  {220} lattice spacing of silicon in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double latticeSpacingOfSiliconUncertainty =						0.0000032e-12; 				/**< \f$d_{220} \ (m)\f$  Uncertainty in {220} lattice spacing of silicon in meters.*/ 
	#endif
	/// @}

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
	/// @addtogroup AngstromStar
	/// @{
	const double AngstromStar =                                               1.00001495e-10;        0.00000090e-10;        m
	#ifdef NISTCONST_UNCERTAINTY

	#endif  
	/// @}
	
	/// @addtogroup AtomicMassConstant
	/// @{
	const double atomicMassConstant =                                       1.660539040e-27;       0.000000020e-27;       kg
	const double atomicMassConstantInJ =                     1.492418062e-10;       0.000000018e-10;       J
	const double atomicMassConstantInMeV =               931.4940954;             0.0000057;               MeV
	#ifdef NISTCONST_UNCERTAINTY

	#endif  
	/// @}
	
	/// @addtogroup AtomicMassUnit
	/// @{
	const double atomic mass unit-electron volt relationship                 931.4940954e6;          0.0000057e6;            eV
	const double atomic mass unit-hartree relationship                       3.4231776902e7;        0.0000000016e7;        E_h
	const double atomic mass unit-hertz relationship                         2.2523427206e23;       0.0000000010e23;       Hz
	const double atomic mass unit-inverse meter relationship                 7.5130066166e14;       0.0000000034e14;       m^-1
	const double atomic mass unit-joule relationship                         1.492418062e-10;       0.000000018e-10;       J
	const double atomic mass unit-kelvin relationship                        1.08095438e13;         0.00000062e13;         K
	const double atomic mass unit-kilogram relationship                      1.660539040e-27;       0.000000020e-27;       kg
	#ifdef NISTCONST_UNCERTAINTY

	#endif  
	/// @}
	*/
	
	/// @addtogroup AtomicUnit
	/// @{
	const double atomicUnitOf1stHyperpolarizability =						3.206361329e-53;			/**< \f$\frac{e^3 a_0^3}{E_h^2} \ (\frac{C^3 m^3}{J^2})\f$ Atomic unit of 1st hyperpolarizability.*/
	const double atomicUnitOf2ndHyperpolarizability =						6.235380085e-65;			/**< \f$\frac{e^4 a_0^4}{E_h^3} \ (\frac{C^4 m^4}{J^3})\f$ Atomic unit of 2nd hyperpolarizability.*/
	const double atomicUnitOfAction =										1.054571800e-34;			/**< \f$\hbar \ (J s)\f$ Atomic unit of action.*/ 
	const double atomicUnitOfCharge =										1.6021766208e-19;			/**< \f$e \ (C)\f$  Atomic unit of charge.*/ 
	const double atomicUnitOfChargeDensity =								1.0812023770e12;			/**< \f$\frac{e}{a_0^3} \ (\frac{C}{m^3})\f$ Atomic unit of charge density.*/ 
	const double atomicUnitOfCurrent =										6.623618183e-3;				/**< \f$\frac{e E_h}{\hbar} \ (A)\f$ Atomic unit of current.*/ 
	const double atomicUnitOfElectricDipoleMoment =							8.478353552e-30;			/**< \f$e a_0 \ (C m)\f$ Atomic unit of electric dipole moment. */ 
	const double atomicUnitOfElectricField =								5.142206707e11;				/**< \f$\frac{E_h}{e a_0} \ (\frac{V}{m})\f$ Atomic unit of electric field.*/ 
	const double atomicUnitOfElectricFieldGradient =						9.717362356e21;				/**< \f$\frac{E_h}{e a_0^2}\ (\frac{V}{m^2})\f$ Atomic unit of electric field gradient.*/ 
	const double atomicUnitOfElectricPolarizability =						1.6487772731e-41;			/**< \f$\frac{e^2 a_0^2}{E_h} \ (\frac{C^2 m^2}{J})\f$ Atomic unit of electric polarizability. */ 
	const double atomicUnitOfElectricPotential =							27.21138602;				/**< \f$ \frac{E_h}{e}\ (V)\f$ Atomic unit of electric potential.*/ 
	const double atomicUnitOfElectricQuadrupoleMoment =						4.486551484e-40;			/**< \f$e a_0^2 \ (C m^2)\f$ Atomic unit of electric quadrupole moment.*/ 
	const double atomicUnitOfEnergy =										4.359744650e-18;			/**< \f$E_h \ (J)\f$ Atomic unit of energy.*/ 
	const double atomicUnitOfForce =										8.23872336e-8;				/**< \f$\frac{E_h}{a_0} \ (N)\f$ Atomic unit of force.*/ 
	const double atomicUnitOfLength =										0.52917721067e-10;			/**< \f$a_0 \ (m)\f$ Atomic unit of length.*/ 
	const double atomicUnitOfMagneticDipoleMoment =							1.854801999e-23;			/**< \f$\frac{\hbar e}{m_e} \ (\frac{J}{T})\f$ Atomic unit of magnetic dipole moment.*/ 
	const double atomicUnitOfMagneticFluxDensity =							2.350517550e5;				/**< \f$\frac{\hbar}{e a_0^2} \ (T)\f$ Atomic unit of magnetic flux density.*/ 
	const double atomicUnitOfMagnetizability =								7.8910365886e-29;			/**< \f$\frac{e^2a_0^2}{m_e} \ (\frac{J}{T^2})\f$ Atomic unit of magnetizability.*/ 
	const double atomicUnitOfMass =											9.10938356e-31;				/**< \f$m_e \ (kg)\f$ Atomic unit of mass.*/ 
	const double atomicUnitOfMomentum =										1.992851882e-24;			/**< \f$\frac{\hbar}{a_0} \ (\frac{kg m}{s})\f$ Atomic unit of momentum.*/ 
	const double atomicUnitOfPermittivity =									1.112650056e-10;			/**< \f$\frac{e^2}{a_0 E_h} \ (\frac{F}{m})\f$ Atomic unit of permittivity. */ 
	const double atomicUnitOfTime =											2.418884326509e-17;			/**< \f$\frac{\hbar}{E_h} \ (s)\f$ Atomic unit of time.*/ 
	const double atomicUnitOfVelocity =										2.18769126277e6;			/**< \f$\frac{a_0 E_h}{\hbar} \ (\frac{m}{s})\f$ Atomic unit of velocity.*/ 

	#ifdef NISTCONST_UNCERTAINTY
	const double atomicUnitOf1stHyperpolarizabilityUncertainty =			0.000000020e-53;			/**< \f$\frac{e^3 a_0^3}{E_h^2} \ (\frac{C^3 m^3}{J^2})\f$ Uncertainty in atomic unit of 1st hyperpolarizability.*/
	const double atomicUnitOf2ndHyperpolarizabilityUncertainty =			0.000000077e-65;			/**< \f$\frac{e^4 a_0^4}{E_h^3} \ (\frac{C^4 m^4}{J^3})\f$ Uncertainty in atomic unit of 2nd hyperpolarizability.*/
	const double atomicUnitOfActionUncertainty =							0.000000013e-34;			/**< \f$\hbar \ (J s)\f$ Uncertainty in atomic unit of action.*/ 
	const double atomicUnitOfChargeUncertainty =							0.0000000098e-19;			/**< \f$e \ (C)\f$ Uncertainty in atomic unit of charge.*/ 
	const double atomicUnitOfChargeDensityUncertainty =						0.0000000067e12;			/**< \f$\frac{e}{a_0^3} \ (\frac{C}{m^3})\f$ Uncertainty in atomic unit of charge density.*/ 
	const double atomicUnitOfCurrentUncertainty =							0.000000041e-3;				/**< \f$ \frac{e E_h}{\hbar} \ (A)\f$ Uncertainty in atomic unit of current.*/ 
	const double atomicUnitOfElectricDipoleMomentUncertainty =				0.000000052e-30;			/**< \f$ e a_0 \ (C m)\f$ Uncertainty in atomic unit of electric dipole moment. */ 
	const double atomicUnitOfElectricFieldUncertainty = 					0.000000032e11;				/**< \f$\frac{E_h}{e a_0} \ (\frac{V}{m})\f$ Uncertainty in atomic unit of electric field.*/ 
	const double atomicUnitOfElectricFieldGradientUncertainty =				0.000000060e21;				/**< \f$\frac{E_h}{e a_0^2}\ (\frac{V}{m^2})\f$ Uncertainty in atomic unit of electric field gradient.*/ 
	const double atomicUnitOfElectricPolarizabilityUncertainty =			0.0000000011e-41;			/**< \f$\frac{e^2 a_0^2}{E_h} \ (\frac{C^2 m^2}{J})\f$ Uncertainty in atomic unit of electric polarizability. */ 
	const double atomicUnitOfElectricPotentialUncertainty =					0.00000017;					/**< \f$ \frac{E_h}{e}\ (V)\f$ Uncertainty in atomic unit of electric potential.*/ 
	const double atomicUnitOfElectricQuadrupoleMomentUncertainty =			0.000000028e-40;			/**< \f$e a_0^2 \ (C m^2)\f$ Uncertainty in atomic unit of electric quadrupole moment.*/ 
	const double atomicUnitOfEnergyUncertainty =							0.000000054e-18;			/**< \f$E_h \ (J)\f$ Uncertainty in atomic unit of energy.*/ 
	const double atomicUnitOfForceUncertainty =								0.00000010e-8;				/**< \f$\frac{E_h}{a_0} \ (N)\f$ Uncertainty in atomic unit of force.*/ 
	const double atomicUnitOfLengthUncertainty =							0.00000000012e-10;			/**< \f$a_0 \ (m)\f$ Uncertainty in atomic unit of length.*/ 
	const double atomicUnitOfMagneticDipoleMomentUncertainty =				0.000000011e-23;			/**< \f$\frac{\hbar e}{m_e} \ (\frac{J}{T})\f$ Uncertainty in atomic unit of magnetic dipole moment.*/ 
	const double atomicUnitOfMagneticFluxDensityUncertainty =				0.000000014e5;				/**< \f$\frac{\hbar}{e a_0^2} \ (T)\f$ Uncertainty in atomic unit of magnetic flux density.*/ 
	const double atomicUnitOfMagnetizabilityUncertainty =					0.0000000090e-29;			/**< \f$\frac{e^2a_0^2}{m_e} \ (\frac{J}{T^2})\f$ Uncertainty in atomic unit of magnetizability.*/ 
	const double atomicUnitOfMassUncertainty =								0.00000011e-31;				/**< \f$m_e \ (kg)\f$ Uncertainty in atomic unit of mass.*/ 
	const double atomicUnitOfMomentumUncertainty =							0.000000024e-24;			/**< \f$\frac{\hbar}{a_0} \ (\frac{kg m}{s})\f$ Uncertainty in atomic unit of momentum.*/ 
	const double atomicUnitOfPermittivityUncertainty =                      0.0;						/**< \f$\frac{e^2}{a_0 E_h} \ (\frac{F}{m})\f$ Uncertainty in atomic unit of permittivity. Note should be 0.0 since it is a defined value.*/ 
	const double atomicUnitOfTimeUncertainty =								0.000000000014e-17;			/**< \f$\frac{\hbar}{E_h} \ (s)\f$ Uncertainty in atomic unit of time.*/ 
	const double atomicUnitOfVelocityUncertainty =							0.00000000050e6;			/**< \f$\frac{a_0 E_h}{\hbar} \ (\frac{m}{s})\f$ Uncertainty in atomic unit of velocity.*/ 
	#endif  
	/// @}
	
	/// @addtogroup AvogadroConstant 
	/// @{
	const double AvogadroConstant =											6.022140857e23;				/**< \f$N_A \ (\frac{1}{mol})\f$ Avogadro constant.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double AvogadroConstantUncertainty =								0.000000074e23;				/**< \f$N_A \ (\frac{1}{mol})\f$ Uncertainty in Avogadro constant.*/ 
	#endif  
	/// @}

	/// @addtogroup BohrMagneton
	/// @{
	const double BohrMagneton =												927.4009994e-26;			/**< \f$\mu_B \ (\frac{J}{T})\f$ Bohr magneton in joules per tesla.*/ 
	const double BohrMagnetonIneVPerT =										5.7883818012e-5;			/**< \f$\mu_B \ (\frac{eV}{T})\f$ Bohr magneton in electron volts per tesela.*/ 
	const double BohrMagnetonInHzPerT =										13.996245042e9;				/**< \f$\frac{\mu_B}{h} \ (\frac{Hz}{T})\f$ Bohr magneton in hertz per tesela.*/ 
	const double BohrMagnetonInInversemPerT	=								46.68644814;				/**< \f$\frac{\mu_B}{hc} \ (\frac{1}{m T})\f$ Bohr magneton in inverse meters tesla.*/ 
	const double BohrMagnetonInKPerT =										0.67171405;					/**< \f$\frac{\mu_B}{k} \ (\frac{K}{T})\f$ Bohr magneton in kelvin per tesla.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double BohrMagnetonUncertainty =									0.0000057e-26;				/**< \f$\mu_B \ (\frac{J}{T})\f$ Uncertainty in Bohr magneton in joules per tesla.*/ 
	const double BohrMagnetonIneVPerTUncertainty =							0.0000000026e-5;			/**< \f$\mu_B \ (\frac{eV}{T})\f$ Uncertainty in Bohr magneton in electron volts per tesela.*/ 
	const double BohrMagnetonInHzPerTUncertainty =							0.000000086e9;				/**< \f$\frac{\mu_B}{h} \ (\frac{Hz}{T})\f$ Uncertainty in Bohr magneton in hertz per tesela.*/ 
	const double BohrMagnetonInInversemPerTUncertainty	=					0.00000029;					/**< \f$\frac{\mu_B}{hc} \ (\frac{1}{m T})\f$ Uncertainty in Bohr magneton in inverse meters tesla.*/ 
	const double BohrMagnetonInKPerTUncertainty =							0.00000039;					/**< \f$\frac{\mu_B}{k} \ (\frac{K}{T})\f$ Uncertainty in Bohr magneton in kelvin per tesla.*/ 
	#endif  
	/// @}
	
	/// @addtogroup BohrRadius
	/// @{
	const double BohrRadius =												0.52917721067e-10;			/**< \f$a_0 \ (m)\f$ Bohr radius in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double BohrRadiusUncertainty =									0.00000000012e-10;			/**< \f$a_0 \ (m)\f$ Uncertainty in Bohr radius in meters.*/ 
	#endif  
	/// @}
	
	/// @addtogroup BoltzmannConstant
	/// @{
	const double BoltzmannConstant =										1.38064852e-23;				/**< \f$k \ (\frac{J}{K})\f$  Boltzmann constant in joules per kelvin.*/
	const double BoltzmannConstantIneVPerK =								8.6173303e-5;				/**< \f$k \ (\frac{J}{K})\f$  Boltzmann constant in electron volts per kelvin.*/
	const double BoltzmannConstantInHzPerK =								2.0836612e10;				/**< \f$\frac{k}{h} \ (\frac{Hz}{K})\f$  Boltzmann constant in hertz per kelvin.*/
	const double BoltzmannConstantInInversemK =								69.503457;					/**< \f$\frac{k}{h c} \ (\frac{1}{m K})\f$  Boltzmann constant in inverse meters per kelvin.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double BoltzmannConstantUncertainty =								0.00000079e-23;				/**< \f$k \ (\frac{J}{K})\f$ Uncertainty in Boltzmann constant in joules per kelvin.*/
	const double BoltzmannConstantIneVPerKUncertainty =						0.0000050e-5;				/**< \f$k \ (\frac{J}{K})\f$ Uncertainty in Boltzmann constant in electron volts per kelvin.*/
	const double BoltzmannConstantInHzPerKUncertainty =						0.0000012e10;				/**< \f$\frac{k}{h} \ (\frac{Hz}{K})\f$ Uncertainty in Boltzmann constant in hertz per kelvin.*/
	const double BoltzmannConstantInInversemKUncertainty =					0.000040; 					/**< \f$\frac{k}{h c} \ (\frac{1}{m K})\f$ Uncertainty in Boltzmann constant in inverse meters per kelvin.*/
	#endif  
	/// @}
	
	
	/// @addtogroup ImpedanceOfVacuum
	/// @{
	const double impedanceOfVacuum =										376.730313461;				/**< \f$Z_0 \ (\Omega)\f$ Characteristic impedance of vacuum in ohm.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double impedanceOfVacuum =										0.0;						/**< \f$Z_0 \ (\Omega)\f$ Uncertainty in characteristic impedance of vacuum in ohm. Note should be 0.0 since it is a defined value.*/ 
	#endif  
	/// @}
	
	/// @addtogroup Electron
	/// @{
	const double classicalElectronRadius =									2.8179403227e-15;			/**< \f$r_e \ (m)\f$ Classical electron radius in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double classicalElectronRadiusUncertainty =						0.0000000019e-15;			/**< \f$r_e \ (m)\f$ Uncertainty in classical electron radiusin meters.*/
	#endif  
	/// @}
	
	/// @addtogroup ComptonWavelength
	/// @{
	const double ComptonWavelength =										2.4263102367e-12;			/**< \f$\lambda_C \ (m)\f$ Compton wavelength in meters.*/
	const double ComptonWavelengthOver2Pi =									386.15926764e-15;			/**< \f$\lambdabar_C \ (m)\f$ Compton wavelength over 2 pi in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double ComptonWavelengthUncertainty =								0.0000000011e-12;			/**< \f$\lambda_C \ (m)\f$ Uncertainty in Compton wavelength in meters.*/
	const double ComptonWavelengthOver2PiUncertainty =						0.00000018e-15;				/**< \f$\lambdabar_C \ (m)\f$ Uncertainty in Compton wavelength over 2 pi in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup ConductanceQuantum
	/// @{
	const double conductanceQuantum =										7.7480917310e-5;			/**< \f$G_0 \ (S)\f$ Conductance quantum in siemens.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conductanceQuantumUncertainty =							0.0000000018e-5;			/**< \f$G_0 \ (S)\f$ Uncertainty in conductance quantum in siemens.*/
	#endif  
	/// @}
	
	/// @addtogroup ConventionalJosephsonConstant
	/// @{
	const double conventionalJosephsonConstant =							483597.9e9;					/**< \f$K_{J-90} \ (\frac{Hz}{V})\f$ Conventional value of Josephson constant in hertz per volt.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conventionalJosephsonConstantUncertainty =					0.0;						/**< \f$K_{J-90} \ (\frac{Hz}{V})\f$ Uncertainty in conventional value of Josephson constant in hertz per volt. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	
	/// @addtogroup ConventionalvonKlitzingConstant
	/// @{
	const double conventionalvonKlitzingConstant =							25812.807;					/**< \f$R_{K-90} \ (\Omega)\f$ Conventional value of von Klitzing constant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conventionalvonKlitzingConstantUncertainty =				25812.807;					/**< \f$R_{K-90} \ (\Omega)\f$ Uncertainty in conventional value of von Klitzing constant. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup Copper
	/// @{
	const double CuXUnit =													1.00207697e-13;				/**< \f$xu(CuK\alpha_1) \ (m)\f$ Cu X unit in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double CuXUnitUncertainty =										0.00000028e-13;				/**< \f$xu(CuK\alpha_1) \ (m)\f$ Uncertainty in Cu X unit in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup Deuteron
	/// @{ 
	const double deuterongFactor =											0.8574382311;				/**< \f$g_D \ (1)\f$ Deuteron g factor.*/   
	const double deuteronElectronMagneticMomentRatio =						-4.664345535e-4;			/**< \f$\frac{\mu_D}{\mu_e} \ (1)\f$ Deuteron-electron magnetic moment ratio.*/         
	const double deuteronElectronMassRatio =								3670.48296785;				/**< \f$\frac{m_D}{m_e} \ (1)\f$ Deuteron-electron mass ratio.*/            
	const double deuteronMagneticMoment =									0.4330735040e-26;			/**< \f$\mu_D \ (\frac{J}{T})\f$ Deuteron magnetic moment in joules per tesela.*/
	const double deuteronMagneticMomentToBohrMagnetonRatio =				0.4669754554e-3;			/**< \f$\frac{\mu_D}{\mu_B} \ (1)\f$ Deuteron magnetic moment to Bohr magneton ratio.*/        
	const double deuteronMagneticMomentToNuclearMagnetonRatio =				0.8574382311;				/**< \f$\frac{\mu_D}{\mu_N} \ (1)\f$ Deuteron magnetic moment to nuclear magneton ratio.*/            
	const double deuteronMass =												3.343583719e-27;			/**< \f$m_D \ (kg)\f$ Deuteron mass in kg.*/
	const double deuteronMassInJ =											3.005063183e-10;			/**< \f$m_D \ (\frac{J}{c^2})\f$ Deuteron mass in joules per speed of light squared.*/
	const double deuteronMassInMeV =										1875.612928;				/**< \f$m_D \ (\frac{MeV}{c^2})\f$ Deuteron mass in MeV per speed of light squared.*/
	const double deuteronMassInu =											2.013553212745;				/**< \f$m_D \ (u)\f$ Deuteron mass in atomic mass units.*/
	const double deuteronMolarMass =										2.013553212745e-3;			/**< \f$M_D \ (\frac{1}{mol})\f$ Deuteron molar mass in inverse mols.*/
	const double deuteronNeutronMagneticMomentRatio =						-0.44820652;				/**< \f$\frac{\mu_D}{\mu_n} \ (1)\f$ Deuteron-neutron magnetic moment ratio.*/              
	const double deuteronProtonMagneticMomentRatio =						0.3070122077;				/**< \f$\frac{\mu_D}{\mu_p} \ (1)\f$ Deuteron-neutron magnetic moment ratio.*/            
	const double deuteronProtonMassRatio =									1.99900750087;				/**< \f$\frac{m_D}{m_p} \ (1)\f$ Deuteron-proton magnetic moment ratio.*/          
	const double deuteronrmsChargeRadius =									2.1413e-15;					/**< \f$r_D \ (m)\f$ Deuteron rms charge radius in meters.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double deuterongFactorUncertainty =								0.0000000048;				/**< \f$g_D \ (1)\f$ Uncertainty in deuteron g factor.*/   
	const double deuteronElectronMagneticMomentRatioUncertainty =			0.000000026e-4;				/**< \f$\frac{\mu_D}{\mu_e} \ (1)\f$ Uncertainty in deuteron-electron magnetic moment ratio.*/         
	const double deuteronElectronMassRatioUncertainty =						0.00000013;					/**< \f$\frac{m_D}{m_e} \ (1)\f$ Uncertainty in deuteron-electron mass ratio.*/            
	const double deuteronMagneticMomentUncertainty =						0.0000000036e-26;			/**< \f$\mu_D \ (\frac{J}{T})\f$ Uncertainty in deuteron magnetic moment in joules per tesela.*/
	const double deuteronMagneticMomentToBohrMagnetonRatioUncertainty =		0.0000000026e-3;			/**< \f$\frac{\mu_D}{\mu_B} \ (1)\f$ Uncertainty in deuteron magnetic moment to Bohr magneton ratio.*/        
	const double deuteronMagneticMomentToNuclearMagnetonRatioUncertainty =	0.0000000048;				/**< \f$\frac{\mu_D}{\mu_N} \ (1)\f$ Uncertainty in deuteron magnetic moment to nuclear magneton ratio.*/            
	const double deuteronMassUncertainty =									0.000000041e-27;			/**< \f$m_D \ (kg)\f$ Uncertainty in deuteron mass in kg.*/
	const double deuteronMassInJUncertainty =								0.000000037e-10;			/**< \f$m_D \ (\frac{J}{c^2})\f$ Uncertainty in deuteron mass in joules per speed of light squared.*/
	const double deuteronMassInMeVUncertainty =								0.000012;					/**< \f$m_D \ (\frac{MeV}{c^2})\f$ Uncertainty in deuteron mass in MeV per speed of light squared.*/
	const double deuteronMassInuUncertainty =								0.000000000040;				/**< \f$m_D \ (u)\f$ Uncertainty in deuteron mass in atomic mass units.*/
	const double deuteronMolarMassUncertainty =								0.000000000040e-3;			/**< \f$M_D \ (\frac{1}{mol})\f$ Uncertainty in deuteron molar mass in inverse mols.*/
	const double deuteronNeutronMagneticMomentRatioUncertainty =			0.00000011;					/**< \f$\frac{\mu_D}{\mu_n} \ (1)\f$ Uncertainty in deuteron-neutron magnetic moment ratio.*/              
	const double deuteronProtonMagneticMomentRatioUncertainty =				0.0000000015;				/**< \f$\frac{\mu_D}{\mu_p} \ (1)\f$ Uncertainty in deuteron-neutron magnetic moment ratio.*/            
	const double deuteronProtonMassRatioUncertainty =						0.00000000019;				/**< \f$\frac{m_D}{m_p} \ (1)\f$ Uncertainty in deuteron-proton magnetic moment ratio.*/          
	const double deuteronrmsChargeRadiusUncertainty =						0.0025e-15;					/**< \f$r_D \ (m)\f$ Uncertainty in deuteron rms charge radius in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup ElectricConstant
	/// @{ 
	const double electricConstant =											8.854187817e-12;			/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Electric constant in farad per meter.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double electricConstant =											0.0;						/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Uncertainty in electric constant in farad per meter. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/**< \f$ \ ()\f$ .*/ 
	/* 
	const double electron charge to mass quotient                            -1.758 820 024 e11       0.000000 011 e11        C kg^-1
	const double electron-deuteron mag. mom. ratio                           -2143.923 499            0.000012                
	const double electron-deuteron mass ratio                                2.724 437 107 484e-4    0.000000000 096e-4    
	const double electron g factor                                           -2.002 319 304 361 82    0.000000000000 52     
	const double electron gyromag. ratio                                     1.760 859 644 e11        0.000000011 e11        s^-1 T^-1
	const double electron gyromag. ratio over 2 pi                           28 024.951 64            0.000 17                 MHz T^-1
	const double electron-helion mass ratio                                  1.819 543 074 854e-4    0.000000000 088e-4    
	const double electron mag. mom.                                          -928.476 4620e-26       0.0000057e-26          J T^-1
	const double electron mag. mom. anomaly                                  1.159 652 180 91e-3     0.000000000 26e-3     
	const double electron mag. mom. to Bohr magneton ratio                   -1.001 159 652 180 91    0.000000000000 26     
	const double electron mag. mom. to nuclear magneton ratio                -1838.281 972 34         0.000000 17             
	const double electron mass                                               9.109 383 56e-31        0.000000 11e-31        kg
	const double electron mass energy equivalent                             8.187 105 65e-14        0.000000 10e-14        J
	const double electron mass energy equivalent in MeV                      0.510 998 9461           0.0000000031           MeV
	const double electron mass in u                                          5.485 799 090 70e-4     0.000000000 16e-4     u
	const double electron molar mass                                         5.485 799 090 70e-7     0.000000000 16e-7     kg mol^-1
	const double electron-muon mag. mom. ratio                               206.766 9880             0.0000046               
	const double electron-muon mass ratio                                    4.836 331 70e-3         0.000000 11e-3         
	const double electron-neutron mag. mom. ratio                            960.920 50               0.000 23                 
	const double electron-neutron mass ratio                                 5.438 673 4428e-4       0.0000000027e-4       
	const double electron-proton mag. mom. ratio                             -658.210 6866            0.0000020               
	const double electron-proton mass ratio                                  5.446 170 213 52e-4     0.000000000 52e-4     
	const double electron-tau mass ratio                                     2.875 92e-4             0.000 26e-4             
	const double electron to alpha particle mass ratio                       1.370 933 554 798e-4    0.000000000 045e-4    
	const double electron to shielded helion mag. mom. ratio                 864.058 257              0.000010                
	const double electron to shielded proton mag. mom. ratio                 -658.227 5971            0.0000072               
	const double electron-triton mass ratio                                  1.819 200 062 203e-4    0.000000000 084e-4    
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double electron volt                                               1.602 176 6208e-19      0.0000000098e-19      J
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double electron volt-atomic mass unit relationship                 1.073 544 1105e-9       0.0000000066e-9       u
	const double electron volt-hartree relationship                          3.674 932 248e-2        0.000000023e-2        E_h
	const double electron volt-hertz relationship                            2.417 989 262 e14        0.000000015 e14        Hz
	const double electron volt-inverse meter relationship                    8.065 544 005 e5         0.000000050 e5         m^-1
	const double electron volt-joule relationship                            1.602 176 6208e-19      0.0000000098e-19      J
	const double electron volt-kelvin relationship                           1.160 452 21 e4          0.000000 67 e4          K
	const double electron volt-kilogram relationship                         1.782 661 907e-36       0.000000011e-36       kg
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double elementary charge                                           1.602 176 6208e-19      0.0000000098e-19      C
	const double elementary charge over h                                    2.417 989 262 e14        0.000000015 e14        A J^-1
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double Faraday constant                                            96 485.332 89            0.000 59                 C mol^-1
	const double Faraday constant for conventional electric current          96 485.3251              0.0012                   C_90 mol^-1
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double Fermi coupling constant                                     1.166 3787e-5           0.0000006e-5           GeV^-2
	const double fine-structure constant                                     7.297 352 5664e-3       0.0000000017e-3       
	const double first radiation constant                                    3.741 771 790e-16       0.000000046e-16       W m^2
	const double first radiation constant for spectral radiance              1.191 042 953e-16       0.000000015e-16       W m^2 sr^-1
	const double hartree-atomic mass unit relationship                       2.921 262 3197e-8       0.0000000013e-8       u
	const double hartree-electron volt relationship                          27.211 386 02            0.000000 17             eV
	const double Hartree energy                                              4.359 744 650e-18       0.000000054e-18       J
	const double Hartree energy in eV                                        27.211 386 02            0.000000 17             eV
	const double hartree-hertz relationship                                  6.579 683 920 711 e15    0.000000000 039 e15    Hz
	const double hartree-inverse meter relationship                          2.194 746 313 702 e7     0.000000000 013 e7     m^-1
	const double hartree-joule relationship                                  4.359 744 650e-18       0.000000054e-18       J
	const double hartree-kelvin relationship                                 3.157 7513 e5            0.0000018 e5            K
	const double hartree-kilogram relationship                               4.850 870 129e-35       0.000000060e-35       kg
	const double helion-electron mass ratio                                  5495.885 279 22          0.000000 27             
	const double helion g factor                                             -4.255 250 616           0.000000050            
	const double helion mag. mom.                                            -1.074 617 522e-26      0.000000014e-26       J T^-1
	const double helion mag. mom. to Bohr magneton ratio                     -1.158 740 958e-3       0.000000014e-3        
	const double helion mag. mom. to nuclear magneton ratio                  -2.127 625 308           0.000000025            
	const double helion mass                                                 5.006 412 700e-27       0.000000062e-27       kg
	const double helion mass energy equivalent                               4.499 539 341e-10       0.000000055e-10       J
	const double helion mass energy equivalent in MeV                        2808.391 586             0.000017                MeV
	const double helion mass in u                                            3.014 932 246 73         0.000000000 12         u
	const double helion molar mass                                           3.014 932 246 73e-3     0.000000000 12e-3     kg mol^-1
	const double helion-proton mass ratio                                    2.993 152 670 46         0.000000000 29         
	const double hertz-atomic mass unit relationship                         4.439 821 6616e-24      0.0000000020e-24      u
	const double hertz-electron volt relationship                            4.135 667 662e-15       0.000000025e-15       eV
	const double hertz-hartree relationship                                  1.519 829 846 0088e-16  0.000000000 0090e-16  E_h
	const double hertz-inverse meter relationship                            3.335 640 951...e-9     (exact)                  m^-1
	const double hertz-joule relationship                                    6.626 070 040e-34       0.000000081e-34       J
	const double hertz-kelvin relationship                                   4.799 2447e-11          0.0000028e-11          K
	const double hertz-kilogram relationship                                 7.372 497 201e-51       0.000000091e-51       kg
	const double inverse fine-structure constant                             137.035 999 139          0.000000031            
	const double inverse meter-atomic mass unit relationship                 1.331 025 049 00e-15    0.000000000 61e-15    u
	const double inverse meter-electron volt relationship                    1.239 841 9739e-6       0.0000000076e-6       eV
	const double inverse meter-hartree relationship                          4.556 335 252 767e-8    0.000000000 027e-8    E_h
	const double inverse meter-hertz relationship                            299 792 458              (exact)                  Hz
	const double inverse meter-joule relationship                            1.986 445 824e-25       0.000000024e-25       J
	const double inverse meter-kelvin relationship                           1.438 777 36e-2         0.000000 83e-2         K
	const double inverse meter-kilogram relationship                         2.210 219 057e-42       0.000000027e-42       kg
	const double inverse of conductance quantum                              12 906.403 7278          0.0000029               ohm
	const double Josephson constant                                          483 597.8525 e9          0.0030 e9                Hz V^-1
	const double joule-atomic mass unit relationship                         6.700 535 363 e9         0.000000082 e9         u
	const double joule-electron volt relationship                            6.241 509 126 e18        0.000000038 e18        eV
	const double joule-hartree relationship                                  2.293 712 317 e17        0.000000028 e17        E_h
	const double joule-hertz relationship                                    1.509 190 205 e33        0.000000019 e33        Hz
	const double joule-inverse meter relationship                            5.034 116 651 e24        0.000000062 e24        m^-1
	const double joule-kelvin relationship                                   7.242 9731 e22           0.0000042 e22           K
	const double joule-kilogram relationship                                 1.112 650 056...e-17    (exact)                  kg
	const double kelvin-atomic mass unit relationship                        9.251 0842e-14          0.0000053e-14          u
	const double kelvin-electron volt relationship                           8.617 3303e-5           0.0000050e-5           eV
	const double kelvin-hartree relationship                                 3.166 8105e-6           0.0000018e-6           E_h
	const double kelvin-hertz relationship                                   2.083 6612 e10           0.0000012 e10           Hz
	const double kelvin-inverse meter relationship                           69.503 457               0.000040                m^-1
	const double kelvin-joule relationship                                   1.380 648 52e-23        0.000000 79e-23        J
	const double kelvin-kilogram relationship                                1.536 178 65e-40        0.000000 88e-40        kg
	const double kilogram-atomic mass unit relationship                      6.022 140 857 e26        0.000000074 e26        u
	const double kilogram-electron volt relationship                         5.609 588 650 e35        0.000000034 e35        eV
	const double kilogram-hartree relationship                               2.061 485 823 e34        0.000000025 e34        E_h
	const double kilogram-hertz relationship                                 1.356 392 512 e50        0.000000017 e50        Hz
	const double kilogram-inverse meter relationship                         4.524 438 411 e41        0.000000056 e41        m^-1
	const double kilogram-joule relationship                                 8.987 551 787... e16     (exact)                  J
	const double kilogram-kelvin relationship                                6.509 6595 e39           0.0000037 e39           K
	const double lattice parameter of silicon                                543.102 0504e-12        0.0000089e-12          m
	const double Loschmidt constant (273.15 K, 100 kPa)                      2.651 6467 e25           0.0000015 e25           m^-3
	const double Loschmidt constant (273.15 K, 101.325 kPa)                  2.686 7811 e25           0.0000015 e25           m^-3
	const double mag. constant                                               12.566 370 614...e-7    (exact)                  N A^-2
	const double mag. flux quantum                                           2.067 833 831e-15       0.000000013e-15       Wb
	const double molar gas constant                                          8.314 4598               0.0000048               J mol^-1 K^-1
	const double molar mass constant                                         1e-3                    (exact)                  kg mol^-1
	const double molar mass of carbon-12                                     12e-3                   (exact)                  kg mol^-1
	const double molar Planck constant                                       3.990 312 7110e-10      0.0000000018e-10      J s mol^-1
	const double molar Planck constant times c                               0.119 626 565 582        0.000000000 054        J m mol^-1
	const double molar volume of ideal gas (273.15 K, 100 kPa)               22.710 947e-3           0.000013e-3            m^3 mol^-1
	const double molar volume of ideal gas (273.15 K, 101.325 kPa)           22.413 962e-3           0.000013e-3            m^3 mol^-1
	const double molar volume of silicon                                     12.058 832 14e-6        0.000000 61e-6         m^3 mol^-1
	
	
	const double Mo x unit    1.002 099 52e-13        0.000000 53e-13        m
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double muon Compton wavelength                                     11.734 441 11e-15       0.000000 26e-15        m
	const double muon Compton wavelength over 2 pi                           1.867 594 308e-15       0.000000042e-15       m
	const double muon-electron mass ratio                                    206.768 2826             0.0000046               
	const double muon g factor                                               -2.002 331 8418          0.0000000013           
	const double muon mag. mom.                                              -4.490 448 26e-26       0.000000 10e-26        J T^-1
	const double muon mag. mom. anomaly                                      1.165 920 89e-3         0.000000 63e-3         
	const double muon mag. mom. to Bohr magneton ratio                       -4.841 970 48e-3        0.000000 11e-3         
	const double muon mag. mom. to nuclear magneton ratio                    -8.890 597 05            0.000000 20             
	const double muon mass                                                   1.883 531 594e-28       0.000000048e-28       kg
	const double muon mass energy equivalent                                 1.692 833 774e-11       0.000000043e-11       J
	const double muon mass energy equivalent in MeV                          105.658 3745             0.0000024               MeV
	const double muon mass in u                                              0.113 428 9257           0.0000000025           u
	const double muon molar mass                                             0.113 428 9257e-3       0.0000000025e-3       kg mol^-1
	const double muon-neutron mass ratio                                     0.112 454 5167           0.0000000025           
	const double muon-proton mag. mom. ratio                                 -3.183 345 142           0.000000071            
	const double muon-proton mass ratio                                      0.112 609 5262           0.0000000025           
	const double muon-tau mass ratio                                         5.946 49e-2             0.000 54e-2             
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}	
	const double natural unit of action                                      1.054 571 800e-34       0.000000013e-34       J s
	const double natural unit of action in eV s                              6.582 119 514e-16       0.000000040e-16       eV s
	const double natural unit of energy                                      8.187 105 65e-14        0.000000 10e-14        J
	const double natural unit of energy in MeV                               0.510 998 9461           0.0000000031           MeV
	const double natural unit of length                                      386.159 267 64e-15      0.000000 18e-15        m
	const double natural unit of mass                                        9.109 383 56e-31        0.000000 11e-31        kg
	const double natural unit of mom.um                                      2.730 924 488e-22       0.000000034e-22       kg m s^-1
	const double natural unit of mom.um in MeV/c                             0.510 998 9461           0.0000000031           MeV/c
	const double natural unit of time                                        1.288 088 667 12e-21    0.000000000 58e-21    s
	const double natural unit of velocity                                    299 792 458              (exact)                  m s^-1
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	*/
	
	/// @addtogroup Neutron
	/// @{
	const double neutronComptonWavelength =											1.31959090481e-15;			/**< \f$\lambda_{C,n} \ (m)\f$ Neutron Compton wavelength in meters.*/
	const double neutronComptonWavelengthOver2Pi =									0.21001941536e-15;			/**< \f$\lambdabar_{C,n} \ (m)\f$ Neutron Compton wavelength over 2 pi in meters.*/
	const double neutronElectronMagneticMomentRatio =								1.04066882e-3;				/**< \f$\frac{\mu_n}{\mu_e} \ (1)\f$ Neutron-electron magnetic moment ratio.*/
	const double neutronElectronMassRatio =											1838.68366158;				/**< \f$\frac{m_n}{m_e} \ (1)\f$ Neutron-electron mass ratio .*/
	const double neutrongFactor =													-3.82608545;				/**< \f$g_n \ (1)\f$ Neutron g factor.*/
	const double neutronGyromagneticRatio =											1.83247172e8;				/**< \f$\gamma_n \ (\frac{rad Hz}{T})\f$ Neutron gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronGyromagneticRatioOver2Pi =									29.1646933;					/**< \f$\frac{\gamma_n}{2\pi} \ (\frac{rad MHz}{T})\f$ Neutron gyromagnetic ratio over 2 pi in radian megahertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronMagneticMoment =											-0.96623650e-26;			/**< \f$\mu_n \ (\frac{J}{T})\f$ Neutron magnetic moment in joules per tesla.*/
	const double neutronMagneticMomentToBohrMagnetonRatio =							-1.04187563e-3;				/**< \f$\frac{\mu_n}{\mu_B} \ (1)\f$ Neutron magnetic moment to Bohr magneton ratio.*/
	const double neutronMagneticMomentToNuclearMagnetonRatio =						-1.91304273;				/**< \f$\frac{\mu_n}{\mu_N} \ (1)\f$ Neutron magnetic moment to nuclear magneton ratio.*/
	const double neutronMass =														1.674927471e-27;			/**< \f$m_n \ (kg)\f$ Neutron mass in kilograms.*/
	const double neutronMassInJ =													1.505349739e-10;			/**< \f$m_n \ (\frac{J}{c^2})\f$ Neutron mass in joules per speed of light squared.*/
	const double neutronMassInMeV =													939.5654133;				/**< \f$m_n \ (\frac{MeV}{c^2})\f$ Neutron mass in megaelectron volts per speed of light squared.*/
	const double neutronMassInu =													1.00866491588;				/**< \f$m_n \ (u)\f$ Neutron mass in unified atomic mass unit.*/
	const double neutronMolarMass =													1.00866491588e-3;			/**< \f$M_n \ (\frac{kg}{mol})\f$ Neutron molar mass in kilogram per mole.*/
	const double neutronMuonMassRatio =												8.89248408;					/**< \f$\frac{m_n}{m_\mu} \ (1)\f$ Neutron-muon mass ratio.*/
	const double neutronProtonMagneticMomentRatio =									-0.68497934;				/**< \f$\frac{\mu_n}{\mu_p} \ (1)\f$ Neutron-proton magnetic moment ratio.*/
	const double neutronProtonMassDifference =										2.30557377e-30;				/**< \f$m_n - m_p \ (kg)\f$ Neutron-proton mass difference in kilograms.*/
	const double neutronProtonMassDifferenceInJ =									2.07214637e-13;				/**< \f$m_n - m_p \ (\frac{J}{c^2})\f$ Neutron-proton mass difference in joules per speed of light squared.*/
	const double neutronProtonMassDifferenceInMeV =									1.29333205;					/**< \f$m_n - m_p \ (\frac{MeV}{c^2})\f$ Neutron-proton mass difference in megaelectron volts per speed of light squared.*/
	const double neutronProtonMassDifferenceInu =									0.00138844900;				/**< \f$m_n - m_p \ (u)\f$ Neutron-proton mass difference in unified atomic mass unit.*/
	const double neutronProtonMassRatio =											1.00137841898;				/**< \f$\frac{m_n}{m_p} \ (1)\f$ Neutron-proton mass ratio.*/
	const double neutronTauMassRatio =												0.528790;					/**< \f$\frac{m_n}{m_\tau} \ (1)\f$ Neutron-tau mass ratio.*/
	const double neutronToShieldedProtonMagneticMomentRatio =						-0.68499694;				/**< \f$\frac{\mu_n}{\mu'_p} \ (1)\f$ Neutron to shielded proton magnetic moment ratio.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double neutronComptonWavelengthUncertainty =								0.00000000088e-15;			/**< \f$\lambda_{C,n} \ (m)\f$ Uncertainty in neutron Compton wavelength in meters.*/
	const double neutronComptonWavelengthOver2PiUncertainty =						0.00000000014e-15;			/**< \f$\lambdabar_{C,n} \ (m)\f$ Uncertainty in neutron Compton wavelength over 2 pi in meters.*/
	const double neutronElectronMagneticMomentRatioUncertainty =					0.00000025e-3;				/**< \f$\frac{\mu_n}{\mu_e} \ (1)\f$ Uncertainty in neutron-electron magnetic moment ratio.*/
	const double neutronElectronMassRatioUncertainty =								0.00000090;					/**< \f$\frac{m_n}{m_e} \ (1)\f$ Uncertainty in neutron-electron mass ratio .*/
	const double neutrongFactorUncertainty =										0.00000090;					/**< \f$g_n \ (1)\f$ Uncertainty in neutron g factor.*/
	const double neutronGyromagneticRatioUncertainty =								0.00000043e8;				/**< \f$\gamma_n \ (\frac{rad Hz}{T})\f$ Uncertainty in neutron gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronGyromagneticRatioOver2PiUncertainty =						0.0000069;					/**< \f$\frac{\gamma_n}{2\pi} \ (\frac{rad MHz}{T})\f$ Uncertainty in neutron gyromagnetic ratio over 2 pi in radian megahertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronMagneticMomentUncertainty =									0.00000023e-26;				/**< \f$\mu_n \ (\frac{J}{T})\f$ Uncertainty in neutron magnetic moment in joules per tesla.*/
	const double neutronMagneticMomentToBohrMagnetonRatioUncertainty =				0.00000025e-3;				/**< \f$\frac{\mu_n}{\mu_B} \ (1)\f$ Uncertainty in neutron magnetic moment to Bohr magneton ratio.*/
	const double neutronMagneticMomentToNuclearMagnetonRatioUncertainty =			0.00000045;					/**< \f$\frac{\mu_n}{\mu_N} \ (1)\f$ Uncertainty in neutron magnetic moment to nuclear magneton ratio.*/
	const double neutronMassUncertainty =											0.000000021e-27;			/**< \f$m_n \ (kg)\f$ Uncertainty in neutron mass in kilograms.*/
	const double neutronMassInJUncertainty =										0.000000019e-10;			/**< \f$m_n \ (\frac{J}{c^2})\f$ Uncertainty in neutron mass in joules per speed of light squared.*/
	const double neutronMassInMeVUncertainty =										0.0000058;					/**< \f$m_n \ (\frac{MeV}{c^2})\f$ Uncertainty in neutron mass in megaelectron volts per speed of light squared.*/
	const double neutronMassInuUncertainty =										0.00000000049;				/**< \f$m_n \ (u)\f$ Uncertainty in neutron mass in unified atomic mass unit.*/
	const double neutronMolarMassUncertainty =										0.00000000049e-3;			/**< \f$M_n \ (\frac{kg}{mol})\f$ Uncertainty in neutron molar mass in kilogram per mole.*/
	const double neutronMuonMassRatioUncertainty =									0.00000020;					/**< \f$\frac{m_n}{m_\mu} \ (1)\f$ Uncertainty in neutron-muon mass ratio.*/
	const double neutronProtonMagneticMomentRatioUncertainty =						0.00000016;					/**< \f$\frac{\mu_n}{\mu_p} \ (1)\f$ Uncertainty in neutron-proton magnetic moment ratio.*/
	const double neutronProtonMassDifferenceUncertainty =							0.00000085e-30;				/**< \f$m_n - m_p \ (kg)\f$ Uncertainty in neutron-proton mass difference in kilograms.*/
	const double neutronProtonMassDifferenceInJUncertainty =						0.00000076e-13;				/**< \f$m_n - m_p \ (\frac{J}{c^2})\f$ Uncertainty in neutron-proton mass difference in joules per speed of light squared.*/
	const double neutronProtonMassDifferenceInMeVUncertainty =						0.00000048;					/**< \f$m_n - m_p \ (\frac{MeV}{c^2})\f$ Uncertainty in neutron-proton mass difference in megaelectron volts per speed of light squared.*/
	const double neutronProtonMassDifferenceInuUncertainty =						0.00000000051;				/**< \f$m_n - m_p \ (u)\f$ Uncertainty in neutron-proton mass difference in unified atomic mass unit.*/
	const double neutronProtonMassRatioUncertainty =								0.00000000051;				/**< \f$\frac{m_n}{m_p} \ (1)\f$ Uncertainty in neutron-proton mass ratio.*/
	const double neutronTauMassRatioUncertainty =									0.000048;					/**< \f$\frac{m_n}{m_\tau} \ (1)\f$ Uncertainty in neutron-tau mass ratio.*/
	const double neutronToShieldedProtonMagneticMomentRatioUncertainty =			0.00000016;					/**< \f$\frac{\mu_n}{\mu'_p} \ (1)\f$ Uncertainty in neutron to shielded proton magnetic moment ratio.*/
	#endif  
	/// @}
	
	/// @addtogroup
	/// @{            
	const double NewtonianConstantOfGravitation =									6.67408e-11;				/**< \f$G \ (\frac{m^3}{kg s^2})\f$ Newtonian constant of gravitation in meters cubed per kilogram second squared.*/
	const double NewtonianConstantOfGravitationOverhbarcUncertainty =				6.70861e-39;				/**< \f$\frac{G}{\hbar c} \ ((\frac{GeV}{c^2})^-2)\f$ Newtonian constant of gravitation over h-bar c in speed of light to the fourth per gigaelectron volt squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double NewtonianConstantOfGravitation =									0.00031e-11;				/**< \f$G \ (\frac{m^3}{kg s^2})\f$ Uncertainty in Newtonian constant of gravitation in meters cubed per kilogram second squared.*/
	const double NewtonianConstantOfGravitationOverhbarcUncertainty =				0.00031e-39;				/**< \f$\frac{G}{\hbar c} \ ((\frac{GeV}{c^2})^-2)\f$ Uncertainty in Newtonian constant of gravitation over h-bar c in speed of light to the fourth per gigaelectron volt squared.*/
	#endif  
	/// @}
	
	/// @addtogroup
	/// @{
	const double nuclear magneton                                            5.050 783 699e-27       0.000000031e-27       J T^-1/**< \f$ \ ()\f$ .*/
	const double nuclear magneton in eV/T                                    3.152 451 2550e-8       0.0000000015e-8       eV T^-1/**< \f$ \ ()\f$ .*/
	const double nuclear magneton in inverse meters per tesla                2.542 623 432e-2        0.000000016e-2        m^-1 T^-1/**< \f$ \ ()\f$ .*/
	const double nuclear magneton in K/T                                     3.658 2690e-4           0.0000021e-4           K T^-1/**< \f$ \ ()\f$ .*/
	const double nuclear magneton in MHz/T                                   7.622 593 285            0.000000047            MHz T^-1/**< \f$ \ ()\f$ .*/
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup PlanckConstant
	/// @{
	const double PlanckConstant =													6.626070040e-34;			/**< \f$h \ (J s)\f$ Planck constant in joule seconds.*/
	const double PlanckConstantIneVs =												4.135667662e-15;			/**< \f$h \ (eV s)\f$ Planck constant in electron volt seconds.*/
	const double PlanckConstantOver2Pi =											1.054571800e-34;			/**< \f$\hbar \ (J s)\f$ Planck constant over 2 pi in joule seconds.*/
	const double PlanckConstantOver2PiIneVs =										6.582119514e-16;			/**< \f$\hbar \ (eV s)\f$ Planck constant over 2 pi in electron volt seconds.*/
	const double PlanckConstantOver2PiTimescInMeVfm =								197.3269788;				/**< \f$\hbar c \ ()\f$ Planck constant over 2 pi times c in megaelectron volt femtometers.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckConstantUncertainty =										0.000000081e-34;			/**< \f$h \ (J s)\f$ Uncertainty in Planck constant in joule seconds.*/
	const double PlanckConstantIneVsUncertainty =									0.000000025e-15;			/**< \f$h \ (eV s)\f$ Uncertainty in Planck constant in electron volt seconds.*/
	const double PlanckConstantOver2PiUncertainty =									0.000000013e-34;			/**< \f$\hbar \ (J s)\f$ Uncertainty in Planck constant over 2 pi in joule seconds.*/
	const double PlanckConstantOver2PiIneVsUncertainty =							0.000000040e-16;			/**< \f$\hbar \ (eV s)\f$ Uncertainty in Planck constant over 2 pi in electron volt seconds.*/
	const double PlanckConstantOver2PiTimescInMeVfmUncertainty =					0.0000012;					/**< \f$\hbar c \ ()\f$ Uncertainty in Planck constant over 2 pi times c in megaelectron volt femtometers.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckLength
	/// @{
	const double PlanckLength =														1.616229e-35;				/**< \f$l_P \ (m)\f$ Planck length in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckLengthUncertainty =											0.000038e-35;				/**< \f$l_P \ (m)\f$ Uncertainty in Planck length in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckMass
	/// @{
	const double PlanckMass =														2.176470e-8;				/**< \f$m_P \ (kg)\f$ Planck mass in kilograms.*/
	const double PlanckMassInGeV =													1.220910e19;				/**< \f$m_P \ (\frac{GeV}{c^2)\f$ Planck mass in gigaelectron volts per speed of light squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckMassUncertainty =											0.000051e-8;				/**< \f$m_P \ (kg)\f$ Uncertainty in Planck mass in kilograms.*/
	const double PlanckMassInGeVUncertainty =										0.000029e19;				/**< \f$m_P \ (\frac{GeV}{c^2)\f$ Uncertainty in Planck mass in gigaelectron volts per speed of light squared.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckTemperature
	/// @{
	const double PlanckTemperature =												1.416808e32;				/**< \f$T_P \ (K)\f$ Planck temperature in kelvins.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckTemperatureUncertainty =										0.000033e32;				/**< \f$T_P \ (K)\f$ Uncertainty in Planck temperature in kelvins.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckTime
	/// @{
	const double PlanckTime =														5.39116e-44;				/**< \f$t_P \ (s)\f$ Planck time in seconds.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckTimeUncertainty =											0.00013e-44;				/**< \f$t_P \ (s)\f$ Uncertainty in Planck time in seconds.*/
	#endif  
	/// @}
	
	/// @addtogroup Proton
	/// @{
	const double protonChargeToMassQuotient =										9.578833226e7;				/**< \f$\frac{e}{m_p} \ (\frac{C}{kg})\f$ Proton charge to mass quotient in coulombs per kilogram.*/
	const double protonComptonWavelength =											1.32140985396e-15;			/**< \f$\lambda_{C,p} \ (m)\f$ Proton Compton wavelength in meters.*/
	const double protonComptonWavelengthOver2Pi =									0.210308910109e-15;			/**< \f$\lambdabar_{C,p} \ (m)\f$ Proton Compton wavelength over 2 pi in meters.*/
	const double protonElectronMassRatio =											1836.15267389;				/**< \f$\frac{m_p}{m_e} \ (1)\f$ Proton-electron mass ratio.*/
	const double protongFactor =													5.585694702;				/**< \f$g_p \ (1)\f$ Proton g factor.*/
	const double protonGyromagneticRatio =											2.675221900e8;				/**< \f$\gamma_p \ (\frac{rad Hz}{T})\f$ Proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonGyromagneticRatioOver2pi =									42.57747892;				/**< \f$\frac{\gamma_p}{2\pi} \ (\frac{rad MHz}{T})\f$ Proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonMagneticMoment =												1.4106067873e-26;			/**< \f$\mu_p \ (\frac{J}{T})\f$ Proton magnetic moment in joules per tesla.*/
	const double protonMagneticMomentToBohrMagnetonRatio =							1.5210322053e-3;			/**< \f$\frac{\mu_p}{\mu_B} \ (1)\f$ Proton magnetic moment to Bohr magneton ratio.*/
	const double protonMagneticMomentToNuclearMagnetonRatio =						2.7928473508;				/**< \f$\frac{\mu_p}{\mu_N} \ (1)\f$ Proton magnetic moment to nuclear magneton ratio.*/
	const double protonMagneticShieldingCorrection =								25.691e-6;					/**< \f$\sigma'_p \ (1)\f$ Proton magnetic shielding correction.*/
	const double protonMass =														1.672621898e-27;			/**< \f$m_p \ (kg)\f$ Proton mass in kilograms.*/
	const double protonMassInJ =													1.503277593e-10;			/**< \f$m_p \ (\frac{J}{c^2})\f$ Proton mass in joules per speed of light squared.*/
	const double protonMassInMeV =													938.2720813;				/**< \f$m_p \ (\frac{MeV}{c^2})\f$ Proton mass in megaelectron volts per speed of light squared.*/
	const double protonMassInu =													1.007276466879;				/**< \f$m_p \ (u)\f$ Proton mass in unified atomic mass unit.*/
	const double protonMolarMass =													1.007276466879e-3;			/**< \f$M_p \ (\frac{kg}{mol})\f$ Proton molar mass in kilograms per mole.*/
	const double protonMuonMassRatio =												8.88024338;					/**< \f$\frac{m_p}{m_\mu} \ (1)\f$ Proton-muon mass ratio.*/
	const double protonNeutronMagneticMomentRatio =									-1.45989805;				/**< \f$\frac{\mu_p}{\mu_n} \ (1)\f$ Proton-neutron magnetic moment ratio.*/
	const double protonNeutronMassRatio =											0.99862347844;				/**< \f$\frac{m_p}{m_n} \ (1)\f$ Proton-neutron mass ratio.*/
	const double protonrmsChargeRadius =											0.8751e-15;					/**< \f$r_p \ (m)\f$ Proton rms charge radius in meters.*/
	const double protonTauMassRatio =												0.528063;					/**< \f$\frac{m_p}{m_\tau} \ (1)\f$ proton-tau mass ratio.*/

    #ifdef NISTCONST_UNCERTAINTY
	const double protonChargeToMassQuotientUncertainty =							0.000000059e7;				/**< \f$\frac{e}{m_p} \ (\frac{C}{kg})\f$ Uncertainty in proton charge to mass quotient in coulombs per kilogram.*/
	const double protonComptonWavelengthUncertainty =								0.00000000061e-15;			/**< \f$\lambda_{C,p} \ (m)\f$ Uncertainty in proton Compton wavelength in meters.*/
	const double protonComptonWavelengthOver2PiUncertainty =						0.000000000097e-15;			/**< \f$\lambdabar_{C,p} \ (m)\f$ Uncertainty in proton Compton wavelength over 2 pi in meters.*/
	const double protonElectronMassRatioUncertainty =								0.00000017;					/**< \f$\frac{m_p}{m_e} \ (1)\f$ Uncertainty in proton-electron mass ratio.*/
	const double protongFactorUncertainty =											0.000000017;				/**< \f$g_p \ (1)\f$ Uncertainty in proton g factor.*/
	const double protonGyromagneticRatioUncertainty =								0.000000018e8;				/**< \f$\gamma_p \ (\frac{rad Hz}{T})\f$ Uncertainty in proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonGyromagneticRatioOver2piUncertainty =						0.00000029;					/**< \f$\frac{\gamma_p}{2\pi} \ (\frac{rad MHz}{T})\f$ Uncertainty in proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonMagneticMomentUncertainty =									0.0000000097e-26;			/**< \f$\mu_p \ (\frac{J}{T})\f$ Uncertainty in proton magnetic moment in joules per tesla.*/
	const double protonMagneticMomentToBohrMagnetonRatioUncertainty =				0.0000000046e-3;			/**< \f$\frac{\mu_p}{\mu_B} \ (1)\f$ Uncertainty in proton magnetic moment to Bohr magneton ratio.*/
	const double protonMagneticMomentToNuclearMagnetonRatioUncertainty =			0.0000000085;				/**< \f$\frac{\mu_p}{\mu_N} \ (1)\f$ Uncertainty in proton magnetic moment to nuclear magneton ratio.*/
	const double protonMagneticShieldingCorrectionUncertainty =						0.011e-6;					/**< \f$\sigma'_p \ (1)\f$ Uncertainty in proton magnetic shielding correction.*/
	const double protonMassUncertainty =											0.000000021e-27;			/**< \f$m_p \ (kg)\f$ Uncertainty in proton mass in kilograms.*/
	const double protonMassInJUncertainty =											0.000000018e-10;			/**< \f$m_p \ (\frac{J}{c^2})\f$ Uncertainty in proton mass in joules per speed of light squared.*/
	const double protonMassInMeVUncertainty =										0.0000058;					/**< \f$m_p \ (\frac{MeV}{c^2})\f$ Uncertainty in proton mass in megaelectron volts per speed of light squared.*/
	const double protonMassInuUncertainty =											0.000000000091;				/**< \f$m_p \ (u)\f$ Uncertainty in proton mass in unified atomic mass unit.*/
	const double protonMolarMassUncertainty =										0.000000000091e-3;			/**< \f$M_p \ (\frac{kg}{mol})\f$ Uncertainty in proton molar mass in kilograms per mole.*/
	const double protonMuonMassRatioUncertainty =									0.00000020;					/**< \f$\frac{m_p}{m_\mu} \ (1)\f$ Uncertainty in proton-muon mass ratio.*/
	const double protonNeutronMagneticMomentRatioUncertainty =						0.00000034;					/**< \f$\frac{\mu_p}{\mu_n} \ (1)\f$ Uncertainty in proton-neutron magnetic moment ratio.*/
	const double protonNeutronMassRatioUncertainty =								0.00000000051;				/**< \f$\frac{m_p}{m_n} \ (1)\f$ Uncertainty in proton-neutron mass ratio.*/
	const double protonrmsChargeRadiusUncertainty =									0.0061e-15;					/**< \f$r_p \ (m)\f$ Uncertainty in proton rms charge radius in meters.*/
	const double protonTauMassRatioUncertainty =									0.000048;					/**< \f$\frac{m_p}{m_\tau} \ (1)\f$ Uncertainty in proton-tau mass ratio.*/	
	#endif  
	/// @}
	    
	const double quantum of circulation                                      3.636 947 5486e-4       0.0000000017e-4       m^2 s^-1/**< \f$ \ ()\f$ .*/
	const double quantum of circulation times 2                              7.273 895 0972e-4       0.0000000033e-4       m^2 s^-1/**< \f$ \ ()\f$ .*/
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double Rydberg constant                                            10 973 731.568 508       0.000065                m^-1/**< \f$ \ ()\f$ .*/
	const double Rydberg constant times c in Hz                              3.289 841 960 355 e15    0.000000000019 e15    Hz/**< \f$ \ ()\f$ .*/
	const double Rydberg constant times hc in eV                             13.605 693 009           0.000000084            eV/**< \f$ \ ()\f$ .*/
	const double Rydberg constant times hc in J                              2.179 872 325e-18       0.000000027e-18       J/**< \f$ \ ()\f$ .*/
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double Sackur-Tetrode constant (1 K, 100 kPa)                      -1.151 7084              0.0000014               /**< \f$ \ ()\f$ .*/
	const double Sackur-Tetrode constant (1 K, 101.325 kPa)                  -1.164 8714              0.0000014               /**< \f$ \ ()\f$ .*/
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	const double second radiation constant                                   1.438 777 36e-2         0.000000 83e-2         m K/**< \f$ \ ()\f$ .*/
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup Helion
	/// @{
	const double shieldedHelionGyromagneticRatio =									2.037894585e8;				/**< \f$\gamma'_{^3\textrm{He}} \ (\frac{rad Hz}{T})\f$ Shielded helion gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionGyromagneticRatioOver2Pi =							32.43409966;				/**< \f$\frac{\gamma'_{^3\textrm{He}}}{2 \pi} \ (\frac{rad MHz}{T})\f$ Shielded helion gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionMagneticMoment =										-1.074553080e-26;			/**< \f$\mu'_{^3\textrm{He}} \ (\frac{J}{T})\f$ Shielded helion magnetic moment in joules per tesla.*/
	const double shieldedHelionMagneticMomentToBohrMagnetonRatio =					-1.158671471e-3;			/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_B} \ (1)\f$ Shielded helion magnetic moment to Bohr magneton ratio.*/
	const double shieldedHelionMagneticMomentToNuclearMagnetonRatio =				-2.127497720;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_N} \ (1)\f$ Shielded helion magnetic moment to nuclear magneton ratio.*/
	const double shieldedHelionToProtonMagneticMomentRatio =						-0.7617665603;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_p} \ (1)\f$ Shielded helion to proton magnetic moment ratio.*/
	const double shieldedHelionToShieldedProtonMagneticMomentRatio =				-0.7617861313;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu'_p} \ (1)\f$ Shielded helion to shielded proton magnetic moment ratio.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double shieldedHelionGyromagneticRatioUncertainty =						0.000000027e8;				/**< \f$\gamma'_{^3\textrm{He}} \ (\frac{rad Hz}{T})\f$ Uncertainty in shielded helion gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionGyromagneticRatioOver2PiUncertainty =				0.00000043;					/**< \f$\frac{\gamma'_{^3\textrm{He}}}{2 \pi} \ (\frac{rad MHz}{T})\f$ Uncertainty in shielded helion gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionMagneticMomentUncertainty =							0.000000014e-26;			/**< \f$\mu'_{^3\textrm{He}} \ (\frac{J}{T})\f$ Uncertainty in shielded helion magnetic moment in joules per tesla.*/
	const double shieldedHelionMagneticMomentToBohrMagnetonRatioUncertainty =		0.000000014e-3;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_B} \ (1)\f$ Uncertainty in shielded helion magnetic moment to Bohr magneton ratio.*/
	const double shieldedHelionMagneticMomentToNuclearMagnetonRatioUncertainty =	0.000000025;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_N} \ (1)\f$ Uncertainty in shielded helion magnetic moment to nuclear magneton ratio.*/
	const double shieldedHelionToProtonMagneticMomentRatioUncertainty =				0.0000000092;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_p} \ (1)\f$ Uncertainty in shielded helion to proton magnetic moment ratio.*/
	const double shieldedHelionToShieldedProtonMagneticMomentRatioUncertainty =		0.0000000033;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu'_p} \ (1)\f$ Uncertainty in shielded helion to shielded proton magnetic moment ratio.*/
	#endif  
	/// @}
	
	/// @addtogroup Proton
	/// @{
	const double shieldedProtonGyromagneticRatio =									2.675153171e8;				/**< \f$\gamma'_p \ (\frac{rad Hz}{T})\f$ Shielded proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonGyromagneticRatioOver2Pi =							42.57638507;				/**< \f$\frac{\gamma'_p}{2 \pi} \ (\frac{rad MHz}{T})\f$ Shielded proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonMagneticMoment =										1.410570547e-26;			/**< \f$\mu'_p \ (\frac{J}{T})\f$ Shielded proton magnetic moment in joules per tesla.*/
	const double shieldedProtonMagneticMomentToBohrMagnetonRatio =					1.520993128e-3;				/**< \f$\frac{\mu'_p}{\mu_B} \ (1)\f$ Shielded proton magnetic moment to Bohr magneton ratio.*/
	const double shieldedProtonMagneticMomentToNuclearMagnetonRatio =				2.792775600;				/**< \f$\frac{\mu'_p}{\mu_N} \ (1)\f$ Shielded proton magnetic moment to nuclear magneton ratio.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double shieldedProtonGyromagneticRatioUncertainty =						0.000000033e8;				/**< \f$\gamma'_p \ (\frac{rad Hz}{T})\f$ Uncertainty in shielded proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonGyromagneticRatioOver2PiUncertainty =				0.00000053;					/**< \f$\frac{\gamma'_p}{2 \pi} \ (\frac{rad MHz}{T})\f$ Uncertainty in shielded proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonMagneticMomentUncertainty =							0.000000018e-26;			/**< \f$\mu'_p \ (\frac{J}{T})\f$ Uncertainty in shielded proton magnetic moment in joules per tesla.*/
	const double shieldedProtonMagneticMomentToBohrMagnetonRatioUncertainty =		0.000000017e-3;				/**< \f$\frac{\mu'_p}{\mu_B} \ (1)\f$ Uncertainty in shielded proton magnetic moment to Bohr magneton ratio.*/
	const double shieldedProtonMagneticMomentToNuclearMagnetonRatioUncertainty =	0.000000030;				/**< \f$\frac{\mu'_p}{\mu_N} \ (1)\f$ Uncertainty in shielded proton magnetic moment to nuclear magneton ratio.*/
	#endif  
	/// @}
    
	/// @addtogroup SpeedOfLight
	/// @{    
	const double speedOfLightInVacuum =												299792458.0;				/**< \f$c \ (\frac{m}{s})\f$ Speed of light in vacuum in meters per second.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double speedOfLightInVacuumUncertainty =									0.0;						/**< \f$c \ (\frac{m}{s})\f$ Uncertainty in speed of light in vacuum in meters per second. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup GravityAcceleration
	/// @{    
	const double standardAccelerationOfGravity =									9.80665;					/**< \f$g_n \ (\frac{m}{s^2)\f$ Standard acceleration of gravity in meters per second squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardAccelerationOfGravityUncertainty =							0.0;						/**< \f$g_n \ (\frac{m}{s^2)\f$ Uncertainty in standard acceleration of gravity in meters per second squared. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup StandardAtmosphere
	/// @{    
	const double standardAtmosphere =												101325.0;					/**< \f$atm \ (Pa)\f$ Standard atmosphere in pascals.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardAtmosphereUncertainty =									0.0;						/**< \f$atm \ (Pa)\f$ Uncertainty in standard atmosphere in pascals. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup StandardStatePressure
	/// @{    
	const double standardStatePressure =											100000.0;					/**< \f$ssp \ (Pa)\f$ Standard-state pressure.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardStatePressureUncertainty =									0.0;						/**< \f$ssp \ (Pa)\f$ Uncertainty in standard-state pressure.*/
	#endif  
	/// @}

	/// @addtogroup StandardAtmosphere
	/// @{    
	const double Stefan-Boltzmann constant                                   5.670 367e-8            0.000013e-8            W m^-2 K^-4/**< \f$ \ ()\f$ .*/
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	
	/// @addtogroup Tau
	/// @{
	const double tauComptonWavelength =                                     0.697787e-15; 				/**< \f$\lambda_{C,\tau} \ (m)\f$  */ 
	const double tauComptonWavelengthOver2Pi =                          	0.111056e-15;        		/**< \f$\lambdabar_{C,\tau} \ (m)\f$  */ //https://tex.stackexchange.com/questions/96479/how-can-i-type-lambda-bar
	const double tauElectronMassRatio =                                    	3477.15;                  	/**< \f$m_\tau/m_e \ (1)\f$  */ 
	const double tauMass =                                                  3.16747e-27;           		/**< \f$m_\tau \ (kg)\f$  */ 
	const double tauMassInJ =                                 				2.84678e-10;				/**< \f$m_\tau \ (\frac{J}{c^2})\f$  */ 
	const double tauMassInMeV =                          					1776.82;					/**< \f$m_\tau \ (\frac{MeV}{c^2})\f$  */ 
	const double tauMassInu =                                              	1.90749;					/**< \f$m_\tau \ (u)\f$  */ 
	const double tauMolarMass =                                             1.90749e-3;					/**< \f$M_\tau \ (\frac{kg}{mol})\f$  */ 
	const double tauMuonMassRatio =                                         16.8167;					/**< \f$m_\tau/m_\mu \ (1)\f$  */ 
	const double tauNeutronMassRatio =										1.89111;					/**< \f$m_\tau/m_n \ (1)\f$  */ 
	const double tauProtonMassRatio	=										1.89372;					/**< \f$m_\tau/m_p \ (1)\f$  */ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double tauComptonWavelengthUncertainty =                          0.000063e-15;				/**< \f$\lambda_{C,\tau} \ (m)\f$  */ 
	const double tauComptonWavelengthOver2PiUncertainty =                   0.000010e-15; 				/**< \f$\lambdabar_{C,\tau} \ (m)\f$  */ 
	const double tauElectronMassRatioUncertainty =                         	0.31;                     	/**< \f$m_\tau/m_e \ (1)\f$  */ 
	const double tauMassUncertainty =                                       0.00029e-27;        		/**< \f$m_\tau \ (kg)\f$  */ 
	const double tauMassInJUncertainty =                                   	0.00026e-10; 				/**< \f$m_\tau \ (\frac{J}{c^2})\f$  */ 
	const double tauMassInMeVUncertainty = 									0.16;     					/**< \f$m_\tau \ (\frac{MeV}{c^2})\f$  */ 
	const double tauMassInuUncertainty =									0.00017;               		/**< \f$m_\tau \ (u)\f$  */ 
	const double tauMolarMassUncertainty =									0.00017e-3;             	/**< \f$M_\tau \ (\frac{kg}{mol})\f$  */ 
	const double tauMuonMassRatioUncertainty = 								0.0015;                   	/**< \f$m_\tau/m_\mu \ (1)\f$  */ 
	const double tauNeutronMassRatioUncertainty =							0.00017;                 	/**< \f$m_\tau/m_n \ (1)\f$  */ 
	const double tauProtonMassRatioUncertainty =							0.00017;       				/**< \f$m_\tau/m_p \ (1)\f$  */ 	
	#endif  
	/// @}
	
    /// @addtogroup Thomson
	/// @{    
	const double ThomsonCrossSection =										0.66524587158e-28;			/**< \f$\sigma_e \ (m^2)\f$  */
	#ifdef NISTCONST_UNCERTAINTY
	const double ThomsonCrossSectionUncertainty =							0.00000000091e-28;			/**< \f$\sigma_e \ (m^2)\f$  */
	#endif  
	/// @}	

	/// @addtogroup Triton
	/// @{
	const double tritonElectronMassRatio =									5496.92153588;				/**< \f$m_{\textrm{T}}/m_e \ (1)\f$  */
	const double tritongFactor =											5.957924920;				/**< \f$g_{\textrm{T} \ (1)\f$  */       
	const double tritonMagneticMoment =										1.504609503e-26;			/**< \f$\mu_{\textrm{T}} \ (\frac{J}{T})\f$  */
	const double tritonMagneticMomentToBohrMagnetonRatio =					1.6223936616e-3;			/**< \f$\mu_{\textrm{T}}/\mu_B \ (1)\f$  */
	const double tritonMagneticMomentToNuclearMagnetonRatio =				2.978962460;				/**< \f$\mu_{\textrm{T}}/\mu_N \ (1)\f$  */
	const double tritonMass =												5.007356665e-27;			/**< \f$m_{\textrm{T}} \ (kg)\f$  */ 
	const double tritonMassInJ =											4.500387735e-10;			/**< \f$m_{\textrm{T}} \ (\frac{J}{c^2})\f$  */ 
	const double tritonMassInMeV =											2808.921112;				/**< \f$m_{\textrm{T}} \ (\frac{MeV}{c^2})\f$  */ 
	const double tritonMassInu =											3.01550071632;				/**< \f$m_{\textrm{T}} \ (u)\f$  */ 
	const double tritonMolarMass =											3.01550071632e-3;			/**< \f$M_{\textrm{T}} \ (\frac{kg}{mol})\f$  */ 
	const double tritonProtonMassRatio =									2.99371703348;				/**< \f$m_{\textrm{T}}/m_p \ (1)\f$  */ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double tritonElectronMassRatioUncertainty =						0.00000026;					/**< \f$m_{\textrm{T}}/m_e \ (1)\f$  */
	const double tritongFactorUncertainty =									0.000000028;				/**< \f$g_{\textrm{T}} \ (1)\f$  */       
	const double tritonMagneticMomentUncertainty =							0.000000012e-26;			/**< \f$\mu_{\textrm{T}} \ (\frac{J}{T})\f$  */
	const double tritonMagneticMomentToBohrMagnetonRatioUncertainty =		0.0000000076e-3;			/**< \f$\mu_{\textrm{T}}/\mu_B \ (1)\f$  */
	const double tritonMagneticMomentToNuclearMagnetonRatioUncertainty =	0.000000014;				/**< \f$\mu_{\textrm{T}}/\mu_N \ (1)\f$  */
	const double tritonMassUncertainty =									0.000000062e-27;			/**< \f$m_{\textrm{T}} \ (kg)\f$  */ 
	const double tritonMassInJUncertainty =									0.000000055e-10;			/**< \f$m_{\textrm{T}} \ (J)\f$  */ 
	const double tritonMassInMeVUncertainty =								0.000017; 					/**< \f$m_{\textrm{T}} \ (MeV)\f$  */ 
	const double tritonMassInuUncertainty =									0.00000000011;				/**< \f$m_{\textrm{T}} \ (u)\f$  */ 
	const double tritonMolarMassUncertainty =								0.00000000011e-3;			/**< \f$M_{\textrm{T}} \ (\frac{kg}{mol})\f$  */ 
	const double tritonProtonMassRatioUncertainty =							0.00000000022;				/**< \f$m_{\textrm{T}}/m_p \ (1)\f$  */ 
	#endif  
	/// @}	
	
	/// @addtogroup UnifiedAtomicMassUnit
	/// @{
	const double unifiedAtomicMassUnit =									1.660539040e-27;			/**< \f$u \ (kg)\f$  */ 
	#ifdef NISTCONST_UNCERTAINTY
	const double unifiedAtomicMassUnitUncertainty =							0.000000020e-27;			/**< \f$u \ (kg)\f$  */ 
	#endif  
	/// @}	
	
	/// @addtogroup vonKlitzingConstant
	/// @{
	const double vonKlitzingConstant =										25812.8074555;				/**< \f$R_K \ (\Omega)\f$  */
	#ifdef NISTCONST_UNCERTAINTY
	const double vonKlitzingConstantUncertainty =							0.0000059;           		/**< \f$R_K \ (\Omega)\f$  */
	#endif  
	/// @}	
	
	/// @addtogroup WeakMixingAngle 
	/// @{
	const double weakMixingAngle =											0.2223;						/**< \f$sin^2 \theta_W \ (1)\f$  */              
	#ifdef NISTCONST_UNCERTAINTY
	const double weakMixingAngleUncertainty =								0.0021;						/**< \f$sin^2 \theta_W \ (1)\f$  */        
	#endif  
	/// @}	
	
	/// @addtogroup WienDisplacement 
	/// @{ 
	const double WienFrequencyDisplacementLawConstant =						5.8789238e10;				/**< \f$b' \ (\frac{Hz}{K})\f$ Wien frequency displacement law constant in hertz per kelvin.*/ 
	const double WienWavelengthDisplacementLawConstant =					2.8977729e-3;				/**< \f$b \ (m K)\f$ Wien wavelength displacement law constant in meters kelvin.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double WienFrequencyDisplacementLawConstantUncertainty =			0.0000034e10;				/**< \f$b' \ (\frac{Hz}{K})\f$ Uncertainty in Wien frequency displacement law constant in hertz per kelvin.*/ 
	const double WienWavelengthDisplacementLawConstantUncertainty =			0.0000017e-3;				/**< \f$b \ (m K)\f$ Uncertainty in Wien wavelength displacement law constant in meters kelvin.*/ 
	#endif  
	/// @}	

} //namespace NISTConst




/*
speed of light
c

common names characteristic impedance of vacuum z0
e0
*/

