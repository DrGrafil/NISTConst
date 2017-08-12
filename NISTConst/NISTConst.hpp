/******************************************************************************
* NISTConst 1.0.0
* A constants library for physics and chemistry using data from the  
* National Institute of Standards and Technology (NIST).
*
* Based off of CODATA-2014: https://dx.doi.org/10.1063/1.4954402
*------------------------------------------------------------------------
* Copyright (c) 8/9/2017 Elliot M. Grafil
*
*                       Distributed under the MIT License
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
********************************************************************************/


/// @file NISTConst.hpp
/// @brief Constants library for physics and chemistry based off of data from NIST
/// 
///	NISTConst contains a total of 335 constants compiled by the National Institute of 
/// Standards and Technology (NIST) as well as their associated uncertainties.
/// This library provides access to the current set of basic constants and conversion
/// factors for physics and chemistry recommended by the Committee on Data for Science
/// and Technology (CODATA).
///
/// Constants are from CODATA-2014.
///
/// See https://dx.doi.org/10.1063/1.4954402
///
/// @author Elliot Grafil (Metex)
/// @date 8/9/17
/// @version 1.0.0


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
/// @brief Constants library for physics and chemistry based off of data from NIST.
///
/// Constants are from CODATA-2014
///
/// https://dx.doi.org/10.1063/1.4954402

/// @defgroup NISTConst-Universal Universal
/// @ingroup NISTConst

/// 	@defgroup NISTConst-ImpedanceOfVacuum Impedance of vacuum 
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-ElectricConstant Electric constant 
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-MagneticConstant Magnetic constant 
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-GravitationalConstant Gravitational constant
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-PlanckConstant Planck constant 
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-PlanckLength Planck length 
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-PlanckMass  Planck mass 
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-PlanckTemperature Planck temperature 
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-PlanckTime Planck time 
/// 	@ingroup NISTConst-Universal

/// 	@defgroup NISTConst-SpeedOfLight Speed of light
/// 	@ingroup NISTConst-Universal



/// @defgroup NISTConst-Electromagnetic Electromagnetic
/// @ingroup NISTConst

/// 	@defgroup NISTConst-BohrMagneton Bohr magneton  
/// 	@ingroup NISTConst-Electromagnetic

/// 	@defgroup NISTConst-ConductanceQuantum Conductance quantum  
/// 	@ingroup NISTConst-Electromagnetic

/// 	@defgroup NISTConst-ElementaryCharge Elementary charge 
/// 	@ingroup NISTConst-Electromagnetic

/// 	@defgroup NISTConst-JosephsonConstant Josephson constant 
/// 	@ingroup NISTConst-Electromagnetic

/// 	@defgroup NISTConst-MagneticFluxQuantum  Magnetic flux quantum
/// 	@ingroup NISTConst-Electromagnetic

/// 	@defgroup NISTConst-NuclearMagneton Nuclear magneton 
/// 	@ingroup NISTConst-Electromagnetic

/// 	@defgroup NISTConst-vonKlitzingConstant von Klitzing constant   
/// 	@ingroup NISTConst-Electromagnetic



/// @defgroup NISTConst-Atomic Atomic and nuclear
/// @ingroup NISTConst

/// 	@defgroup NISTConst-Alpha Alpha particle (Helium-4 nucleus)
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-BohrRadius Bohr radius
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-ComptonWavelength Compton Wavelength
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Deuteron Deuteron (Deuterium/Hydrogen-2 nucleus)
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Electron Electron particle
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-FermiCouplingConstant Fermi coupling constant  
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-FineStructureConstant Fine-structure constant  
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-HartreeEnergy Hartree energy
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Helion Helion (Helium-3 nucleus)
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Muon Muon particle
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Neutron Neutron particle
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Proton Proton particle
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-QuantumOfCirculation Quantum of circulation  
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-RydbergConstant Rydberg constant
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Tau Tau particle
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Thomson Thomson cross section 
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-Triton Triton (Tritium/Hydrogen-3 nucleus)
/// 	@ingroup NISTConst-Atomic

/// 	@defgroup NISTConst-WeakMixingAngle Weak mixing angle 
/// 	@ingroup NISTConst-Atomic



/// @defgroup NISTConst-PhysicoChemical Physico-Chemical
/// @ingroup NISTConst

/// 	@defgroup NISTConst-AtomicMassConstant Atomic mass constant  
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-AvogadroConstant Avogadro constant  
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-BoltzmannConstant Boltzmann constant 
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-FaradayConstant Faraday constant
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-FirstRadiationConstant First radiation constant 
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-LoschmidtConstant Loschmidt constant  
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-MolarGasConstant Molar gas constant 
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-MolarPlanckConstant Molar Planck constant 
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-MolarVolume Molar volume of ideal gas
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-SackurTetrodeConstant Sackur-Tetrode constant
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-SecondRadiationConstant Second radiation constant  
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-StefanBoltzmannConstant Stefan-Boltzmann constant 
/// 	@ingroup NISTConst-PhysicoChemical

/// 	@defgroup NISTConst-WienDisplacement Wien displacement law constant  
/// 	@ingroup NISTConst-PhysicoChemical



/// @defgroup NISTConst-Adopted Adopted
/// @ingroup NISTConst

/// 	@defgroup NISTConst-ConventionalJosephsonConstant Conventional Josephson constant 
/// 	@ingroup NISTConst-Adopted

/// 	@defgroup NISTConst-ConventionalvonKlitzingConstant Conventional von Klitzing constant 
/// 	@ingroup NISTConst-Adopted

/// 	@defgroup NISTConst-MolarMassConstant Molar mass constant  
/// 	@ingroup NISTConst-Adopted

/// 	@defgroup NISTConst-GravityAcceleration Gravity acceleration
/// 	@ingroup NISTConst-Adopted

/// 	@defgroup NISTConst-StandardAtmosphere Standard atmosphere 
/// 	@ingroup NISTConst-Adopted

/// 	@defgroup NISTConst-StandardStatePressure Standard state pressure 
/// 	@ingroup NISTConst-Adopted


/// @defgroup NISTConst-Non-SI Non-SI units
/// @ingroup NISTConst

/// 	@defgroup NISTConst-AtomicUnit Atomic units
/// 	@ingroup NISTConst-Non-SI

/// 	@defgroup NISTConst-ElectronVoltUnit Electron Volt unit
/// 	@ingroup NISTConst-Non-SI

/// 	@defgroup NISTConst-NaturalUnit Natural units
/// 	@ingroup NISTConst-Non-SI

/// 	@defgroup NISTConst-UnifiedAtomicMassUnit Unified atomic mass unit 
/// 	@ingroup NISTConst-Non-SI



/// @defgroup NISTConst-ConversionFactors Conversion factors
/// @ingroup NISTConst

/// 	@defgroup NISTConst-AtomicMassUnit Unified atomic mass unit
/// 	@ingroup NISTConst-ConversionFactors

/// 	@defgroup NISTConst-ElectronVolt Electron volt
/// 	@ingroup NISTConst-ConversionFactors

/// 	@defgroup NISTConst-Hartree Hartree
/// 	@ingroup NISTConst-ConversionFactors

/// 	@defgroup NISTConst-Hertz	Hertz 
/// 	@ingroup NISTConst-ConversionFactors

/// 	@defgroup NISTConst-InverseMeter inverse meter
/// 	@ingroup NISTConst-ConversionFactors

/// 	@defgroup NISTConst-Joule Joule
/// 	@ingroup NISTConst-ConversionFactors

/// 	@defgroup NISTConst-Kelvin Kelvin
/// 	@ingroup NISTConst-ConversionFactors

/// 	@defgroup NISTConst-Kilogram Kilogram
/// 	@ingroup NISTConst-ConversionFactors



/// @defgroup NISTConst-X-ray X-ray values
/// @ingroup NISTConst

/// 	@defgroup NISTConst-AngstromStar Angstrom star  
/// 	@ingroup NISTConst-X-ray

/// 	@defgroup NISTConst-Copper Copper 
/// 	@ingroup NISTConst-X-ray

/// 	@defgroup NISTConst-Molybdenum Molybdenum  
/// 	@ingroup NISTConst-X-ray

/// 	@defgroup NISTConst-Silicon Silicon
/// 	@ingroup NISTConst-X-ray

namespace NISTConst
{

	/// @addtogroup NISTConst-Silicon
	/// @{
	const double latticeSpacingOfSilicon =											192.0155714e-12;			/**< \f$d_{220} \ (m)\f$  Silicon {220} lattice spacing in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double latticeSpacingOfSiliconUncertainty =								0.0000032e-12; 				/**< \f$d_{220} \ (m)\f$  Uncertainty in silicon {220} lattice spacing in meters.*/ 
	#endif
	/// @}

	/// @addtogroup NISTConst-Alpha
	/// @{
	const double alphaParticleElectronMassRatio =              		            	7294.29954136;				/**< \f$\frac{m_\alpha}{m_e} \ (1)\f$ Alpha particle-electron mass ratio.*/ 
	const double alphaParticleMass =												6.644657230e-27;			/**< \f$m_\alpha \ (kg)\f$ Alpha particle mass in kilograms.*/ 
	const double alphaParticleMassInJPercSquared =									5.971920097e-10;			/**< \f$m_\alpha \ (\frac{J}{c^2})\f$ Alpha particle mass in joules per speed of light squared.*/ 
	const double alphaParticleMassInMeVPercSquared =								3727.379378;				/**< \f$m_\alpha \ (\frac{MeV}{c^2})\f$ Alpha particle mass in megaelectron volts per speed of light squared.*/ 
	const double alphaParticleMassInu =												4.001506179127;				/**< \f$m_\alpha \ (u)\f$ Alpha particle mass in unified atomic mass units.*/ 
	const double alphaParticleMolarMass =											4.001506179127e-3;			/**< \f$M_\alpha \ (\frac{kg}{mol})\f$ Alpha particle molar mass in kilograms per mole.*/ 
	const double alphaParticleProtonMassRatio =										3.97259968907;        		/**< \f$\frac{m_\alpha}{m_p}\ (1)\f$ Alpha particle-proton mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double alphaParticleElectronMassRatioUncertainty =						0.00000024;					/**< \f$\frac{m_\alpha}{m_e} \ (1)\f$ Uncertainty in alpha particle-electron mass ratio.*/ 
	const double alphaParticleMassUncertainty =										0.000000082e-27;     		/**< \f$m_\alpha \ (kg)\f$ Uncertainty in alpha particle mass in kilograms.*/ 
	const double alphaParticleMassInJPercSquaredUncertainty =						0.000000073e-10;      		/**< \f$m_\alpha \ (\frac{J}{c^2})\f$ Uncertainty in alpha particle mass in joules per speed of light squared.*/
	const double alphaParticleMassInMeVPercSquaredUncertainty =						0.000023;                	/**< \f$m_\alpha \ (\frac{MeV}{c^2})\f$ Uncertainty in alpha particle mass in megaelectron volts per speed of light squared.*/ 
	const double alphaParticleMassInuUncertainty =									0.000000000063;     		/**< \f$m_\alpha \ (u)\f$ Uncertainty in alpha particle mass in unified atomic mass units.*/ 
	const double alphaParticleMolarMassUncertainty =								0.000000000063e-3;  		/**< \f$M_\alpha \ (\frac{kg}{mol})\f$ Uncertainty in alpha particle molar mass in kilograms per mole.*/  
	const double alphaParticleProtonMassRatioUncertainty =							0.00000000036;         		/**< \f$\frac{m_\alpha}{m_p}\ (1)\f$ Uncertainty in alpha particle-proton mass ratio.*/ 
	#endif  
	/// @}

	/// @addtogroup NISTConst-AngstromStar
	/// @{
	const double AngstromStar =														1.00001495e-10;				/**< \f$\unicode{x212B}^{\ast} \ (m)\f$ Angstrom star in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double AngstromStarUncertainty =											0.00000090e-10;				/**< \f$\unicode{x212B}^{\ast} \ (m)\f$ Uncertainty in angstrom star in meters.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-AtomicMassConstant
	/// @{
	const double atomicMassConstant =												1.660539040e-27;			/**< \f$m_u \ (kg)\f$ Atomic mass constant in kilograms.*/ 
	const double atomicMassConstantInJPercSquared =									1.492418062e-10;			/**< \f$m_u \ (\frac{J}{c^2})\f$ Atomic mass constant in joules per speed of light squared.*/ 
	const double atomicMassConstantInMeVPercSquared =								931.4940954;				/**< \f$m_u \ (\frac{MeV}{c^2})\f$ Atomic mass constant in megaelectron volts per speed of light squared.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double atomicMassConstantUncertainty =									0.000000020e-27;			/**< \f$m_u \ (kg)\f$ Uncertainty in atomic mass constant in kilograms.*/ 
	const double atomicMassConstantInJPercSquaredUncertainty =						0.000000018e-10;			/**< \f$m_u \ (\frac{J}{c^2})\f$ Uncertainty in atomic mass constant in joules per speed of light squared.*/ 
	const double atomicMassConstantInMeVPercSquaredUncertainty =					0.0000057;					/**< \f$m_u \ (\frac{MeV}{c^2})\f$ Uncertainty in atomic mass constant in megaelectron volts per speed of light squared.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-AtomicMassUnit
	/// @{
	const double atomicMassUnitToElectronVolt =										931.4940954e6;				/**< \f$(1\ u)c^2 \ (eV)\f$ Unified atomic mass unit-electron volt relationship in electron volts.*/ 
	const double atomicMassUnitToHartree =											3.4231776902e7;				/**< \f$(1\ u)c^2 \ (E_h)\f$ Unified atomic mass unit-hartree relationship in hartree.*/ 
	const double atomicMassUnitToHertz =											2.2523427206e23;			/**< \f$\frac{(1\ u)c^2}{h} \ (Hz)\f$ Unified atomic mass unit-hertz relationship in hertz.*/ 
	const double atomicMassUnitToInverseMeter =										7.5130066166e14;			/**< \f$\frac{(1\ u)c}{h} \ (\frac{1}{m})\f$ Unified atomic mass unit-inverse meter relationship in inverse meters.*/ 
	const double atomicMassUnitToJoule =											1.492418062e-10;			/**< \f$(1\ u)c^2 \ (J)\f$ Unified atomic mass unit-joule relationship in joules.*/ 
	const double atomicMassUnitToKelvin =											1.08095438e13;				/**< \f$\frac{(1\ u)c^2}{k} \ (K)\f$ Unified atomic mass unit-kelvin relationship in kelvin.*/ 
	const double atomicMassUnitToKilogram =											1.660539040e-27;			/**< \f$1\ u\ (kg)\f$ Unified atomic mass unit-kilogram relationship in kilograms.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double atomicMassUnitToElectronVoltUncertainty =							0.0000057e6;				/**< \f$(1\ u)c^2 \ (eV)\f$ Uncertainty in unified atomic mass unit-electron volt relationship in electron volts.*/ 
	const double atomicMassUnitToHartreeUncertainty =								0.0000000016e7;				/**< \f$(1\ u)c^2 \ (E_h)\f$ Uncertainty in unified atomic mass unit-hartree relationship in hartree.*/ 
	const double atomicMassUnitToHertzUncertainty =									0.0000000010e23;			/**< \f$\frac{(1\ u)c^2}{h} \ (Hz)\f$ Uncertainty in unified atomic mass unit-hertz relationship in hertz.*/ 
	const double atomicMassUnitToInverseMeterUncertainty =							0.0000000034e14;			/**< \f$\frac{(1\ u)c}{h} \ (\frac{1}{m})\f$ Uncertainty in unified atomic mass unit-inverse meter relationship in inverse meters.*/ 
	const double atomicMassUnitToJouleUncertainty =									0.000000018e-10;			/**< \f$(1\ u)c^2 \ (J)\f$ Uncertainty in unified atomic mass unit-joule relationship in joules.*/ 
	const double atomicMassUnitToKelvinUncertainty =								0.00000062e13;				/**< \f$\frac{(1\ u)c^2}{k} \ (K)\f$ Uncertainty in unified atomic mass unit-kelvin relationship in kelvin.*/ 
	const double atomicMassUnitToKilogramUncertainty =								0.000000020e-27;			/**< \f$1\ u\ (kg)\f$ Uncertainty in unified atomic mass unit-kilogram relationship in kilograms.*/ 
	#endif  
	/// @}
	
	
	/// @addtogroup NISTConst-AtomicUnit
	/// @{
	const double atomicUnitOf1stHyperpolarizability =								3.206361329e-53;			/**< \f$\frac{e^3 a_0^3}{E_h^2} \ (\frac{C^3 m^3}{J^2})\f$ Atomic unit of 1st hyperpolarizability in coulombs cubed meter cubed per joules squared.*/
	const double atomicUnitOf2ndHyperpolarizability =								6.235380085e-65;			/**< \f$\frac{e^4 a_0^4}{E_h^3} \ (\frac{C^4 m^4}{J^3})\f$ Atomic unit of 2nd hyperpolarizability in coulombs to the 4th meter to the 4th per joules cubed.*/
	const double atomicUnitOfAction =												1.054571800e-34;			/**< \f$\hbar \ (J\ s)\f$ Atomic unit of action in joules second.*/ 
	const double atomicUnitOfCharge =												1.6021766208e-19;			/**< \f$e \ (C)\f$  Atomic unit of charge in coulombs.*/ 
	const double atomicUnitOfChargeDensity =										1.0812023770e12;			/**< \f$\frac{e}{a_0^3} \ (\frac{C}{m^3})\f$ Atomic unit of charge density in coulombs per meter cubed.*/ 
	const double atomicUnitOfCurrent =												6.623618183e-3;				/**< \f$\frac{e E_h}{\hbar} \ (A)\f$ Atomic unit of current in amperes.*/ 
	const double atomicUnitOfElectricDipoleMoment =									8.478353552e-30;			/**< \f$e a_0 \ (C\ m)\f$ Atomic unit of electric dipole moment in coulombs meter. */ 
	const double atomicUnitOfElectricField =										5.142206707e11;				/**< \f$\frac{E_h}{e a_0} \ (\frac{V}{m})\f$ Atomic unit of electric field in volts per meter.*/ 
	const double atomicUnitOfElectricFieldGradient =								9.717362356e21;				/**< \f$\frac{E_h}{e a_0^2}\ (\frac{V}{m^2})\f$ Atomic unit of electric field gradient in volts per meter squared.*/ 
	const double atomicUnitOfElectricPolarizability =								1.6487772731e-41;			/**< \f$\frac{e^2 a_0^2}{E_h} \ (\frac{C^2 m^2}{J})\f$ Atomic unit of electric polarizability in coulombs squared meter squared per joule. */ 
	const double atomicUnitOfElectricPotential =									27.21138602;				/**< \f$ \frac{E_h}{e}\ (V)\f$ Atomic unit of electric potential in volts.*/ 
	const double atomicUnitOfElectricQuadrupoleMoment =								4.486551484e-40;			/**< \f$e a_0^2 \ (C\ m^2)\f$ Atomic unit of electric quadrupole moment in coulombs meter squared.*/ 
	const double atomicUnitOfEnergy =												4.359744650e-18;			/**< \f$E_h \ (J)\f$ Atomic unit of energy in joules.*/ 
	const double atomicUnitOfForce =												8.23872336e-8;				/**< \f$\frac{E_h}{a_0} \ (N)\f$ Atomic unit of force in newtons.*/ 
	const double atomicUnitOfLength =												0.52917721067e-10;			/**< \f$a_0 \ (m)\f$ Atomic unit of lengthin meters.*/ 
	const double atomicUnitOfMagneticDipoleMoment =									1.854801999e-23;			/**< \f$\frac{\hbar e}{m_e} \ (\frac{J}{T})\f$ Atomic unit of magnetic dipole moment in joules per tesla.*/ 
	const double atomicUnitOfMagneticFluxDensity =									2.350517550e5;				/**< \f$\frac{\hbar}{e a_0^2} \ (T)\f$ Atomic unit of magnetic flux density in tesla.*/ 
	const double atomicUnitOfMagnetizability =										7.8910365886e-29;			/**< \f$\frac{e^2a_0^2}{m_e} \ (\frac{J}{T^2})\f$ Atomic unit of magnetizability in joules per tesla squared.*/ 
	const double atomicUnitOfMass =													9.10938356e-31;				/**< \f$m_e \ (kg)\f$ Atomic unit of mass in kilograms.*/ 
	const double atomicUnitOfMomentum =												1.992851882e-24;			/**< \f$\frac{\hbar}{a_0} \ (\frac{kg\ m}{s})\f$ Atomic unit of momentum in kilograms meter per second.*/ 
	const double atomicUnitOfPermittivity =											1.112650056e-10;			/**< \f$\frac{e^2}{a_0 E_h} \ (\frac{F}{m})\f$ Atomic unit of permittivity in farads per meter. */ 
	const double atomicUnitOfTime =													2.418884326509e-17;			/**< \f$\frac{\hbar}{E_h} \ (s)\f$ Atomic unit of time in seconds.*/ 
	const double atomicUnitOfVelocity =												2.18769126277e6;			/**< \f$\frac{a_0 E_h}{\hbar} \ (\frac{m}{s})\f$ Atomic unit of velocity in meters per second.*/ 

	#ifdef NISTCONST_UNCERTAINTY
	const double atomicUnitOf1stHyperpolarizabilityUncertainty =					0.000000020e-53;			/**< \f$\frac{e^3 a_0^3}{E_h^2} \ (\frac{C^3 m^3}{J^2})\f$ Uncertainty in atomic unit of 1st hyperpolarizability in coulombs cubed meter cubed per joules squared.*/
	const double atomicUnitOf2ndHyperpolarizabilityUncertainty =					0.000000077e-65;			/**< \f$\frac{e^4 a_0^4}{E_h^3} \ (\frac{C^4 m^4}{J^3})\f$ Uncertainty in atomic unit of 2nd hyperpolarizability in coulombs to the 4th meter to the 4th per joules cubed.*/
	const double atomicUnitOfActionUncertainty =									0.000000013e-34;			/**< \f$\hbar \ (J\ s)\f$ Uncertainty in atomic unit of action in joules second.*/ 
	const double atomicUnitOfChargeUncertainty =									0.0000000098e-19;			/**< \f$e \ (C)\f$ Uncertainty in atomic unit of charge in coulombs.*/ 
	const double atomicUnitOfChargeDensityUncertainty =								0.0000000067e12;			/**< \f$\frac{e}{a_0^3} \ (\frac{C}{m^3})\f$ Uncertainty in atomic unit of charge density in coulombs per meter cubed.*/ 
	const double atomicUnitOfCurrentUncertainty =									0.000000041e-3;				/**< \f$ \frac{e E_h}{\hbar} \ (A)\f$ Uncertainty in atomic unit of current in amperes.*/ 
	const double atomicUnitOfElectricDipoleMomentUncertainty =						0.000000052e-30;			/**< \f$ e a_0 \ (C\ m)\f$ Uncertainty in atomic unit of electric dipole moment in coulombs meter. */ 
	const double atomicUnitOfElectricFieldUncertainty = 							0.000000032e11;				/**< \f$\frac{E_h}{e a_0} \ (\frac{V}{m})\f$ Uncertainty in atomic unit of electric field in volts per meter.*/ 
	const double atomicUnitOfElectricFieldGradientUncertainty =						0.000000060e21;				/**< \f$\frac{E_h}{e a_0^2}\ (\frac{V}{m^2})\f$ Uncertainty in atomic unit of electric field gradient in volts per meter squared.*/ 
	const double atomicUnitOfElectricPolarizabilityUncertainty =					0.0000000011e-41;			/**< \f$\frac{e^2 a_0^2}{E_h} \ (\frac{C^2 m^2}{J})\f$ Uncertainty in atomic unit of electric polarizability in coulombs squared meter squared per joule. */ 
	const double atomicUnitOfElectricPotentialUncertainty =							0.00000017;					/**< \f$ \frac{E_h}{e}\ (V)\f$ Uncertainty in atomic unit of electric potential in volts.*/ 
	const double atomicUnitOfElectricQuadrupoleMomentUncertainty =					0.000000028e-40;			/**< \f$e a_0^2 \ (C\ m^2)\f$ Uncertainty in atomic unit of electric quadrupole moment in coulombs meter squared.*/ 
	const double atomicUnitOfEnergyUncertainty =									0.000000054e-18;			/**< \f$E_h \ (J)\f$ Uncertainty in atomic unit of energy in joules.*/ 
	const double atomicUnitOfForceUncertainty =										0.00000010e-8;				/**< \f$\frac{E_h}{a_0} \ (N)\f$ Uncertainty in atomic unit of force in newtons.*/ 
	const double atomicUnitOfLengthUncertainty =									0.00000000012e-10;			/**< \f$a_0 \ (m)\f$ Uncertainty in atomic unit of length in meters.*/ 
	const double atomicUnitOfMagneticDipoleMomentUncertainty =						0.000000011e-23;			/**< \f$\frac{\hbar e}{m_e} \ (\frac{J}{T})\f$ Uncertainty in atomic unit of magnetic dipole moment in joules per tesla.*/ 
	const double atomicUnitOfMagneticFluxDensityUncertainty =						0.000000014e5;				/**< \f$\frac{\hbar}{e a_0^2} \ (T)\f$ Uncertainty in atomic unit of magnetic flux density in tesla.*/ 
	const double atomicUnitOfMagnetizabilityUncertainty =							0.0000000090e-29;			/**< \f$\frac{e^2a_0^2}{m_e} \ (\frac{J}{T^2})\f$ Uncertainty in atomic unit of magnetizability in joules per tesla squared.*/ 
	const double atomicUnitOfMassUncertainty =										0.00000011e-31;				/**< \f$m_e \ (kg)\f$ Uncertainty in atomic unit of mass in kilograms.*/ 
	const double atomicUnitOfMomentumUncertainty =									0.000000024e-24;			/**< \f$\frac{\hbar}{a_0} \ (\frac{kg m}{s})\f$ Uncertainty in atomic unit of momentum in kilograms meter per second.*/ 
	const double atomicUnitOfPermittivityUncertainty =       		   	            0.0;						/**< \f$\frac{e^2}{a_0 E_h} \ (\frac{F}{m})\f$ Uncertainty in atomic unit of permittivity in farads per meter. Note should be 0.0 since it is a defined value.*/ 
	const double atomicUnitOfTimeUncertainty =										0.000000000014e-17;			/**< \f$\frac{\hbar}{E_h} \ (s)\f$ Uncertainty in atomic unit of time in seconds.*/ 
	const double atomicUnitOfVelocityUncertainty =									0.00000000050e6;			/**< \f$\frac{a_0 E_h}{\hbar} \ (\frac{m}{s})\f$ Uncertainty in atomic unit of velocity in meters per second.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-AvogadroConstant 
	/// @{
	const double AvogadroConstant =													6.022140857e23;				/**< \f$N_A \ (\frac{1}{mol})\f$ Avogadro constant.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double AvogadroConstantUncertainty =										0.000000074e23;				/**< \f$N_A \ (\frac{1}{mol})\f$ Uncertainty in Avogadro constant.*/ 
	#endif  
	/// @}

	/// @addtogroup NISTConst-BohrMagneton
	/// @{
	const double BohrMagneton =														927.4009994e-26;			/**< \f$\mu_B \ (\frac{J}{T})\f$ Bohr magneton in joules per tesla.*/ 
	const double BohrMagnetonIneVPerT =												5.7883818012e-5;			/**< \f$\mu_B \ (\frac{eV}{T})\f$ Bohr magneton in electron volts per tesla.*/ 
	const double BohrMagnetonInHzPerT =												13.996245042e9;				/**< \f$\frac{\mu_B}{h} \ (\frac{Hz}{T})\f$ Bohr magneton in hertz per tesla.*/ 
	const double BohrMagnetonInInversemT	=										46.68644814;				/**< \f$\frac{\mu_B}{hc} \ (\frac{1}{m\ T})\f$ Bohr magneton in inverse meters tesla.*/ 
	const double BohrMagnetonInKPerT =												0.67171405;					/**< \f$\frac{\mu_B}{k} \ (\frac{K}{T})\f$ Bohr magneton in kelvin per tesla.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double BohrMagnetonUncertainty =											0.0000057e-26;				/**< \f$\mu_B \ (\frac{J}{T})\f$ Uncertainty in Bohr magneton in joules per tesla.*/ 
	const double BohrMagnetonIneVPerTUncertainty =									0.0000000026e-5;			/**< \f$\mu_B \ (\frac{eV}{T})\f$ Uncertainty in Bohr magneton in electron volts per tesla.*/ 
	const double BohrMagnetonInHzPerTUncertainty =									0.000000086e9;				/**< \f$\frac{\mu_B}{h} \ (\frac{Hz}{T})\f$ Uncertainty in Bohr magneton in hertz per tesla.*/ 
	const double BohrMagnetonInInversemTUncertainty	=								0.00000029;					/**< \f$\frac{\mu_B}{hc} \ (\frac{1}{m\ T})\f$ Uncertainty in Bohr magneton in inverse meters tesla.*/ 
	const double BohrMagnetonInKPerTUncertainty =									0.00000039;					/**< \f$\frac{\mu_B}{k} \ (\frac{K}{T})\f$ Uncertainty in Bohr magneton in kelvin per tesla.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-BohrRadius
	/// @{
	const double BohrRadius =														0.52917721067e-10;			/**< \f$a_0 \ (m)\f$ Bohr radius in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double BohrRadiusUncertainty =											0.00000000012e-10;			/**< \f$a_0 \ (m)\f$ Uncertainty in Bohr radius in meters.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-BoltzmannConstant
	/// @{
	const double BoltzmannConstant =												1.38064852e-23;				/**< \f$k \ (\frac{J}{K})\f$  Boltzmann constant in joules per kelvin.*/
	const double BoltzmannConstantIneVPerK =										8.6173303e-5;				/**< \f$k \ (\frac{J}{K})\f$  Boltzmann constant in electron volts per kelvin.*/
	const double BoltzmannConstantInHzPerK =										2.0836612e10;				/**< \f$\frac{k}{h} \ (\frac{Hz}{K})\f$  Boltzmann constant in hertz per kelvin.*/
	const double BoltzmannConstantInInversemK =										69.503457;					/**< \f$\frac{k}{h c} \ (\frac{1}{m\ K})\f$  Boltzmann constant in inverse meters kelvin.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double BoltzmannConstantUncertainty =										0.00000079e-23;				/**< \f$k \ (\frac{J}{K})\f$ Uncertainty in Boltzmann constant in joules per kelvin.*/
	const double BoltzmannConstantIneVPerKUncertainty =								0.0000050e-5;				/**< \f$k \ (\frac{J}{K})\f$ Uncertainty in Boltzmann constant in electron volts per kelvin.*/
	const double BoltzmannConstantInHzPerKUncertainty =								0.0000012e10;				/**< \f$\frac{k}{h} \ (\frac{Hz}{K})\f$ Uncertainty in Boltzmann constant in hertz per kelvin.*/
	const double BoltzmannConstantInInversemKUncertainty =							0.000040; 					/**< \f$\frac{k}{h c} \ (\frac{1}{m\ K})\f$ Uncertainty in Boltzmann constant in inverse meters kelvin.*/
	#endif  
	/// @}
	
	
	/// @addtogroup NISTConst-ImpedanceOfVacuum
	/// @{
	const double impedanceOfVacuum =												376.730313461;				/**< \f$Z_0 \ (\Omega)\f$ Characteristic impedance of vacuum in ohms.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double impedanceOfVacuumUncertainty =										0.0;						/**< \f$Z_0 \ (\Omega)\f$ Uncertainty in characteristic impedance of vacuum in ohms. Note should be 0.0 since it is a defined value.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Electron
	/// @{
	const double classicalElectronRadius =											2.8179403227e-15;			/**< \f$r_e \ (m)\f$ Classical electron radius in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double classicalElectronRadiusUncertainty =								0.0000000019e-15;			/**< \f$r_e \ (m)\f$ Uncertainty in classical electron radiusin meters.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ComptonWavelength
	/// @{
	const double ComptonWavelength =												2.4263102367e-12;			/**< \f$\lambda_C \ (m)\f$ Compton wavelength in meters.*/
	const double ComptonWavelengthOver2Pi =											386.15926764e-15;			/**< \f$\frac{\lambda_C}{2\pi} \ (m)\f$ Compton wavelength over 2 pi in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double ComptonWavelengthUncertainty =										0.0000000011e-12;			/**< \f$\lambda_C \ (m)\f$ Uncertainty in Compton wavelength in meters.*/
	const double ComptonWavelengthOver2PiUncertainty =								0.00000018e-15;				/**< \f$\frac{\lambda_C}{2\pi} \ (m)\f$ Uncertainty in Compton wavelength over 2 pi in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ConductanceQuantum
	/// @{
	const double conductanceQuantum =												7.7480917310e-5;			/**< \f$G_0 \ (S)\f$ Conductance quantum in siemens.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conductanceQuantumUncertainty =									0.0000000018e-5;			/**< \f$G_0 \ (S)\f$ Uncertainty in conductance quantum in siemens.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ConventionalJosephsonConstant
	/// @{
	const double conventionalJosephsonConstant =									483597.9e9;					/**< \f$K_{J-90} \ (\frac{Hz}{V})\f$ Conventional value of Josephson constant in hertz per volt.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conventionalJosephsonConstantUncertainty =							0.0;						/**< \f$K_{J-90} \ (\frac{Hz}{V})\f$ Uncertainty in conventional value of Josephson constant in hertz per volt. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	
	/// @addtogroup NISTConst-ConventionalvonKlitzingConstant
	/// @{
	const double conventionalvonKlitzingConstant =									25812.807;					/**< \f$R_{K-90} \ (\Omega)\f$ Conventional value of von Klitzing constant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conventionalvonKlitzingConstantUncertainty =						25812.807;					/**< \f$R_{K-90} \ (\Omega)\f$ Uncertainty in conventional value of von Klitzing constant. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Copper
	/// @{
	const double CuXUnit =															1.00207697e-13;				/**< \f$xu(CuK\alpha_1) \ (m)\f$ Cu X unit in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double CuXUnitUncertainty =												0.00000028e-13;				/**< \f$xu(CuK\alpha_1) \ (m)\f$ Uncertainty in Cu X unit in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Deuteron
	/// @{ 
	const double deuterongFactor =													0.8574382311;				/**< \f$g_D \ (1)\f$ Deuteron g factor.*/   
	const double deuteronElectronMagneticMomentRatio =								-4.664345535e-4;			/**< \f$\frac{\mu_D}{\mu_e} \ (1)\f$ Deuteron-electron magnetic moment ratio.*/         
	const double deuteronElectronMassRatio =										3670.48296785;				/**< \f$\frac{m_D}{m_e} \ (1)\f$ Deuteron-electron mass ratio.*/            
	const double deuteronMagneticMoment =											0.4330735040e-26;			/**< \f$\mu_D \ (\frac{J}{T})\f$ Deuteron magnetic moment in joules per tesla.*/
	const double deuteronMagneticMomentToBohrMagnetonRatio =						0.4669754554e-3;			/**< \f$\frac{\mu_D}{\mu_B} \ (1)\f$ Deuteron magnetic moment to Bohr magneton ratio.*/        
	const double deuteronMagneticMomentToNuclearMagnetonRatio =						0.8574382311;				/**< \f$\frac{\mu_D}{\mu_N} \ (1)\f$ Deuteron magnetic moment to nuclear magneton ratio.*/            
	const double deuteronMass =														3.343583719e-27;			/**< \f$m_D \ (kg)\f$ Deuteron mass in kilograms.*/
	const double deuteronMassInJPercSquared =										3.005063183e-10;			/**< \f$m_D \ (\frac{J}{c^2})\f$ Deuteron mass in joules per speed of light squared.*/
	const double deuteronMassInMeVPercSquared =										1875.612928;				/**< \f$m_D \ (\frac{MeV}{c^2})\f$ Deuteron mass in megaelectron volts per speed of light squared.*/
	const double deuteronMassInu =													2.013553212745;				/**< \f$m_D \ (u)\f$ Deuteron mass in unified atomic mass units.*/
	const double deuteronMolarMass =												2.013553212745e-3;			/**< \f$M_D \ (\frac{1}{mol})\f$ Deuteron molar mass in inverse mols.*/
	const double deuteronNeutronMagneticMomentRatio =								-0.44820652;				/**< \f$\frac{\mu_D}{\mu_n} \ (1)\f$ Deuteron-neutron magnetic moment ratio.*/              
	const double deuteronProtonMagneticMomentRatio =								0.3070122077;				/**< \f$\frac{\mu_D}{\mu_p} \ (1)\f$ Deuteron-proton magnetic moment ratio.*/            
	const double deuteronProtonMassRatio =											1.99900750087;				/**< \f$\frac{m_D}{m_p} \ (1)\f$ Deuteron-proton magnetic moment ratio.*/          
	const double deuteronrmsChargeRadius =											2.1413e-15;					/**< \f$r_D \ (m)\f$ Deuteron rms charge radius in meters.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double deuterongFactorUncertainty =										0.0000000048;				/**< \f$g_D \ (1)\f$ Uncertainty in deuteron g factor.*/   
	const double deuteronElectronMagneticMomentRatioUncertainty =					0.000000026e-4;				/**< \f$\frac{\mu_D}{\mu_e} \ (1)\f$ Uncertainty in deuteron-electron magnetic moment ratio.*/         
	const double deuteronElectronMassRatioUncertainty =								0.00000013;					/**< \f$\frac{m_D}{m_e} \ (1)\f$ Uncertainty in deuteron-electron mass ratio.*/            
	const double deuteronMagneticMomentUncertainty =								0.0000000036e-26;			/**< \f$\mu_D \ (\frac{J}{T})\f$ Uncertainty in deuteron magnetic moment in joules per tesla.*/
	const double deuteronMagneticMomentToBohrMagnetonRatioUncertainty =				0.0000000026e-3;			/**< \f$\frac{\mu_D}{\mu_B} \ (1)\f$ Uncertainty in deuteron magnetic moment to Bohr magneton ratio.*/        
	const double deuteronMagneticMomentToNuclearMagnetonRatioUncertainty =			0.0000000048;				/**< \f$\frac{\mu_D}{\mu_N} \ (1)\f$ Uncertainty in deuteron magnetic moment to nuclear magneton ratio.*/            
	const double deuteronMassUncertainty =											0.000000041e-27;			/**< \f$m_D \ (kg)\f$ Uncertainty in deuteron mass in kilograms.*/
	const double deuteronMassInJPercSquaredUncertainty =							0.000000037e-10;			/**< \f$m_D \ (\frac{J}{c^2})\f$ Uncertainty in deuteron mass in joules per speed of light squared.*/
	const double deuteronMassInMeVPercSquaredUncertainty =							0.000012;					/**< \f$m_D \ (\frac{MeV}{c^2})\f$ Uncertainty in deuteron mass in megaelectron volts per speed of light squared.*/
	const double deuteronMassInuUncertainty =										0.000000000040;				/**< \f$m_D \ (u)\f$ Uncertainty in deuteron mass in unified atomic mass units.*/
	const double deuteronMolarMassUncertainty =										0.000000000040e-3;			/**< \f$M_D \ (\frac{1}{mol})\f$ Uncertainty in deuteron molar mass in inverse mols.*/
	const double deuteronNeutronMagneticMomentRatioUncertainty =					0.00000011;					/**< \f$\frac{\mu_D}{\mu_n} \ (1)\f$ Uncertainty in deuteron-neutron magnetic moment ratio.*/              
	const double deuteronProtonMagneticMomentRatioUncertainty =						0.0000000015;				/**< \f$\frac{\mu_D}{\mu_p} \ (1)\f$ Uncertainty in deuteron-proton magnetic moment ratio.*/            
	const double deuteronProtonMassRatioUncertainty =								0.00000000019;				/**< \f$\frac{m_D}{m_p} \ (1)\f$ Uncertainty in deuteron-proton magnetic moment ratio.*/          
	const double deuteronrmsChargeRadiusUncertainty =								0.0025e-15;					/**< \f$r_D \ (m)\f$ Uncertainty in deuteron rms charge radius in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ElectricConstant
	/// @{ 
	const double electricConstant =													8.854187817e-12;			/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Electric constant in farads per meter.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double electricConstantUncertainty =										0.0;						/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Uncertainty in electric constant in farads per meter. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	 
	/// @addtogroup NISTConst-Electron
	/// @{ 
	const double electronChargeToMass =												-1.758820024e11;			/**< \f$\frac{-e}{m_e} \ (\frac{C}{kg})\f$ Electron charge to mass quotient in coulombs per kilogram.*/ 
	const double electronDeuteronMagneticMomentRatio =								-2143.923499;				/**< \f$\frac{\mu_e}{\mu_D} \ (1)\f$ Electron-deuteron magnetic moment ratio.*/ 
	const double electronDeuteronMassRatio =										2.724437107484e-4;			/**< \f$\frac{m_e}{m_D} \ (1)\f$ Electron-deuteron mass ratio.*/ 
	const double electrongFactor =													-2.00231930436182;			/**< \f$g_e \ (1)\f$ Electron g factor.*/ 
	const double electronGyromagneticRatio =										1.760859644e11;				/**< \f$\gamma_e \ (\frac{rad\ Hz}{T})\f$ Electron gyromagnetic ratio in hertz per tesla. Note that the units of radians are added for clarity.*/ 
	const double electronGyromagneticRatioOver2pi =									28024.95164;				/**< \f$\frac{\gamma_e}{2\pi} \ (\frac{rad\ MHz}{T})\f$ Electron gyromagnetic ratio over 2 pi in megahertz per tesla. Note that the units of radians are added for clarity.*/ 
	const double electronHelionMassRatio =											1.819543074854e-4;			/**< \f$\frac{m_e}{m_{^3\textrm{He}}} \ (1)\f$ Electron-helion mass ratio.*/ 
	const double electronMagneticMoment =											-928.4764620e-26;			/**< \f$\mu_e \ (\frac{J}{T})\f$ Electron magnetic moment in joules per tesla.*/ 
	const double electronMagneticMomentAnomaly =									1.15965218091e-3;			/**< \f$a_e \ (1)\f$ Electron magnetic moment anomaly.*/ 
	const double electronMagneticMomentToBohrMagnetonRatio =						-1.00115965218091;			/**< \f$\frac{\mu_e}{\mu_B} \ (1)\f$ Electron magnetic moment to Bohr magneton ratio.*/ 
	const double electronMagneticMomentToNuclearMagnetonRatio =						-1838.28197234;				/**< \f$\frac{\mu_e}{\mu_N} \ (1)\f$ Electron magnetic moment to nuclear magneton ratio.*/ 
	const double electronMass =														9.10938356e-31;				/**< \f$m_e \ (kg)\f$ Electron mass in kilograms.*/ 
	const double electronMassInJPercSquared =										8.18710565e-14;				/**< \f$m_e \ (\frac{J}{c^2})\f$ Electron mass in joules per speed of light squared.*/ 
	const double electronMassInMeVPercSquared =										0.5109989461;				/**< \f$m_e \ (\frac{MeV}{c^2})\f$ Electron mass in megaelectron volts per speed of light squared.*/ 
	const double electronMassInu =													5.48579909070e-4;			/**< \f$m_e \ (u)\f$ Electron mass in unified atomic mass units.*/ 
	const double electronMolarMass =												5.48579909070e-7;			/**< \f$M_e \ (\frac{kg}{mol})\f$ Electron molar mass in kilograms per mole.*/ 
	const double electronMuonMagneticMomentRatio =									206.7669880;				/**< \f$\frac{\mu_e}{\mu_\mu} \ (1)\f$ Electron-muon magnetic moment ratio.*/ 
	const double electronMuonMassRatio =											4.83633170e-3;				/**< \f$\frac{m_e}{m_\mu} \ (1)\f$ Electron-muon mass ratio.*/ 
	const double electronNeutronMagneticMomentRatio =								960.92050;					/**< \f$\frac{\mu_e}{\mu_n} \ (1)\f$ Electron-neutron magnetic moment ratio.*/ 
	const double electronNeutronMassRatio =											5.4386734428e-4;			/**< \f$\frac{m_e}{m_n} \ (1)\f$ Electron-neutron mass ratio.*/ 
	const double electronProtonMagneticMomentRatio =								-658.2106866;				/**< \f$\frac{\mu_e}{\mu_p} \ (1)\f$ Electron-proton magnetic moment ratio.*/ 
	const double electronProtonMassRatio =											5.44617021352e-4;			/**< \f$\frac{m_e}{m_p} \ (1)\f$ Electron-proton mass ratio.*/ 
	const double electronTauMassRatio =												2.87592e-4;					/**< \f$\frac{m_e}{m_\tau} \ (1)\f$ Electron-tau mass ratio.*/ 
	const double electronToAlphaParticleMassRatio =									1.370933554798e-4;			/**< \f$\frac{m_e}{m_\alpha} \ (1)\f$ Electron to alpha particle mass ratio.*/ 
	const double electronToShieldedHelionMagneticMomentRatio =						864.058257;					/**< \f$\frac{\mu_e}{\mu'_{^3\textrm{He}}} \ (1)\f$ Electron to shielded helion magnetic moment ratio.*/ 
	const double electronToShieldedProtonMagneticMomentRatio =						-658.2275971;				/**< \f$\frac{\mu_e}{\mu'_p} \ (1)\f$ Electron to shielded proton magnetic moment ratio.*/ 
	const double electronTritonMassRatio =											1.819200062203e-4;			/**< \f$\frac{m_e}{m_\textrm{T}} \ (1)\f$ Electron-triton mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double electronChargeToMassUncertainty =									0.000000011e11;				/**< \f$\frac{-e}{m_e} \ (\frac{C}{kg})\f$ Uncertainty in electron charge to mass quotient in coulombs per kilogram.*/ 
	const double electronDeuteronMagneticMomentRatioUncertainty =					0.000012;					/**< \f$\frac{\mu_e}{\mu_D} \ (1)\f$ Uncertainty in electron-deuteron magnetic moment ratio.*/ 
	const double electronDeuteronMassRatioUncertainty =								0.000000000096e-4;			/**< \f$\frac{m_e}{m_D} \ (1)\f$ Uncertainty in electron-deuteron mass ratio.*/ 
	const double electrongFactorUncertainty =										0.00000000000052;			/**< \f$g_e \ (1)\f$ Uncertainty in electron g factor.*/ 
	const double electronGyromagneticRatioUncertainty =								0.000000011e11;				/**< \f$\gamma_e \ (\frac{rad\ Hz}{T})\f$ Uncertainty in electron gyromagnetic ratio in hertz per tesla. Note that the units of radians are added for clarity.*/ 
	const double electronGyromagneticRatioOver2piUncertainty =						0.00017;					/**< \f$\frac{\gamma_e}{2\pi} \ (\frac{rad\ MHz}{T})\f$ Uncertainty in electron gyromagnetic ratio over 2 pi in megahertz per tesla. Note that the units of radians are added for clarity.*/ 
	const double electronHelionMassRatioUncertainty =								0.000000000088e-4;   		/**< \f$\frac{m_e}{m_{^3\textrm{He}}} \ (1)\f$ Uncertainty in electron-helion mass ratio.*/ 
	const double electronMagneticMomentUncertainty =								0.0000057e-26;				/**< \f$\mu_e \ (\frac{J}{T})\f$ Uncertainty in electron magnetic moment in joules per tesla.*/ 
	const double electronMagneticMomentAnomalyUncertainty =							0.00000000026e-3;			/**< \f$a_e \ (1)\f$ Uncertainty in electron magnetic moment anomaly.*/ 
	const double electronMagneticMomentToBohrMagnetonRatioUncertainty =				0.00000000000026;			/**< \f$\frac{\mu_e}{\mu_B} \ (1)\f$ Uncertainty in electron magnetic moment to Bohr magneton ratio.*/ 
	const double electronMagneticMomentToNuclearMagnetonRatioUncertainty =			0.00000017;					/**< \f$\frac{\mu_e}{\mu_N} \ (1)\f$ Uncertainty in electron magnetic moment to nuclear magneton ratio.*/ 
	const double electronMassUncertainty =											0.00000011e-31;				/**< \f$m_e \ (kg)\f$ Uncertainty in electron mass in kilograms.*/ 
	const double electronMassInJPercSquaredUncertainty =							0.00000010e-14;				/**< \f$m_e \ (\frac{J}{c^2})\f$ Uncertainty in electron mass in joules per speed of light squared.*/ 
	const double electronMassInMeVPercSquaredUncertainty =							0.0000000031;				/**< \f$m_e \ (\frac{MeV}{c^2})\f$ Uncertainty in electron mass in megaelectron volts per speed of light squared.*/ 
	const double electronMassInuUncertainty =										0.00000000016e-4;			/**< \f$m_e \ (u)\f$ Uncertainty in electron mass in unified atomic mass units.*/ 
	const double electronMolarMassUncertainty =										0.00000000016e-7;			/**< \f$M_e \ (\frac{kg}{mol})\f$ Uncertainty in electron molar mass in kilograms per mole.*/ 
	const double electronMuonMagneticMomentRatioUncertainty =						0.0000046;					/**< \f$\frac{\mu_e}{\mu_\mu} \ (1)\f$ Uncertainty in electron-muon magnetic moment ratio.*/ 
	const double electronMuonMassRatioUncertainty =									0.00000011e-3;				/**< \f$\frac{m_e}{m_\mu} \ (1)\f$ Uncertainty in electron-muon mass ratio.*/ 
	const double electronNeutronMagneticMomentRatioUncertainty =					0.00023;					/**< \f$\frac{\mu_e}{\mu_n} \ (1)\f$ Uncertainty in electron-neutron magnetic moment ratio.*/ 
	const double electronNeutronMassRatioUncertainty =								0.0000000027e-4;			/**< \f$\frac{m_e}{m_n} \ (1)\f$ Uncertainty in electron-neutron mass ratio.*/ 
	const double electronProtonMagneticMomentRatioUncertainty =						0.0000020;					/**< \f$\frac{\mu_e}{\mu_p} \ (1)\f$ Uncertainty in electron-proton magnetic moment ratio.*/ 
	const double electronProtonMassRatioUncertainty =								0.00000000052e-4;			/**< \f$\frac{m_e}{m_p} \ (1)\f$ Uncertainty in electron-proton mass ratio.*/ 
	const double electronTauMassRatioUncertainty =									0.00026e-4;					/**< \f$\frac{m_e}{m_\tau} \ (1)\f$ Uncertainty in electron-tau mass ratio.*/ 
	const double electronToAlphaParticleMassRatioUncertainty =						0.000000000045e-4;			/**< \f$\frac{m_e}{m_\alpha} \ (1)\f$ Uncertainty in electron to alpha particle mass ratio.*/ 
	const double electronToShieldedHelionMagneticMomentRatioUncertainty =			0.000010;					/**< \f$\frac{\mu_e}{\mu'_{^3\textrm{He}}} \ (1)\f$ Uncertainty in electron to shielded helion magnetic moment ratio.*/ 
	const double electronToShieldedProtonMagneticMomentRatioUncertainty =			0.0000072;					/**< \f$\frac{\mu_e}{\mu'_p} \ (1)\f$ Uncertainty in electron to shielded proton magnetic moment ratio.*/ 
	const double electronTritonMassRatioUncertainty =								0.000000000084e-4;			/**< \f$\frac{m_e}{m_\textrm{T}} \ (1)\f$ Uncertainty in electron-triton mass ratio.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ElectronVoltUnit
	/// @{
	const double electronVolt =														1.6021766208e-19;			/**< \f$eV \ (J)\f$ Electron volt in joules.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double electronVoltUncertainty =														0.0000000098e-19;			/**< \f$eV \ (J)\f$ Uncertainty in electron volt in joules.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ElectronVolt
	/// @{
	const double electronVoltToAtomicMassUnit =										1.0735441105e-9;			/**< \f$\frac{(1\ eV)}{c^2}\ (u)\f$ Electron volt-unified atomic mass unit relationship .*/ 
	const double electronVoltToHartree =											3.674932248e-2;				/**< \f$(1\ eV) \ (E_h)\f$ Electron volt-hartree relationship.*/ 
	const double electronVoltToHertz =												2.417989262e14;				/**< \f$\frac{(1\ eV)}{h} \ (Hz)\f$ Electron volt-hertz relationship.*/ 
	const double electronVoltToInverseMeter =										8.065544005e5;				/**< \f$\frac{(1\ eV)}{hc} \ (\frac{1}{m})\f$ Electron volt-inverse meter relationship.*/ 
	const double electronVoltToJoule =												1.6021766208e-19;			/**< \f$(1\ eV) \ (J)\f$ Electron volt-joule relationship.*/ 
	const double electronVoltToKelvin =												1.16045221e4;				/**< \f$\frac{(1\ eV)}{k} \ (K)\f$ Electron volt-kelvin relationship .*/ 
	const double electronVoltToKilogram =											1.782661907e-36;			/**< \f$\frac{(1\ eV)}{c^2} \ (kg)\f$ Electron volt-kilogram relationship.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double electronVoltToAtomicMassUnitUncertainty =							0.0000000066e-9;			/**< \f$\frac{(1\ eV)}{c^2}\ (u)\f$ Uncertainty in electron volt-unified atomic mass unit relationship .*/ 
	const double electronVoltToHartreeUncertainty =									0.000000023e-2;				/**< \f$(1\ eV) \ (E_h)\f$ Uncertainty in electron volt-hartree relationship.*/ 
	const double electronVoltToHertzUncertainty =									0.000000015e14;				/**< \f$\frac{(1\ eV)}{h} \ (Hz)\f$ Uncertainty in electron volt-hertz relationship.*/ 
	const double electronVoltToInverseMeterUncertainty =							0.000000050e5;				/**< \f$\frac{(1\ eV)}{hc} \ (\frac{1}{m})\f$ Uncertainty in electron volt-inverse meter relationship.*/ 
	const double electronVoltToJouleUncertainty =									0.0000000098e-19;			/**< \f$(1\ eV) \ (J)\f$ Uncertainty in electron volt-joule relationship.*/ 
	const double electronVoltToKelvinUncertainty =									0.00000067e4;				/**< \f$\frac{(1\ eV)}{k} \ (K)\f$ Uncertainty in electron volt-kelvin relationship .*/ 
	const double electronVoltToKilogramUncertainty =								0.000000011e-36;			/**< \f$\frac{(1\ eV)}{c^2} \ (kg)\f$ Uncertainty in electron volt-kilogram relationship.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ElementaryCharge
	/// @{
	const double elementaryCharge =													1.6021766208e-19;			/**< \f$e \ (C)\f$ Elementary charge in coulombs.*/ 
	const double elementaryChargeOverh =											2.417989262e14;				/**< \f$\frac{e}{h} \ (\frac{A}{J})\f$ Elementary charge over h in amperes per joule.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double elementaryChargeUncertainty =										0.0000000098e-19;			/**< \f$e \ (C)\f$ Uncertainty in elementary charge in coulombs.*/ 
	const double elementaryChargeOverhUncertainty =									0.000000015e14;				/**< \f$\frac{e}{h} \ (\frac{A}{J})\f$ Uncertainty in elementary charge over h in amperes per joule.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-FaradayConstant
	/// @{
	const double FaradayConstant =													96485.33289;				/**< \f$F \ (\frac{C}{mol})\f$ Faraday constant in coulombs per mole.*/ 
	const double FaradayConstantForConventionalElectricCurrent =					96485.3251;					/**< \f$F^\ast \ (\frac{C_{90}}{mol})\f$ Faraday constant for conventional electric current in coulombs per mole.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double FaradayConstantUncertainty =										0.00059;					/**< \f$F \ (\frac{C}{mol})\f$ Uncertainty in Faraday constant in coulombs per mole.*/ 
	const double FaradayConstantForConventionalElectricCurrentUncertainty =			0.0012;						/**< \f$F^\ast \ (\frac{C_{90}}{mol})\f$ Uncertainty in Faraday constant for conventional electric current in coulombs per mole.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-FermiCouplingConstant
	/// @{
	const double FermiCouplingConstant =											1.1663787e-5;				/**< \f$\frac{G_F}{(\hbar c)^3} \ (\frac{1}{GeV^2})\f$ Fermi coupling constant in inverse gigaelectron volts squared.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double FermiCouplingConstantUncertainty =									0.0000006e-5;				/**< \f$\frac{G_F}{(\hbar c)^3} \ (\frac{1}{GeV^2})\f$ Uncertainty in Fermi coupling constant in inverse gigaelectron volts squared.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-FineStructureConstant
	/// @{
	const double fineStructureConstant =											7.2973525664e-3;			/**< \f$\alpha \ (1)\f$ Fine-structure constant.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double fineStructureConstantUncertainty =									0.0000000017e-3;			/**< \f$\alpha \ (1)\f$ Uncertainty in fine-structure constant.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-FirstRadiationConstant
	/// @{
	const double firstRadiationConstant =											3.741771790e-16;			/**< \f$c_1 \ (\frac{W}{m^2})\f$ First radiation constant  in watts per meter squared.*/ 
	const double firstRadiationConstantForSpectralRadiance =						1.191042953e-16;			/**< \f$c_{1L} \ (\frac{W}{m^2 sr})\f$ First radiation constant for spectral radiance in watts per meter squared steradian.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double firstRadiationConstantUncertainty =								0.000000046e-16;			/**< \f$c_1 \ (\frac{W}{m^2})\f$ Uncertainty in first radiation constant in watts per meter squared.*/ 
	const double firstRadiationConstantForSpectralRadianceUncertainty =				0.000000015e-16;			/**< \f$c_{1L} \ (\frac{W}{m^2 sr})\f$ Uncertainty in first radiation constant for spectral radiance in watts per meter squared steradian.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-HartreeEnergy
	/// @{
	const double HartreeEnergy =													4.359744650e-18;			/**< \f$E_h \ (J)\f$ Hartree energy in joules.*/ 
	const double HartreeEnergyIneV =												27.21138602;				/**< \f$E_h \ (eV)\f$ Hartree energy in electron volts.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double HartreeEnergyUncertainty =											0.000000054e-18;			/**< \f$E_h \ (J)\f$ Uncertainty in hartree energy in joules.*/ 
	const double HartreeEnergyIneVUncertainty =										0.00000017;					/**< \f$E_h \ (eV)\f$ Uncertainty in hartree energy in electron volts.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Hartree
	/// @{
	const double hartreeToAtomicMassUnit =											2.9212623197e-8;			/**< \f$\frac{(1\ E_h)}{c^2} \ (u)\f$ Hartree-unified atomic mass unit relationship.*/ 
	const double hartreeToElectronVolt =											27.21138602;				/**< \f$(1\ E_h) \ (eV)\f$ Hartree-electron volt relationship .*/	
	const double hartreeToHertz =													6.579683920711e15;			/**< \f$\frac{(1\ E_h)}{h} \ (Hz)\f$ Hartree-hertz relationship .*/ 
	const double hartreeToInverseMeter =											2.194746313702e7;			/**< \f$\frac{(1\ E_h)}{hc} \ (\frac{1}{m})\f$ Hartree-inverse meter relationship.*/ 
	const double hartreeToJoule =													4.359744650e-18;			/**< \f$(1\ E_h) \ (J)\f$ Hartree-joule relationship.*/ 
	const double hartreeToKelvin =													3.1577513e5;				/**< \f$\frac{(1\ E_h)}{k} \ (K)\f$ Hartree-kelvin relationship .*/ 
	const double hartreeToKilogram =												4.850870129e-35;			/**< \f$\frac{(1\ E_h)}{c^2} \ (kg)\f$ Hartree-kilogram relationship.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double hartreeToAtomicMassUnitUncertainty =								0.0000000013e-8;			/**< \f$\frac{(1\ E_h)}{c^2} \ (u)\f$ Uncertainty in hartree-unified atomic mass unit relationship.*/ 
	const double hartreeToElectronVoltUncertainty =									0.00000017;					/**< \f$(1\ E_h) \ (eV)\f$ Uncertainty in hartree-electron volt relationship .*/	
	const double hartreeToHertzUncertainty =										0.000000000039e15;			/**< \f$\frac{(1\ E_h)}{h} \ (Hz)\f$ Uncertainty in hartree-hertz relationship .*/ 
	const double hartreeToInverseMeterUncertainty =									0.000000000013e7;			/**< \f$\frac{(1\ E_h)}{hc} \ (\frac{1}{m})\f$ Uncertainty in hartree-inverse meter relationship.*/ 
	const double hartreeToJouleUncertainty =										0.000000054e-18;			/**< \f$(1\ E_h) \ (J)\f$ Uncertainty in hartree-joule relationship.*/ 
	const double hartreeToKelvinUncertainty =										0.0000018e5;				/**< \f$\frac{(1\ E_h)}{k} \ (K)\f$ Uncertainty in hartree-kelvin relationship .*/ 
	const double hartreeToKilogramUncertainty =										0.000000060e-35;			/**< \f$\frac{(1\ E_h)}{c^2} \ (kg)\f$ Uncertainty in hartree-kilogram relationship.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Helion
	/// @{
	const double helionElectronMassRatio =											5495.88527922;				/**< \f$\frac{m_{^3\textrm{He}}}{m_e} \ (1)\f$ Helion-electron mass ratio.*/ 
	const double heliongFactor =													-4.255250616;				/**< \f$g_{^3\textrm{He}} \ (1)\f$ Helion g factor.*/ 
	const double helionMagneticMoment =												-1.074617522e-26;			/**< \f$\mu_{^3\textrm{He}} \ (\frac{J}{T})\f$ Helion magnetic moment in joules per tesla.*/ 
	const double helionMagneticMomentToBohrMagnetonRatio =							-1.158740958e-3;			/**< \f$\frac{\mu_{^3\textrm{He}}}{\mu_B} \ (1)\f$ Helion magnetic moment to Bohr magneton ratio.*/ 
	const double helionMagneticMomentToNuclearMagnetonRatio =						-2.127625308;				/**< \f$\frac{\mu_{^3\textrm{He}}}{\mu_N} \ (1)\f$ Helion magnetic moment to nuclear magneton ratio.*/ 
	const double helionMass =														5.006412700e-27;			/**< \f$m_{^3\textrm{He}} \ (kg)\f$ Helion mass in kilograms.*/ 
	const double helionMassInJPercSquared =											4.499539341e-10;			/**< \f$m_{^3\textrm{He}} \ (\frac{J}{c^2})\f$ Helion mass in joules per speed of light squared.*/ 
	const double helionMassInMeVPercSquared =										2808.391586;				/**< \f$m_{^3\textrm{He}} \ (\frac{MeV}{c^2})\f$ Helion mass in megaelectron volts per speed of light squared.*/ 
	const double helionMassInu =													3.01493224673;				/**< \f$m_{^3\textrm{He}} \ (u)\f$ Helion mass in unified atomic mass units.*/ 
	const double helionMolarMass =													3.01493224673e-3;			/**< \f$M_{^3\textrm{He}} \ (\frac{kg}{mol})\f$ Helion molar mass in kilograms per mole.*/ 
	const double helionProtonMassRatio =											2.99315267046;				/**< \f$\frac{m_{^3\textrm{He}}}{m_p} \ (1)\f$ Helion-proton mass ratio .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double helionElectronMassRatioUncertainty =								0.00000027;					/**< \f$\frac{m_{^3\textrm{He}}}{m_e} \ (1)\f$ Uncertainty in helion-electron mass ratio.*/ 
	const double heliongFactorUncertainty =											0.000000050;				/**< \f$g_{^3\textrm{He}} \ (1)\f$ Uncertainty in helion g factor.*/ 
	const double helionMagneticMomentUncertainty =									0.000000014e-26;			/**< \f$\mu_{^3\textrm{He}} \ (\frac{J}{T})\f$ Uncertainty in helion magnetic moment in joules per tesla.*/ 
	const double helionMagneticMomentToBohrMagnetonRatioUncertainty =				0.000000014e-3;				/**< \f$\frac{\mu_{^3\textrm{He}}}{\mu_B} \ (1)\f$ Uncertainty in helion magnetic moment to Bohr magneton ratio.*/ 
	const double helionMagneticMomentToNuclearMagnetonRatioUncertainty =			0.000000025;				/**< \f$\frac{\mu_{^3\textrm{He}}}{\mu_N} \ (1)\f$ Uncertainty in helion magnetic moment to nuclear magneton ratio.*/ 
	const double helionMassUncertainty =											0.000000062e-27;			/**< \f$m_{^3\textrm{He}} \ (kg)\f$ Uncertainty in helion mass in kilograms.*/ 
	const double helionMassInJPercSquaredUncertainty =								0.000000055e-10;			/**< \f$m_{^3\textrm{He}} \ (\frac{J}{c^2})\f$ Uncertainty in helion mass in joules per speed of light squared.*/ 
	const double helionMassInMeVPercSquaredUncertainty =							0.000017;					/**< \f$m_{^3\textrm{He}} \ (\frac{MeV}{c^2})\f$ Uncertainty in helion mass in megaelectron volts per speed of light squared.*/ 
	const double helionMassInuUncertainty =											0.00000000012;				/**< \f$m_{^3\textrm{He}} \ (u)\f$ Uncertainty in helion mass in unified atomic mass units.*/ 
	const double helionMolarMassUncertainty =										0.00000000012e-3;			/**< \f$M_{^3\textrm{He}} \ (\frac{kg}{mol})\f$ Uncertainty in helion molar mass in kilograms per mole.*/ 
	const double helionProtonMassRatioUncertainty =									0.00000000029;				/**< \f$\frac{m_{^3\textrm{He}}}{m_p} \ (1)\f$ Uncertainty in helion-proton mass ratio .*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Hertz
	/// @{
	const double hertzToAtomicMassUnit =											4.4398216616e-24;			/**< \f$\frac{(1 Hz)h}{c^2} \ (u)\f$ Hertz-unified atomic mass unit relationship.*/ 
	const double hertzToElectronVolt =												4.135667662e-15;			/**< \f$(1 Hz)h \ (eV)\f$ Hertz-electron volt relationship.*/ 
	const double hertzToHartree =													1.5198298460088e-16;		/**< \f$(1 Hz)h \ (E_h)\f$ Hertz-hartree relationship.*/ 
	const double hertzToInverseMeter =												3.335640951e-9;				/**< \f$\frac{(1 Hz)}{c} \ (\frac{1}{m})\f$ Hertz-inverse meter relationship.*/ 
	const double hertzToJoule =														6.626070040e-34;			/**< \f$(1 Hz)h  \ (J)\f$ Hertz-joule relationship.*/ 
	const double hertzToKelvin =													4.7992447e-11;				/**< \f$\frac{(1 Hz)h}{k} \ (K)\f$ Hertz-kelvin relationship.*/ 
	const double hertzToKilogram =													7.372497201e-51;			/**< \f$\frac{(1 Hz)h}{c^2} \ (kg)\f$ Hertz-kilogram relationship.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double hertzToAtomicMassUnitUncertainty =									0.0000000020e-24;			/**< \f$\frac{(1 Hz)h}{c^2} \ (u)\f$ Uncertainty in hertz-unified atomic mass unit relationship.*/ 
	const double hertzToElectronVoltUncertainty =									0.000000025e-15;			/**< \f$(1 Hz)h \ (eV)\f$ Uncertainty in hertz-electron volt relationship.*/ 
	const double hertzToHartreeUncertainty =										0.0000000000090e-16;		/**< \f$(1 Hz)h \ (E_h)\f$ Uncertainty in hertz-hartree relationship.*/ 
	const double hertzToInverseMeterUncertainty =									0.0;						/**< \f$\frac{(1 Hz)}{c} \ (\frac{1}{m})\f$ Uncertainty in hertz-inverse meter relationship. Note should be 0.0 since it is a defined value. */ 
	const double hertzToJouleUncertainty =											0.000000081e-34;			/**< \f$(1 Hz)h  \ (J)\f$ Uncertainty in hertz-joule relationship.*/ 
	const double hertzToKelvinUncertainty =											0.0000028e-11;				/**< \f$\frac{(1 Hz)h}{k} \ (K)\f$ Uncertainty in hertz-kelvin relationship.*/ 
	const double hertzToKilogramUncertainty =										0.000000091e-51;			/**< \f$\frac{(1 Hz)h}{c^2} \ (kg)\f$ Uncertainty in hertz-kilogram relationship.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-FineStructureConstant 
	/// @{
	const double inverseFineStructureConstant =										137.035999139;				/**< \f$\alpha^{-1}  \ (1)\f$ Inverse fine-structure constant.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double inverseFineStructureConstantUncertainty =							0.000000031;            	/**< \f$\alpha^{-1}  \ (1)\f$ Uncertainty in inverse fine-structure constant.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-InverseMeter
	/// @{
	const double inverseMeterToAtomicMassUnit =										1.33102504900e-15;			/**< \f$\frac{(1\ m^-1)h}{c} \ (u)\f$ Inverse meter-unified atomic mass unit relationship.*/ 
	const double inverseMeterToElectronVolt =										1.2398419739e-6;			/**< \f$(1\ m^-1)hc \ (eV)\f$ Inverse meter-electron volt relationship.*/ 
	const double inverseMeterToHartree =											4.556335252767e-8;			/**< \f$(1\ m^-1)hc \ (E_h)\f$ Inverse meter-hartree relationship.*/ 
	const double inverseMeterToHertz =												299792458;					/**< \f$(1\ m^-1)c \ (Hz)\f$ Inverse meter-hertz relationship.*/ 
	const double inverseMeterToJoule =												1.986445824e-25;			/**< \f$(1\ m^-1)hc \ (J)\f$ Inverse meter-joule relationship.*/ 
	const double inverseMeterToKelvin =												1.43877736e-2;				/**< \f$\frac{(1\ m^-1)hc}{k} \ (K)\f$ Inverse meter-kelvin relationship.*/ 
	const double inverseMeterToKilogram =											2.210219057e-42;			/**< \f$\frac{(1\ m^-1)h}{c} \ (kg)\f$ Inverse meter-kilogram relationship.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double inverseMeterToAtomicMassUnitUncertainty =							0.00000000061e-15;			/**< \f$\frac{(1\ m^-1)h}{c} \ (u)\f$ Uncertainty in inverse meter-unified atomic mass unit relationship.*/ 
	const double inverseMeterToElectronVoltUncertainty =							0.0000000076e-6;			/**< \f$(1\ m^-1)hc \ (eV)\f$ Uncertainty in inverse meter-electron volt relationship.*/ 
	const double inverseMeterToHartreeUncertainty =									0.000000000027e-8;			/**< \f$(1\ m^-1)hc \ (E_h)\f$ Uncertainty in inverse meter-hartree relationship.*/ 
	const double inverseMeterToHertzUncertainty =									0.0;						/**< \f$(1\ m^-1)c \ (Hz)\f$ Uncertainty in inverse meter-hertz relationship. Note should be 0.0 since it is a defined value.*/ 
	const double inverseMeterToJouleUncertainty =									0.000000024e-25;			/**< \f$(1\ m^-1)hc \ (J)\f$ Uncertainty in inverse meter-joule relationship.*/ 
	const double inverseMeterToKelvinUncertainty =									0.00000083e-2;				/**< \f$\frac{(1\ m^-1)hc}{k} \ (K)\f$ Uncertainty in inverse meter-kelvin relationship.*/ 
	const double inverseMeterToKilogramUncertainty =								0.000000027e-42;			/**< \f$\frac{(1\ m^-1)h}{c} \ (kg)\f$ Uncertainty in inverse meter-kilogram relationship.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ConductanceQuantum 
	/// @{
	const double inverseOfConductanceQuantum =										12906.4037278;				/**< \f$G_0^{-1} \ (\Omega)\f$ Inverse of conductance quantum in ohms.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double inverseOfConductanceQuantumUncertainty =							0.0000029;					/**< \f$G_0^{-1} \ (\Omega)\f$ Uncertainty in inverse of conductance quantum in ohms.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-JosephsonConstant
	/// @{
	const double JosephsonConstant =												483597.8525e9;				/**< \f$K_J \ (\frac{Hz}{V})\f$ Josephson constant in hertz per volt.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double JosephsonConstantUncertainty =										0.0030e9;					/**< \f$K_J \ (\frac{Hz}{V})\f$ Uncertainty in Josephson constant in hertz per volt.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Joule
	/// @{
	const double jouleToAtomicMassUnit =											6.700535363e9;				/**< \f$\frac{(1\ J)}{c^2} \ (u)\f$ joule-unified atomic mass unit relationship.*/ 
	const double jouleToElectronVolt =												6.241509126e18;				/**< \f$(1\ J) \ (eV)\f$ joule-electron volt relationship.*/ 
	const double jouleToHartree =													2.293712317e17;				/**< \f$(1\ J) \ (E_h)\f$ joule-hartree relationship.*/ 
	const double jouleToHertz =														1.509190205e33;				/**< \f$\frac{(1\ J)}{h} \ (Hz)\f$ joule-hertz relationship.*/ 
	const double jouleToInverseMeter =												5.034116651e24;				/**< \f$\frac{(1\ J)}{hc} \ (\frac{1}{m})\f$ joule-inverse meter relationship.*/ 
	const double jouleToKelvin =													7.2429731e22;				/**< \f$\frac{(1\ J)}{k} \ (K)\f$ joule-kelvin relationship.*/ 
	const double jouleToKilogram =													1.112650056e-17;			/**< \f$\frac{(1\ J)}{c^2} \ (kg)\f$ joule-kilogram relationship.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double jouleToAtomicMassUnitUncertainty =									0.000000082e9;				/**< \f$\frac{(1\ J)}{c^2} \ (u)\f$ Uncertainty in joule-unified atomic mass unit relationship.*/ 
	const double jouleToElectronVoltUncertainty =									0.000000038e18;				/**< \f$(1\ J) \ (eV)\f$ Uncertainty in joule-electron volt relationship.*/ 
	const double jouleToHartreeUncertainty =										0.000000028e17;				/**< \f$(1\ J) \ (E_h)\f$ Uncertainty in joule-hartree relationship.*/ 
	const double jouleToHertzUncertainty =											0.000000019e33;				/**< \f$\frac{(1\ J)}{h} \ (Hz)\f$ Uncertainty in joule-hertz relationship.*/ 
	const double jouleToInverseMeterUncertainty =									0.000000062e24;				/**< \f$\frac{(1\ J)}{hc} \ (\frac{1}{m})\f$ Uncertainty in joule-inverse meter relationship.*/ 
	const double jouleToKelvinUncertainty =											0.0000042e22;				/**< \f$\frac{(1\ J)}{k} \ (K)\f$ Uncertainty in joule-kelvin relationship.*/ 
	const double jouleToKilogramUncertainty =										0.0;						/**< \f$\frac{(1\ J)}{c^2} \ (kg)\f$ Uncertainty in joule-kilogram relationship. Note should be 0.0 since it is a defined value.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Kelvin
	/// @{
	const double kelvinToAtomicMassUnit =											9.2510842e-14;				/**< \f$\frac{(1\ K)k}{c^2} \ (u)\f$ Kelvin-unified atomic mass unit relationship.*/ 
	const double kelvinToElectronVolt =												8.6173303e-5;				/**< \f$(1\ K)k \ (eV)\f$ Kelvin-electron volt relationship.*/ 
	const double kelvinToHartree =													3.1668105e-6;				/**< \f$(1\ K)k \ (E_h)\f$ Kelvin-hartree relationship.*/ 
	const double kelvinToHertz =													2.0836612e10;				/**< \f$\frac{(1\ K)k}{h} \ (Hz)\f$ Kelvin-hertz relationship.*/ 
	const double kelvinToInverseMeter =												69.503457;					/**< \f$\frac{(1\ K)k}{hc} \ (\frac{1}{m})\f$ Kelvin-inverse meter relationship.*/ 
	const double kelvinToJoule =													1.38064852e-23;				/**< \f$(1\ K)k \ (J)\f$ Kelvin-joule relationship.*/ 
	const double kelvinToKilogram =													1.53617865e-40;				/**< \f$\frac{(1\ K)k}{c^2} \ (kg)\f$ Kelvin-kilogram relationship.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double kelvinToAtomicMassUnitUncertainty =								0.0000053e-14;				/**< \f$\frac{(1\ K)k}{c^2} \ (u)\f$ Uncertainty in kelvin-unified atomic mass unit relationship.*/ 
	const double kelvinToElectronVoltUncertainty =									0.0000050e-5;				/**< \f$(1\ K)k \ (eV)\f$ Uncertainty in kelvin-electron volt relationship.*/ 
	const double kelvinToHartreeUncertainty =										0.0000018e-6;				/**< \f$(1\ K)k \ (E_h)\f$ Uncertainty in kelvin-hartree relationship.*/ 
	const double kelvinToHertzUncertainty =											0.0000012e10;				/**< \f$\frac{(1\ K)k}{h} \ (Hz)\f$ Uncertainty in kelvin-hertz relationship.*/ 
	const double kelvinToInverseMeterUncertainty =									0.000040;					/**< \f$\frac{(1\ K)k}{hc} \ (\frac{1}{m})\f$ Uncertainty in kelvin-inverse meter relationship.*/ 
	const double kelvinToJouleUncertainty =											0.00000079e-23;				/**< \f$(1\ K)k \ (J)\f$ Uncertainty in kelvin-joule relationship.*/ 
	const double kelvinToKilogramUncertainty =										0.00000088e-40;				/**< \f$\frac{(1\ K)k}{c^2} \ (kg)\f$ Uncertainty in kelvin-kilogram relationship.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Kilogram
	/// @{
	const double kilogramToAtomicMassUnit =											6.022140857e26;				/**< \f$(1\ kg)\ (u)\f$ Kilogram-unified atomic mass unit relationship.*/ 
	const double kilogramToElectronVolt =											5.609588650e35;				/**< \f$(1\ kg)c^2 \ (eV)\f$ Kilogram-electron volt relationship.*/ 
	const double kilogramToHartree =												2.061485823e34;				/**< \f$(1\ kg)c^2 \ (E_h)\f$ Kilogram-hartree relationship.*/ 
	const double kilogramToHertz =													1.356392512e50;				/**< \f$\frac{(1\ kg)c^2}{h} \ (Hz)\f$ Kilogram-hertz relationship .*/ 
	const double kilogramToInverseMeter =											4.524438411e41;				/**< \f$\frac{(1\ kg)c}{h} \ (\frac{1}{m})\f$ Kilogram-inverse meter relationship.*/ 
	const double kilogramToJoule =													8.987551787e16;				/**< \f$(1\ kg)c^2 \ (J)\f$ Kilogram-joule relationship.*/ 
	const double kilogramToKelvin =													6.5096595e39;				/**< \f$\frac{(1\ kg)c^2}{K} \ (K)\f$ Kilogram-kelvin relationship.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double kilogramToAtomicMassUnitUncertainty =								0.000000074e26;				/**< \f$(1\ kg)\ (u)\f$ Uncertainty in kilogram-unified atomic mass unit relationship.*/ 
	const double kilogramToElectronVoltUncertainty =								0.000000034e35;				/**< \f$(1\ kg)c^2 \ (eV)\f$ Uncertainty in kilogram-electron volt relationship.*/ 
	const double kilogramToHartreeUncertainty =										0.000000025e34;				/**< \f$(1\ kg)c^2 \ (E_h)\f$ Uncertainty in kilogram-hartree relationship.*/ 
	const double kilogramToHertzUncertainty =										0.000000017e50;				/**< \f$\frac{(1\ kg)c^2}{h} \ (Hz)\f$ Uncertainty in kilogram-hertz relationship .*/ 
	const double kilogramToInverseMeterUncertainty =								0.000000056e41;				/**< \f$\frac{(1\ kg)c}{h} \ (\frac{1}{m})\f$ Uncertainty in kilogram-inverse meter relationship.*/ 
	const double kilogramToJouleUncertainty =										0.0;						/**< \f$(1\ kg)c^2 \ (J)\f$ Uncertainty in kilogram-joule relationship. Note should be 0.0 since it is a defined value.*/ 
	const double kilogramToKelvinUncertainty =										0.0000037e39;				/**< \f$\frac{(1\ kg)c^2}{K} \ (K)\f$ Uncertainty in kilogram-kelvin relationship.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Silicon
	/// @{
	const double latticeParameterOfSilicon =										543.1020504e-12;			/**< \f$a \ (m)\f$ Lattice parameter of silicon in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double latticeParameterOfSiliconUncertainty =								0.0000089e-12;				/**< \f$a \ (m)\f$ Uncertainty in lattice parameter of silicon in meters.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-LoschmidtConstant
	/// @{
	const double LoschmidtConstant =												2.6516467e25;				/**< \f$n_0 \ (\frac{1}{m^3})\f$ Loschmidt constant at 273.15 K, 100 kPa in inverse meters cubed.*/ 
	const double LoschmidtConstantatm =												2.6867811e25;				/**< \f$n_0 \ (\frac{1}{m^3})\f$ Loschmidt constant at 273.15 K, 101.325 kPa (1 atm) in inverse meters cubed.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double LoschmidtConstantUncertainty =										0.0000015e25;				/**< \f$n_0 \ (\frac{1}{m^3})\f$ Uncertainty in Loschmidt constant at 273.15 K, 100 kPa in inverse meters cubed.*/ 
	const double LoschmidtConstantatmUncertainty =									0.0000015e25;				/**< \f$n_0 \ (\frac{1}{m^3})\f$ Uncertainty in Loschmidt constant at 273.15 K, 101.325 kPa (1 atm) in inverse meters cubed.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-MagneticConstant
	/// @{
	const double magneticConstant =													12.566370614e-7;			/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Magnetic constant in newtons per ampere squared.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double magneticConstantUncertainty =										0.0;						/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Uncertainty in magnetic constant in newtons per ampere squared.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-MagneticFluxQuantum
	/// @{
	const double magneticFluxQuantum =												2.067833831e-15;			/**< \f$\Phi_0 \ (Wb)\f$ Magnetic flux quantum in weber.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double magneticFluxQuantumUncertainty =									0.000000013e-15;			/**< \f$\Phi_0 \ (Wb)\f$ Uncertainty in magnetic flux quantum in weber.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-MolarGasConstant
	/// @{
	const double molarGasConstant =													8.3144598;					/**< \f$R \ (\frac{J}{mol\ K})\f$ Molar gas constant in joules per mole kelvin.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double molarGasConstantUncertainty =										0.0000048;					/**< \f$R \ (\frac{J}{mol\ K})\f$ Uncertainty in molar gas constant in joules per mole kelvin.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-MolarMassConstant
	/// @{
	const double molarMassConstant =												1e-3;						/**< \f$M_u \ (\frac{kg}{mol})\f$ Molar mass constant in kilograms per mole.*/ 
	const double molarMassOfCarbon12 =												12e-3;						/**< \f$M({^{12}C}) \ (\frac{kg}{mol})\f$ Molar mass of carbon-12 in kilograms per mole.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double molarMassConstantUncertainty =										0.0;						/**< \f$M_u \ (\frac{kg}{mol})\f$ Uncertainty in molar mass constant in kilograms per mole. Note should be 0.0 since it is a defined value.*/ 
	const double molarMassOfCarbon12Uncertainty =									0.0;						/**< \f$M({^{12}C}) \ (\frac{kg}{mol})\f$ Uncertainty in molar mass of carbon-12 in kilograms per mole. Note should be 0.0 since it is a defined value.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-MolarPlanckConstant
	/// @{
	const double molarPlanckConstant =												3.9903127110e-10;			/**< \f$N_A h \ (\frac{J\ s}{mol})\f$ Molar Planck constant in joules second per mole.*/ 
	const double molarPlanckConstantTimesc =										0.119626565582;				/**< \f$N_A hc \ (\frac{J\ m}{mol})\f$ Molar Planck constant times c in joules meter per mole.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double molarPlanckConstantUncertainty =									0.0000000018e-10;			/**< \f$N_A h \ (\frac{J\ s}{mol})\f$ Uncertainty in molar Planck constant in joules second per mole.*/ 
	const double molarPlanckConstantTimescUncertainty =								0.000000000054;				/**< \f$N_A hc \ (\frac{J\ m}{mol})\f$ Uncertainty in molar Planck constant times c in joules meter per mole.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-MolarVolume 
	/// @{
	const double molarVolumeOfIdealGas =											22.710947e-3;				/**< \f$V_m \ (\frac{m^3}{mol})\f$ Molar volume of ideal gas at 273.15 K, 100 kPa in meters cubed per mole.*/ 
	const double molarVolumeOfIdealGasatm =											22.413962e-3;				/**< \f$V_m \ (\frac{m^3}{mol})\f$ Molar volume of ideal gas at 273.15 K, 101.325 kPa (1 atm) in meters cubed per mole.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double molarVolumeOfIdealGasUncertainty =									0.000013e-3;				/**< \f$V_m \ (\frac{m^3}{mol})\f$ Uncertainty in molar volume of ideal gas at 273.15 K, 100 kPa in meters cubed per mole.*/ 
	const double molarVolumeOfIdealGasatmUncertainty =								0.000013e-3;				/**< \f$V_m \ (\frac{m^3}{mol})\f$ Uncertainty in molar volume of ideal gas at 273.15 K, 101.325 kPa (1 atm) in meters cubed per mole.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Silicon
	/// @{
	const double molarVolumeOfSilicon =												12.05883214e-6;				/**< \f$V_m(Si) \ (\frac{m^3}{mol})\f$ Molar volume of silicon in meters cubed per mole.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double molarVolumeOfSiliconUncertainty =									0.00000061e-6;				/**< \f$V_m(Si) \ (\frac{m^3}{mol})\f$ Uncertainty in molar volume of silicon in meters cubed per mole.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Molybdenum
	/// @{
	const double MoXUnit =															1.00209952e-13;				/**< \f$xu(MoK\alpha_1) \ (m)\f$ Mo x unit in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double MoXUnitUncertainty =												0.00000053e-13;				/**< \f$xu(MoK\alpha_1) \ (m)\f$ Uncertainty in Mo x unit in meters.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Muon
	/// @{
	const double muonComptonWavelength =											11.73444111e-15;			/**< \f$\lambda_{C,\mu} \ (m)\f$ Muon Compton wavelength in meters.*/ 
	const double muonComptonWavelengthOver2pi =										1.867594308e-15;			/**< \f$\frac{\lambda_{C,\mu}}{2\pi} \ (m)\f$ Muon Compton wavelength over 2 pi in meters.*/ 
	const double muonElectronMassRatio =											206.7682826;				/**< \f$\frac{m_\mu}{m_e} \ (1)\f$ Muon-electron mass ratio.*/ 
	const double muongFactor =														-2.0023318418;				/**< \f$g_\mu \ (1)\f$ Muon g factor.*/ 
	const double muonMagneticMoment =												-4.49044826e-26;			/**< \f$\mu_\mu \ (\frac{J}{T})\f$ Muon magnetic moment in joules per tesla.*/ 
	const double muonMagneticMomentAnomaly =										1.16592089e-3;				/**< \f$a_\mu \ (1)\f$ Muon magnetic moment anomaly.*/ 
	const double muonMagneticMomentToBohrMagnetonRatio =							-4.84197048e-3;				/**< \f$\frac{\mu_\mu}{\mu_B} \ (1)\f$ Muon magnetic moment to Bohr magneton ratio.*/ 
	const double muonMagneticMomentToNuclearMagnetonRatio =							-8.89059705;				/**< \f$\frac{\mu_\mu}{\mu_N} \ (1)\f$ Muon magnetic moment to nuclear magneton ratio .*/ 
	const double muonMass =															1.883531594e-28;			/**< \f$m_\mu \ (kg)\f$ Muon mass in kilograms.*/ 
	const double muonMassInJPercSquared =											1.692833774e-11;			/**< \f$m_\mu \ (\frac{J}{c^2})\f$ Muon mass in joules per speed of light squared.*/ 
	const double muonMassInMeVPercSquared =											105.6583745;				/**< \f$m_\mu \ (\frac{MeV}{c^2})\f$ Muon mass in megaelectron volts per speed of light squared.*/ 
	const double muonMassInu =														0.1134289257;				/**< \f$m_\mu \ (u)\f$ Muon mass in unified atomic mass units.*/ 
	const double muonMolarMass =													0.1134289257e-3;			/**< \f$M_\mu \ (\frac{kg}{mol})\f$ Muon molar mass in kilograms per mole.*/ 
	const double muonNeutronMassRatio =												0.1124545167;				/**< \f$\frac{m_\mu}{m_n} \ (1)\f$ Muon-neutron mass ratio.*/ 
	const double muonProtonMagneticMomentRatio =									-3.183345142;				/**< \f$\frac{\mu_\mu}{\mu_p} \ (1)\f$ Muon-proton magnetic moment ratio.*/ 
	const double muonProtonMassRatio =												0.1126095262;				/**< \f$\frac{m_\mu}{m_p} \ (1)\f$ Muon-proton mass ratio.*/ 
	const double muonTauMassRatio =													5.94649e-2;					/**< \f$\frac{m_\mu}{m_\tau} \ (1)\f$ Muon-tau mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double muonComptonWavelengthUncertainty =									0.00000026e-15;				/**< \f$\lambda_{C,\mu} \ (m)\f$ Uncertainty in muon Compton wavelength in meters.*/ 
	const double muonComptonWavelengthOver2piUncertainty =							0.000000042e-15;			/**< \f$\frac{\lambda_{C,\mu}}{2\pi} \ (m)\f$ Uncertainty in muon Compton wavelength over 2 pi in meters.*/ 
	const double muonElectronMassRatioUncertainty =									0.0000046;					/**< \f$\frac{m_\mu}{m_e} \ (1)\f$ Uncertainty in muon-electron mass ratio.*/ 
	const double muongFactorUncertainty =											0.0000000013;				/**< \f$g_\mu \ (1)\f$ Uncertainty in muon g factor.*/ 
	const double muonMagneticMomentUncertainty =									0.00000010e-26;				/**< \f$\mu_\mu \ (\frac{J}{T})\f$ Uncertainty in muon magnetic moment in joules per tesla.*/ 
	const double muonMagneticMomentAnomalyUncertainty =								0.00000063e-3;				/**< \f$a_\mu \ (1)\f$ Uncertainty in muon magnetic moment anomaly.*/ 
	const double muonMagneticMomentToBohrMagnetonRatioUncertainty =					0.00000011e-3;				/**< \f$\frac{\mu_\mu}{\mu_B} \ (1)\f$ Uncertainty in muon magnetic moment to Bohr magneton ratio.*/ 
	const double muonMagneticMomentToNuclearMagnetonRatioUncertainty =				0.00000020;					/**< \f$\frac{\mu_\mu}{\mu_N} \ (1)\f$ Uncertainty in muon magnetic moment to nuclear magneton ratio .*/ 
	const double muonMassUncertainty =												0.000000048e-28;			/**< \f$m_\mu \ (kg)\f$ Uncertainty in muon mass in kilograms.*/ 
	const double muonMassInJPercSquaredUncertainty =								0.000000043e-11;			/**< \f$m_\mu \ (\frac{J}{c^2})\f$ Uncertainty in muon mass in joules per speed of light squared.*/ 
	const double muonMassInMeVPercSquaredUncertainty =								0.0000024;					/**< \f$m_\mu \ (\frac{MeV}{c^2})\f$ Uncertainty in muon mass in megaelectron volts per speed of light squared.*/ 
	const double muonMassInuUncertainty =											0.0000000025;				/**< \f$m_\mu \ (u)\f$ Uncertainty in muon mass in unified atomic mass units.*/ 
	const double muonMolarMassUncertainty =											0.0000000025e-3;			/**< \f$M_\mu \ (\frac{kg}{mol})\f$ Uncertainty in muon molar mass in kilograms per mole.*/ 
	const double muonNeutronMassRatioUncertainty =									0.0000000025;				/**< \f$\frac{m_\mu}{m_n} \ (1)\f$ Uncertainty in muon-neutron mass ratio.*/ 
	const double muonProtonMagneticMomentRatioUncertainty =							0.000000071;				/**< \f$\frac{\mu_\mu}{\mu_p} \ (1)\f$ Uncertainty in muon-proton magnetic moment ratio.*/ 
	const double muonProtonMassRatioUncertainty =									0.0000000025;				/**< \f$\frac{m_\mu}{m_p} \ (1)\f$ Uncertainty in muon-proton mass ratio.*/ 
	const double muonTauMassRatioUncertainty =										0.00054e-2;					/**< \f$\frac{m_\mu}{m_\tau} \ (1)\f$ Uncertainty in muon-tau mass ratio.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-NaturalUnit
	/// @{
	const double naturalUnitOfAction =												1.054571800e-34;			/**< \f$\hbar \ (J\ s)\f$ Natural unit of action in joules second.*/ 
	const double naturalUnitOfActionIneVs =											6.582119514e-16;			/**< \f$\hbar \ (eV\ s)\f$ Natural unit of action in electron volts second.*/ 
	const double naturalUnitOfEnergy =												8.18710565e-14;				/**< \f$m_e c^2 \ (J)\f$ Natural unit of energy in joules.*/ 
	const double naturalUnitOfEnergyInMeV =											0.5109989461;				/**< \f$m_e c^2 \ (MeV)\f$ Natural unit of energy in megaelectron volts.*/ 
	const double naturalUnitOfLength =												386.15926764e-15;			/**< \f$\frac{\lambda_C}{2\pi} \ (m)\f$ Natural unit of length in meters.*/ 
	const double naturalUnitOfMass =												9.10938356e-31;				/**< \f$m_e \ (kg)\f$ Natural unit of mass in kilograms.*/ 
	const double naturalUnitOfMomentum =											2.730924488e-22;			/**< \f$m_e c \ (\frac{kg\ m}{s})\f$ Natural unit of momentum in kilogram meters per second.*/ 
	const double naturalUnitOfMomentumInMeVPerc =									0.5109989461;				/**< \f$m_e c \ (\frac{MeV}{c})\f$ Natural unit of momentum in megaelectron volts per speed of light.*/ 
	const double naturalUnitOfTime =												1.28808866712e-21;			/**< \f$\frac{\hbar}{m_e c^2} \ (s)\f$ Natural unit of time in seconds.*/ 
	const double naturalUnitOfVelocity =											299792458;					/**< \f$c \ (\frac{m}{s})\f$ Natural unit of velocity in meters per second.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double naturalUnitOfActionUncertainty =									0.000000013e-34;			/**< \f$\hbar \ (J\ s)\f$ Uncertainty in natural unit of action in joules second.*/ 
	const double naturalUnitOfActionIneVsUncertainty =								0.000000040e-16;			/**< \f$\hbar \ (eV\ s)\f$ Uncertainty in natural unit of action in electron volts second.*/ 
	const double naturalUnitOfEnergyUncertainty =									0.00000010e-14;				/**< \f$m_e c^2 \ (J)\f$ Uncertainty in natural unit of energy in joules.*/ 
	const double naturalUnitOfEnergyInMeVUncertainty =								0.0000000031;				/**< \f$m_e c^2 \ (MeV)\f$ Uncertainty in natural unit of energy in megaelectron volts.*/ 
	const double naturalUnitOfLengthUncertainty =									0.00000018e-15;				/**< \f$\frac{\lambda_C}{2\pi} \ (m)\f$ Uncertainty in natural unit of length in meters.*/ 
	const double naturalUnitOfMassUncertainty =										0.00000011e-31;				/**< \f$m_e \ (kg)\f$ Uncertainty in natural unit of mass in kilograms.*/ 
	const double naturalUnitOfMomentumUncertainty =									0.000000034e-22;			/**< \f$m_e c \ (\frac{kg\ m}{s})\f$ Uncertainty in natural unit of momentum in kilogram meters per second.*/ 
	const double naturalUnitOfMomentumInMeVPercUncertainty =						0.0000000031;				/**< \f$m_e c \ (\frac{MeV}{c})\f$ Uncertainty in natural unit of momentum in megaelectron volts per speed of light.*/ 
	const double naturalUnitOfTimeUncertainty =										0.00000000058e-21;			/**< \f$\frac{\hbar}{m_e c^2} \ (s)\f$ Uncertainty in natural unit of time in seconds.*/ 
	const double naturalUnitOfVelocityUncertainty =									0.0; 						/**< \f$c \ (\frac{m}{s})\f$ Uncertainty in natural unit of velocity in meters per second. Note should be 0.0 since it is a defined value.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Neutron
	/// @{
	const double neutronComptonWavelength =											1.31959090481e-15;			/**< \f$\lambda_{C,n} \ (m)\f$ Neutron Compton wavelength in meters.*/
	const double neutronComptonWavelengthOver2Pi =									0.21001941536e-15;			/**< \f$\frac{\lambda_{C,n}}{2\pi} \ (m)\f$ Neutron Compton wavelength over 2 pi in meters.*/
	const double neutronElectronMagneticMomentRatio =								1.04066882e-3;				/**< \f$\frac{\mu_n}{\mu_e} \ (1)\f$ Neutron-electron magnetic moment ratio.*/
	const double neutronElectronMassRatio =											1838.68366158;				/**< \f$\frac{m_n}{m_e} \ (1)\f$ Neutron-electron mass ratio.*/
	const double neutrongFactor =													-3.82608545;				/**< \f$g_n \ (1)\f$ Neutron g factor.*/
	const double neutronGyromagneticRatio =											1.83247172e8;				/**< \f$\gamma_n \ (\frac{rad\ Hz}{T})\f$ Neutron gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronGyromagneticRatioOver2Pi =									29.1646933;					/**< \f$\frac{\gamma_n}{2\pi} \ (\frac{rad\ MHz}{T})\f$ Neutron gyromagnetic ratio over 2 pi in radian megahertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronMagneticMoment =											-0.96623650e-26;			/**< \f$\mu_n \ (\frac{J}{T})\f$ Neutron magnetic moment in joules per tesla.*/
	const double neutronMagneticMomentToBohrMagnetonRatio =							-1.04187563e-3;				/**< \f$\frac{\mu_n}{\mu_B} \ (1)\f$ Neutron magnetic moment to Bohr magneton ratio.*/
	const double neutronMagneticMomentToNuclearMagnetonRatio =						-1.91304273;				/**< \f$\frac{\mu_n}{\mu_N} \ (1)\f$ Neutron magnetic moment to nuclear magneton ratio.*/
	const double neutronMass =														1.674927471e-27;			/**< \f$m_n \ (kg)\f$ Neutron mass in kilograms.*/
	const double neutronMassInJPercSquared =										1.505349739e-10;			/**< \f$m_n \ (\frac{J}{c^2})\f$ Neutron mass in joules per speed of light squared.*/
	const double neutronMassInMeVPercSquared =										939.5654133;				/**< \f$m_n \ (\frac{MeV}{c^2})\f$ Neutron mass in megaelectron volts per speed of light squared.*/
	const double neutronMassInu =													1.00866491588;				/**< \f$m_n \ (u)\f$ Neutron mass in unified atomic mass unit.*/
	const double neutronMolarMass =													1.00866491588e-3;			/**< \f$M_n \ (\frac{kg}{mol})\f$ Neutron molar mass in kilogram per mole.*/
	const double neutronMuonMassRatio =												8.89248408;					/**< \f$\frac{m_n}{m_\mu} \ (1)\f$ Neutron-muon mass ratio.*/
	const double neutronProtonMagneticMomentRatio =									-0.68497934;				/**< \f$\frac{\mu_n}{\mu_p} \ (1)\f$ Neutron-proton magnetic moment ratio.*/
	const double neutronProtonMassDifference =										2.30557377e-30;				/**< \f$m_n - m_p \ (kg)\f$ Neutron-proton mass difference in kilograms.*/
	const double neutronProtonMassDifferenceInJPercSquared =						2.07214637e-13;				/**< \f$m_n - m_p \ (\frac{J}{c^2})\f$ Neutron-proton mass difference in joules per speed of light squared.*/
	const double neutronProtonMassDifferenceInMeVPercSquared =						1.29333205;					/**< \f$m_n - m_p \ (\frac{MeV}{c^2})\f$ Neutron-proton mass difference in megaelectron volts per speed of light squared.*/
	const double neutronProtonMassDifferenceInu =									0.00138844900;				/**< \f$m_n - m_p \ (u)\f$ Neutron-proton mass difference in unified atomic mass unit.*/
	const double neutronProtonMassRatio =											1.00137841898;				/**< \f$\frac{m_n}{m_p} \ (1)\f$ Neutron-proton mass ratio.*/
	const double neutronTauMassRatio =												0.528790;					/**< \f$\frac{m_n}{m_\tau} \ (1)\f$ Neutron-tau mass ratio.*/
	const double neutronToShieldedProtonMagneticMomentRatio =						-0.68499694;				/**< \f$\frac{\mu_n}{\mu'_p} \ (1)\f$ Neutron to shielded proton magnetic moment ratio.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double neutronComptonWavelengthUncertainty =								0.00000000088e-15;			/**< \f$\lambda_{C,n} \ (m)\f$ Uncertainty in neutron Compton wavelength in meters.*/
	const double neutronComptonWavelengthOver2PiUncertainty =						0.00000000014e-15;			/**< \f$\frac{\lambda_{C,n}}{2\pi} \ (m)\f$ Uncertainty in neutron Compton wavelength over 2 pi in meters.*/
	const double neutronElectronMagneticMomentRatioUncertainty =					0.00000025e-3;				/**< \f$\frac{\mu_n}{\mu_e} \ (1)\f$ Uncertainty in neutron-electron magnetic moment ratio.*/
	const double neutronElectronMassRatioUncertainty =								0.00000090;					/**< \f$\frac{m_n}{m_e} \ (1)\f$ Uncertainty in neutron-electron mass ratio .*/
	const double neutrongFactorUncertainty =										0.00000090;					/**< \f$g_n \ (1)\f$ Uncertainty in neutron g factor.*/
	const double neutronGyromagneticRatioUncertainty =								0.00000043e8;				/**< \f$\gamma_n \ (\frac{rad\ Hz}{T})\f$ Uncertainty in neutron gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronGyromagneticRatioOver2PiUncertainty =						0.0000069;					/**< \f$\frac{\gamma_n}{2\pi} \ (\frac{rad\ MHz}{T})\f$ Uncertainty in neutron gyromagnetic ratio over 2 pi in radian megahertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronMagneticMomentUncertainty =									0.00000023e-26;				/**< \f$\mu_n \ (\frac{J}{T})\f$ Uncertainty in neutron magnetic moment in joules per tesla.*/
	const double neutronMagneticMomentToBohrMagnetonRatioUncertainty =				0.00000025e-3;				/**< \f$\frac{\mu_n}{\mu_B} \ (1)\f$ Uncertainty in neutron magnetic moment to Bohr magneton ratio.*/
	const double neutronMagneticMomentToNuclearMagnetonRatioUncertainty =			0.00000045;					/**< \f$\frac{\mu_n}{\mu_N} \ (1)\f$ Uncertainty in neutron magnetic moment to nuclear magneton ratio.*/
	const double neutronMassUncertainty =											0.000000021e-27;			/**< \f$m_n \ (kg)\f$ Uncertainty in neutron mass in kilograms.*/
	const double neutronMassInJPercSquaredUncertainty =								0.000000019e-10;			/**< \f$m_n \ (\frac{J}{c^2})\f$ Uncertainty in neutron mass in joules per speed of light squared.*/
	const double neutronMassInMeVPercSquaredUncertainty =							0.0000058;					/**< \f$m_n \ (\frac{MeV}{c^2})\f$ Uncertainty in neutron mass in megaelectron volts per speed of light squared.*/
	const double neutronMassInuUncertainty =										0.00000000049;				/**< \f$m_n \ (u)\f$ Uncertainty in neutron mass in unified atomic mass unit.*/
	const double neutronMolarMassUncertainty =										0.00000000049e-3;			/**< \f$M_n \ (\frac{kg}{mol})\f$ Uncertainty in neutron molar mass in kilogram per mole.*/
	const double neutronMuonMassRatioUncertainty =									0.00000020;					/**< \f$\frac{m_n}{m_\mu} \ (1)\f$ Uncertainty in neutron-muon mass ratio.*/
	const double neutronProtonMagneticMomentRatioUncertainty =						0.00000016;					/**< \f$\frac{\mu_n}{\mu_p} \ (1)\f$ Uncertainty in neutron-proton magnetic moment ratio.*/
	const double neutronProtonMassDifferenceUncertainty =							0.00000085e-30;				/**< \f$m_n - m_p \ (kg)\f$ Uncertainty in neutron-proton mass difference in kilograms.*/
	const double neutronProtonMassDifferenceInJPercSquaredUncertainty =				0.00000076e-13;				/**< \f$m_n - m_p \ (\frac{J}{c^2})\f$ Uncertainty in neutron-proton mass difference in joules per speed of light squared.*/
	const double neutronProtonMassDifferenceInMeVPercSquaredUncertainty =			0.00000048;					/**< \f$m_n - m_p \ (\frac{MeV}{c^2})\f$ Uncertainty in neutron-proton mass difference in megaelectron volts per speed of light squared.*/
	const double neutronProtonMassDifferenceInuUncertainty =						0.00000000051;				/**< \f$m_n - m_p \ (u)\f$ Uncertainty in neutron-proton mass difference in unified atomic mass unit.*/
	const double neutronProtonMassRatioUncertainty =								0.00000000051;				/**< \f$\frac{m_n}{m_p} \ (1)\f$ Uncertainty in neutron-proton mass ratio.*/
	const double neutronTauMassRatioUncertainty =									0.000048;					/**< \f$\frac{m_n}{m_\tau} \ (1)\f$ Uncertainty in neutron-tau mass ratio.*/
	const double neutronToShieldedProtonMagneticMomentRatioUncertainty =			0.00000016;					/**< \f$\frac{\mu_n}{\mu'_p} \ (1)\f$ Uncertainty in neutron to shielded proton magnetic moment ratio.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-GravitationalConstant
	/// @{            
	const double NewtonianConstantOfGravitation =									6.67408e-11;				/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Newtonian constant of gravitation in meters cubed per kilogram second squared.*/
	const double NewtonianConstantOfGravitationOverhbarc =							6.70861e-39;				/**< \f$\frac{G}{\hbar c} \ ((\frac{GeV}{c^2})^{-2})\f$ Newtonian constant of gravitation over h-bar c in speed of light to the fourth per gigaelectron volt squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double NewtonianConstantOfGravitationUncertainty =						0.00031e-11;				/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Uncertainty in Newtonian constant of gravitation in meters cubed per kilogram second squared.*/
	const double NewtonianConstantOfGravitationOverhbarcUncertainty =				0.00031e-39;				/**< \f$\frac{G}{\hbar c} \ ((\frac{GeV}{c^2})^{-2})\f$ Uncertainty in Newtonian constant of gravitation over h-bar c in speed of light to the fourth per gigaelectron volt squared.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-NuclearMagneton
	/// @{
	const double nuclearMagneton =													5.050783699e-27;			/**< \f$\mu_N \ (\frac{J}{T})\f$ Nuclear magneton in joules per tesla.*/
	const double nuclearMagnetonIneVPerT =											3.1524512550e-8;			/**< \f$ \ (\frac{eV}{T})\f$ Nuclear magneton in electron volts per tesla.*/
	const double nuclearMagnetonInInversemT =										2.542623432e-2;				/**< \f$\frac{\mu_N}{hc} \ (\frac{1}{m\ T})\f$ Nuclear magneton in inverse meters tesla.*/
	const double nuclearMagnetonInKPerT =											3.6582690e-4;				/**< \f$\frac{\mu_N}{k} \ (\frac{K}{T})\f$ Nuclear magneton in kelvins per tesla.*/
	const double nuclearMagnetonInMHzPerT =											7.622593285;				/**< \f$\frac{\mu_N}{h} \ (\frac{MHz}{T})\f$ Nuclear magneton in megahertz per tesla.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double nuclearMagnetonUncertainty =										0.000000031e-27;			/**< \f$\mu_N \ (\frac{J}{T})\f$ Uncertainty in nuclear magneton in joules per tesla.*/
	const double nuclearMagnetonIneVPerTUncertainty =								0.0000000015e-8;			/**< \f$ \ (\frac{eV}{T})\f$ Uncertainty in nuclear magneton in electron volts per tesla.*/
	const double nuclearMagnetonInInversemTUncertainty =							0.000000016e-2;				/**< \f$\frac{\mu_N}{hc} \ (\frac{1}{m\ T})\f$ Uncertainty in nuclear magneton in inverse meters tesla.*/
	const double nuclearMagnetonInKPerTUncertainty =								0.0000021e-4;				/**< \f$\frac{\mu_N}{k} \ (\frac{K}{T})\f$ Uncertainty in nuclear magneton in kelvins per tesla.*/
	const double nuclearMagnetonInMHzPerTUncertainty =								0.000000047;				/**< \f$\frac{\mu_N}{h} \ (\frac{MHz}{T})\f$ Uncertainty in nuclear magneton in megahertz per tesla.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-PlanckConstant
	/// @{
	const double PlanckConstant =													6.626070040e-34;			/**< \f$h \ (J s)\f$ Planck constant in joule seconds.*/
	const double PlanckConstantIneVs =												4.135667662e-15;			/**< \f$h \ (eV s)\f$ Planck constant in electron volt seconds.*/
	const double PlanckConstantOver2Pi =											1.054571800e-34;			/**< \f$\hbar \ (J s)\f$ Planck constant over 2 pi in joule seconds.*/
	const double PlanckConstantOver2PiIneVs =										6.582119514e-16;			/**< \f$\hbar \ (eV s)\f$ Planck constant over 2 pi in electron volt seconds.*/
	const double PlanckConstantOver2PiTimescInMeVfm =								197.3269788;				/**< \f$\hbar c \ (MeV fm)\f$ Planck constant over 2 pi times c in megaelectron volt femtometers.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckConstantUncertainty =										0.000000081e-34;			/**< \f$h \ (J s)\f$ Uncertainty in Planck constant in joule seconds.*/
	const double PlanckConstantIneVsUncertainty =									0.000000025e-15;			/**< \f$h \ (eV s)\f$ Uncertainty in Planck constant in electron volt seconds.*/
	const double PlanckConstantOver2PiUncertainty =									0.000000013e-34;			/**< \f$\hbar \ (J s)\f$ Uncertainty in Planck constant over 2 pi in joule seconds.*/
	const double PlanckConstantOver2PiIneVsUncertainty =							0.000000040e-16;			/**< \f$\hbar \ (eV s)\f$ Uncertainty in Planck constant over 2 pi in electron volt seconds.*/
	const double PlanckConstantOver2PiTimescInMeVfmUncertainty =					0.0000012;					/**< \f$\hbar c \ (MeV fm)\f$ Uncertainty in Planck constant over 2 pi times c in megaelectron volt femtometers.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-PlanckLength
	/// @{
	const double PlanckLength =														1.616229e-35;				/**< \f$\ell_P \ (m)\f$ Planck length in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckLengthUncertainty =											0.000038e-35;				/**< \f$\ell_P \ (m)\f$ Uncertainty in Planck length in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-PlanckMass
	/// @{
	const double PlanckMass =														2.176470e-8;				/**< \f$m_P \ (kg)\f$ Planck mass in kilograms.*/
	const double PlanckMassInGeVpercSquared =										1.220910e19;				/**< \f$m_P \ (\frac{GeV}{c^2})\f$ Planck mass in gigaelectron volts per speed of light squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckMassUncertainty =											0.000051e-8;				/**< \f$m_P \ (kg)\f$ Uncertainty in Planck mass in kilograms.*/
	const double PlanckMassInGeVpercSquaredUncertainty =							0.000029e19;				/**< \f$m_P \ (\frac{GeV}{c^2})\f$ Uncertainty in Planck mass in gigaelectron volts per speed of light squared.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-PlanckTemperature
	/// @{
	const double PlanckTemperature =												1.416808e32;				/**< \f$T_P \ (K)\f$ Planck temperature in kelvins.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckTemperatureUncertainty =										0.000033e32;				/**< \f$T_P \ (K)\f$ Uncertainty in Planck temperature in kelvins.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-PlanckTime
	/// @{
	const double PlanckTime =														5.39116e-44;				/**< \f$t_P \ (s)\f$ Planck time in seconds.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckTimeUncertainty =											0.00013e-44;				/**< \f$t_P \ (s)\f$ Uncertainty in Planck time in seconds.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Proton
	/// @{
	const double protonChargeToMassQuotient =										9.578833226e7;				/**< \f$\frac{e}{m_p} \ (\frac{C}{kg})\f$ Proton charge to mass quotient in coulombs per kilogram.*/
	const double protonComptonWavelength =											1.32140985396e-15;			/**< \f$\lambda_{C,p} \ (m)\f$ Proton Compton wavelength in meters.*/
	const double protonComptonWavelengthOver2Pi =									0.210308910109e-15;			/**< \f$\frac{\lambda_{C,p}}{2\pi}\ (m)\f$ Proton Compton wavelength over 2 pi in meters.*/
	const double protonElectronMassRatio =											1836.15267389;				/**< \f$\frac{m_p}{m_e} \ (1)\f$ Proton-electron mass ratio.*/
	const double protongFactor =													5.585694702;				/**< \f$g_p \ (1)\f$ Proton g factor.*/
	const double protonGyromagneticRatio =											2.675221900e8;				/**< \f$\gamma_p \ (\frac{rad\ Hz}{T})\f$ Proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonGyromagneticRatioOver2pi =									42.57747892;				/**< \f$\frac{\gamma_p}{2\pi} \ (\frac{rad\ MHz}{T})\f$ Proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonMagneticMoment =												1.4106067873e-26;			/**< \f$\mu_p \ (\frac{J}{T})\f$ Proton magnetic moment in joules per tesla.*/
	const double protonMagneticMomentToBohrMagnetonRatio =							1.5210322053e-3;			/**< \f$\frac{\mu_p}{\mu_B} \ (1)\f$ Proton magnetic moment to Bohr magneton ratio.*/
	const double protonMagneticMomentToNuclearMagnetonRatio =						2.7928473508;				/**< \f$\frac{\mu_p}{\mu_N} \ (1)\f$ Proton magnetic moment to nuclear magneton ratio.*/
	const double protonMagneticShieldingCorrection =								25.691e-6;					/**< \f$\sigma'_p \ (1)\f$ Proton magnetic shielding correction.*/
	const double protonMass =														1.672621898e-27;			/**< \f$m_p \ (kg)\f$ Proton mass in kilograms.*/
	const double protonMassInJPercSquared =											1.503277593e-10;			/**< \f$m_p \ (\frac{J}{c^2})\f$ Proton mass in joules per speed of light squared.*/
	const double protonMassInMeVPercSquared =										938.2720813;				/**< \f$m_p \ (\frac{MeV}{c^2})\f$ Proton mass in megaelectron volts per speed of light squared.*/
	const double protonMassInu =													1.007276466879;				/**< \f$m_p \ (u)\f$ Proton mass in unified atomic mass unit.*/
	const double protonMolarMass =													1.007276466879e-3;			/**< \f$M_p \ (\frac{kg}{mol})\f$ Proton molar mass in kilograms per mole.*/
	const double protonMuonMassRatio =												8.88024338;					/**< \f$\frac{m_p}{m_\mu} \ (1)\f$ Proton-muon mass ratio.*/
	const double protonNeutronMagneticMomentRatio =									-1.45989805;				/**< \f$\frac{\mu_p}{\mu_n} \ (1)\f$ Proton-neutron magnetic moment ratio.*/
	const double protonNeutronMassRatio =											0.99862347844;				/**< \f$\frac{m_p}{m_n} \ (1)\f$ Proton-neutron mass ratio.*/
	const double protonrmsChargeRadius =											0.8751e-15;					/**< \f$r_p \ (m)\f$ Proton rms charge radius in meters.*/
	const double protonTauMassRatio =												0.528063;					/**< \f$\frac{m_p}{m_\tau} \ (1)\f$ Proton-tau mass ratio.*/

    #ifdef NISTCONST_UNCERTAINTY
	const double protonChargeToMassQuotientUncertainty =							0.000000059e7;				/**< \f$\frac{e}{m_p} \ (\frac{C}{kg})\f$ Uncertainty in proton charge to mass quotient in coulombs per kilogram.*/
	const double protonComptonWavelengthUncertainty =								0.00000000061e-15;			/**< \f$\lambda_{C,p} \ (m)\f$ Uncertainty in proton Compton wavelength in meters.*/
	const double protonComptonWavelengthOver2PiUncertainty =						0.000000000097e-15;			/**< \f$\frac{\lambda_{C,p}}{2\pi} \ (m)\f$ Uncertainty in proton Compton wavelength over 2 pi in meters.*/
	const double protonElectronMassRatioUncertainty =								0.00000017;					/**< \f$\frac{m_p}{m_e} \ (1)\f$ Uncertainty in proton-electron mass ratio.*/
	const double protongFactorUncertainty =											0.000000017;				/**< \f$g_p \ (1)\f$ Uncertainty in proton g factor.*/
	const double protonGyromagneticRatioUncertainty =								0.000000018e8;				/**< \f$\gamma_p \ (\frac{rad\ Hz}{T})\f$ Uncertainty in proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonGyromagneticRatioOver2piUncertainty =						0.00000029;					/**< \f$\frac{\gamma_p}{2\pi} \ (\frac{rad\ MHz}{T})\f$ Uncertainty in proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonMagneticMomentUncertainty =									0.0000000097e-26;			/**< \f$\mu_p \ (\frac{J}{T})\f$ Uncertainty in proton magnetic moment in joules per tesla.*/
	const double protonMagneticMomentToBohrMagnetonRatioUncertainty =				0.0000000046e-3;			/**< \f$\frac{\mu_p}{\mu_B} \ (1)\f$ Uncertainty in proton magnetic moment to Bohr magneton ratio.*/
	const double protonMagneticMomentToNuclearMagnetonRatioUncertainty =			0.0000000085;				/**< \f$\frac{\mu_p}{\mu_N} \ (1)\f$ Uncertainty in proton magnetic moment to nuclear magneton ratio.*/
	const double protonMagneticShieldingCorrectionUncertainty =						0.011e-6;					/**< \f$\sigma'_p \ (1)\f$ Uncertainty in proton magnetic shielding correction.*/
	const double protonMassUncertainty =											0.000000021e-27;			/**< \f$m_p \ (kg)\f$ Uncertainty in proton mass in kilograms.*/
	const double protonMassInJPercSquaredUncertainty =								0.000000018e-10;			/**< \f$m_p \ (\frac{J}{c^2})\f$ Uncertainty in proton mass in joules per speed of light squared.*/
	const double protonMassInMeVPercSquaredUncertainty =							0.0000058;					/**< \f$m_p \ (\frac{MeV}{c^2})\f$ Uncertainty in proton mass in megaelectron volts per speed of light squared.*/
	const double protonMassInuUncertainty =											0.000000000091;				/**< \f$m_p \ (u)\f$ Uncertainty in proton mass in unified atomic mass unit.*/
	const double protonMolarMassUncertainty =										0.000000000091e-3;			/**< \f$M_p \ (\frac{kg}{mol})\f$ Uncertainty in proton molar mass in kilograms per mole.*/
	const double protonMuonMassRatioUncertainty =									0.00000020;					/**< \f$\frac{m_p}{m_\mu} \ (1)\f$ Uncertainty in proton-muon mass ratio.*/
	const double protonNeutronMagneticMomentRatioUncertainty =						0.00000034;					/**< \f$\frac{\mu_p}{\mu_n} \ (1)\f$ Uncertainty in proton-neutron magnetic moment ratio.*/
	const double protonNeutronMassRatioUncertainty =								0.00000000051;				/**< \f$\frac{m_p}{m_n} \ (1)\f$ Uncertainty in proton-neutron mass ratio.*/
	const double protonrmsChargeRadiusUncertainty =									0.0061e-15;					/**< \f$r_p \ (m)\f$ Uncertainty in proton rms charge radius in meters.*/
	const double protonTauMassRatioUncertainty =									0.000048;					/**< \f$\frac{m_p}{m_\tau} \ (1)\f$ Uncertainty in proton-tau mass ratio.*/	
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-QuantumOfCirculation 
	/// @{   
	const double quantumOfCirculation =												3.6369475486e-4;			/**< \f$\frac{h}{2 m_e} \ (\frac{m^2}{s})\f$ Quantum of circulation in meters squared per second.*/
	const double quantumOfCirculationTimes2 =										7.2738950972e-4;			/**< \f$\frac{h}{m_e} \ (\frac{m^2}{s})\f$ Quantum of circulation times 2 in meters squared per second.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double quantumOfCirculationUncertainty =									0.0000000017e-4;			/**< \f$\frac{h}{2 m_e} \ (\frac{m^2}{s})\f$ Uncertainty in quantum of circulation in meters squared per second.*/
	const double quantumOfCirculationTimes2Uncertainty =							0.0000000033e-4;			/**< \f$\frac{h}{m_e} \ (\frac{m^2}{s})\f$ Uncertainty in quantum of circulation times 2 in meters squared per second.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-RydbergConstant
	/// @{
	const double RydbergConstant =													10973731.568508;			/**< \f$R_\infty \ \ (\frac{1}{m})\f$ Rydberg constant in inverse meters.*/
	const double RydbergConstantTimescInHz =										3.289841960355e15;			/**< \f$R_\infty c \ (Hz)\f$ Rydberg constant times c in hertz.*/
	const double RydbergConstantTimeshcIneV =										13.605693009;				/**< \f$R_\infty hc \ (eV)\f$ Rydberg constant times hc in electron volts.*/
	const double RydbergConstantTimeshcInJ =										2.179872325e-18;			/**< \f$R_\infty hc \ (J)\f$ Rydberg constant times hc in joules.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double RydbergConstantUncertainty =										0.000065;					/**< \f$R_\infty \ \ (\frac{1}{m})\f$ Uncertainty in Rydberg constant in inverse meters.*/
	const double RydbergConstantTimescInHzUncertainty =								0.000000000019e15;			/**< \f$R_\infty c \ (Hz)\f$ Uncertainty in Rydberg constant times c in hertz.*/
	const double RydbergConstantTimeshcIneVUncertainty =							0.000000084;				/**< \f$R_\infty hc \ (eV)\f$ Uncertainty in Rydberg constant times hc in electron volts.*/
	const double RydbergConstantTimeshcInJUncertainty =								0.000000027e-18;			/**< \f$R_\infty hc \ (J)\f$ Uncertainty in Rydberg constant times hc in joules.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-SackurTetrodeConstant
	/// @{
	const double SackurTetrodeConstant =											-1.1517084;					/**< \f$\frac{S_0}{R} \ (1)\f$ Sackur-Tetrode constant at 1 K and 100 kPa.*/
	const double SackurTetrodeConstantatm =											-1.1648714;					/**< \f$\frac{S_0}{R} \ (1)\f$ Sackur-Tetrode constant at 1 K and 101.325 kPa (1atm).*/
	#ifdef NISTCONST_UNCERTAINTY
	const double SackurTetrodeConstantUncertainty =									0.0000014;					/**< \f$\frac{S_0}{R} \ (1)\f$ Uncertainty in Sackur-Tetrode constant at 1 K and 100 kPa.*/
	const double SackurTetrodeConstantatmUncertainty =								0.0000014;					/**< \f$\frac{S_0}{R} \ (1)\f$ Uncertainty in Sackur-Tetrode constant at 1 K and 101.325 kPa (1atm).*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-SecondRadiationConstant
	/// @{
	const double secondRadiationConstant =											1.43877736e-2;				/**< \f$c_2 \ (m\ K)\f$ Second radiation constant in meters kelvin.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double secondRadiationConstantUncertainty =								0.00000083e-2;				/**< \f$c_2 \ (m\ K)\f$ Uncertainty in second radiation constant in meters kelvin.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Helion
	/// @{
	const double shieldedHelionGyromagneticRatio =									2.037894585e8;				/**< \f$\gamma'_{^3\textrm{He}} \ (\frac{rad\ Hz}{T})\f$ Shielded helion gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionGyromagneticRatioOver2Pi =							32.43409966;				/**< \f$\frac{\gamma'_{^3\textrm{He}}}{2 \pi} \ (\frac{rad\ MHz}{T})\f$ Shielded helion gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionMagneticMoment =										-1.074553080e-26;			/**< \f$\mu'_{^3\textrm{He}} \ (\frac{J}{T})\f$ Shielded helion magnetic moment in joules per tesla.*/
	const double shieldedHelionMagneticMomentToBohrMagnetonRatio =					-1.158671471e-3;			/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_B} \ (1)\f$ Shielded helion magnetic moment to Bohr magneton ratio.*/
	const double shieldedHelionMagneticMomentToNuclearMagnetonRatio =				-2.127497720;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_N} \ (1)\f$ Shielded helion magnetic moment to nuclear magneton ratio.*/
	const double shieldedHelionToProtonMagneticMomentRatio =						-0.7617665603;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_p} \ (1)\f$ Shielded helion to proton magnetic moment ratio.*/
	const double shieldedHelionToShieldedProtonMagneticMomentRatio =				-0.7617861313;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu'_p} \ (1)\f$ Shielded helion to shielded proton magnetic moment ratio.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double shieldedHelionGyromagneticRatioUncertainty =						0.000000027e8;				/**< \f$\gamma'_{^3\textrm{He}} \ (\frac{rad\ Hz}{T})\f$ Uncertainty in shielded helion gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionGyromagneticRatioOver2PiUncertainty =				0.00000043;					/**< \f$\frac{\gamma'_{^3\textrm{He}}}{2 \pi} \ (\frac{rad\ MHz}{T})\f$ Uncertainty in shielded helion gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionMagneticMomentUncertainty =							0.000000014e-26;			/**< \f$\mu'_{^3\textrm{He}} \ (\frac{J}{T})\f$ Uncertainty in shielded helion magnetic moment in joules per tesla.*/
	const double shieldedHelionMagneticMomentToBohrMagnetonRatioUncertainty =		0.000000014e-3;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_B} \ (1)\f$ Uncertainty in shielded helion magnetic moment to Bohr magneton ratio.*/
	const double shieldedHelionMagneticMomentToNuclearMagnetonRatioUncertainty =	0.000000025;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_N} \ (1)\f$ Uncertainty in shielded helion magnetic moment to nuclear magneton ratio.*/
	const double shieldedHelionToProtonMagneticMomentRatioUncertainty =				0.0000000092;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_p} \ (1)\f$ Uncertainty in shielded helion to proton magnetic moment ratio.*/
	const double shieldedHelionToShieldedProtonMagneticMomentRatioUncertainty =		0.0000000033;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu'_p} \ (1)\f$ Uncertainty in shielded helion to shielded proton magnetic moment ratio.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-Proton
	/// @{
	const double shieldedProtonGyromagneticRatio =									2.675153171e8;				/**< \f$\gamma'_p \ (\frac{rad\ Hz}{T})\f$ Shielded proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonGyromagneticRatioOver2Pi =							42.57638507;				/**< \f$\frac{\gamma'_p}{2 \pi} \ (\frac{rad\ MHz}{T})\f$ Shielded proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonMagneticMoment =										1.410570547e-26;			/**< \f$\mu'_p \ (\frac{J}{T})\f$ Shielded proton magnetic moment in joules per tesla.*/
	const double shieldedProtonMagneticMomentToBohrMagnetonRatio =					1.520993128e-3;				/**< \f$\frac{\mu'_p}{\mu_B} \ (1)\f$ Shielded proton magnetic moment to Bohr magneton ratio.*/
	const double shieldedProtonMagneticMomentToNuclearMagnetonRatio =				2.792775600;				/**< \f$\frac{\mu'_p}{\mu_N} \ (1)\f$ Shielded proton magnetic moment to nuclear magneton ratio.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double shieldedProtonGyromagneticRatioUncertainty =						0.000000033e8;				/**< \f$\gamma'_p \ (\frac{rad\ Hz}{T})\f$ Uncertainty in shielded proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonGyromagneticRatioOver2PiUncertainty =				0.00000053;					/**< \f$\frac{\gamma'_p}{2 \pi} \ (\frac{rad\ MHz}{T})\f$ Uncertainty in shielded proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonMagneticMomentUncertainty =							0.000000018e-26;			/**< \f$\mu'_p \ (\frac{J}{T})\f$ Uncertainty in shielded proton magnetic moment in joules per tesla.*/
	const double shieldedProtonMagneticMomentToBohrMagnetonRatioUncertainty =		0.000000017e-3;				/**< \f$\frac{\mu'_p}{\mu_B} \ (1)\f$ Uncertainty in shielded proton magnetic moment to Bohr magneton ratio.*/
	const double shieldedProtonMagneticMomentToNuclearMagnetonRatioUncertainty =	0.000000030;				/**< \f$\frac{\mu'_p}{\mu_N} \ (1)\f$ Uncertainty in shielded proton magnetic moment to nuclear magneton ratio.*/
	#endif  
	/// @}
    
	/// @addtogroup NISTConst-SpeedOfLight
	/// @{    
	const double speedOfLightInVacuum =												299792458.0;				/**< \f$c \ (\frac{m}{s})\f$ Speed of light in vacuum in meters per second.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double speedOfLightInVacuumUncertainty =									0.0;						/**< \f$c \ (\frac{m}{s})\f$ Uncertainty in speed of light in vacuum in meters per second. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-GravityAcceleration
	/// @{    
	const double standardAccelerationOfGravity =									9.80665;					/**< \f$g_n \ (\frac{m}{s^2})\f$ Standard acceleration of gravity in meters per second squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardAccelerationOfGravityUncertainty =							0.0;						/**< \f$g_n \ (\frac{m}{s^2})\f$ Uncertainty in standard acceleration of gravity in meters per second squared. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-StandardAtmosphere
	/// @{    
	const double standardAtmosphere =												101325.0;					/**< \f$atm \ (Pa)\f$ Standard atmosphere in pascals.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardAtmosphereUncertainty =									0.0;						/**< \f$atm \ (Pa)\f$ Uncertainty in standard atmosphere in pascals. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-StandardStatePressure
	/// @{    
	const double standardStatePressure =											100000.0;					/**< \f$ssp \ (Pa)\f$ Standard-state pressure in pascals.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardStatePressureUncertainty =									0.0;						/**< \f$ssp \ (Pa)\f$ Uncertainty in standard-state pressure in pascals. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}

	/// @addtogroup NISTConst-StefanBoltzmannConstant
	/// @{    
	const double StefanBoltzmannConstant =											5.670367e-8;				/**< \f$\sigma \ (\frac{W}{m^2 K^4})\f$ Stefan-Boltzmann constant in watts per meter squared kelvin to the 4th.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double StefanBoltzmannConstantUncertainty =								0.000013e-8;				/**< \f$\sigma \ (\frac{W}{m^2 K^4})\f$ Uncertainty in Stefan-Boltzmann constant in watts per meter squared kelvin to the 4th.*/
	#endif  
	/// @}
	
	
	/// @addtogroup NISTConst-Tau
	/// @{
	const double tauComptonWavelength =												0.697787e-15; 				/**< \f$\lambda_{C,\tau} \ (m)\f$ Tau Compton wavelength in meters.*/ 
	const double tauComptonWavelengthOver2Pi =										0.111056e-15;        		/**< \f$\frac{\lambda_{C,\tau}}{2\pi} \ (m)\f$ Tau Compton wavelength over 2 pi in meters.*/ 
	const double tauElectronMassRatio =												3477.15;                  	/**< \f$\frac{m_\tau}{m_e} \ (1)\f$ Tau-electron mass ratio.*/ 
	const double tauMass =															3.16747e-27;           		/**< \f$m_\tau \ (kg)\f$ Tau mass in kilograms.*/ 
	const double tauMassInJPercSquared =                                 			2.84678e-10;				/**< \f$m_\tau \ (\frac{J}{c^2})\f$ Tau mass in joules per speed of light squared.*/ 
	const double tauMassInMeVPercSquared =                          				1776.82;					/**< \f$m_\tau \ (\frac{MeV}{c^2})\f$ Tau mass in megaelectron volts per speed of light squared.*/ 
	const double tauMassInu =														1.90749;					/**< \f$m_\tau \ (u)\f$ Tau mass in unified atomic mass units.*/ 
	const double tauMolarMass =														1.90749e-3;					/**< \f$M_\tau \ (\frac{kg}{mol})\f$ Tau molar mass in kilograms per mole.*/ 
	const double tauMuonMassRatio =													16.8167;					/**< \f$\frac{m_\tau}{m_\mu} \ (1)\f$ Tau-muon mass ratio.*/ 
	const double tauNeutronMassRatio =												1.89111;					/**< \f$\frac{m_\tau}{m_n} \ (1)\f$ Tau-neutron mass ratio.*/ 
	const double tauProtonMassRatio	=												1.89372;					/**< \f$\frac{m_\tau}{m_p} \ (1)\f$ Tau-proton mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double tauComptonWavelengthUncertainty =									0.000063e-15;				/**< \f$\lambda_{C,\tau} \ (m)\f$ Uncertainty in tau Compton wavelength in meters.*/ 
	const double tauComptonWavelengthOver2PiUncertainty =							0.000010e-15; 				/**< \f$\frac{\lambda_{C,\tau}}{2\pi} \ (m)\f$ Uncertainty in tau Compton wavelength over 2 pi in meters.*/ 
	const double tauElectronMassRatioUncertainty =									0.31;                     	/**< \f$\frac{m_\tau}{m_e} \ (1)\f$ Uncertainty in tau-electron mass ratio.*/ 
	const double tauMassUncertainty =												0.00029e-27;        		/**< \f$m_\tau \ (kg)\f$ Uncertainty in tau mass in kilograms.*/ 
	const double tauMassInJPercSquaredUncertainty =									0.00026e-10; 				/**< \f$m_\tau \ (\frac{J}{c^2})\f$ Uncertainty in tau mass in joules per speed of light squared.*/ 
	const double tauMassInMeVPercSquaredUncertainty =								0.16;     					/**< \f$m_\tau \ (\frac{MeV}{c^2})\f$ Uncertainty in tau mass in megaelectron volts per speed of light squared.*/ 
	const double tauMassInuUncertainty =											0.00017;               		/**< \f$m_\tau \ (u)\f$ Uncertainty in tau mass in unified atomic mass units.*/ 
	const double tauMolarMassUncertainty =											0.00017e-3;             	/**< \f$M_\tau \ (\frac{kg}{mol})\f$ Uncertainty in tau molar mass in kilograms per mole.*/ 
	const double tauMuonMassRatioUncertainty =										0.0015;                   	/**< \f$\frac{m_\tau}{m_\mu}\ (1)\f$ Uncertainty in tau-muon mass ratio.*/ 
	const double tauNeutronMassRatioUncertainty =									0.00017;                 	/**< \f$\frac{m_\tau}{m_n} \ (1)\f$ Uncertainty in tau-neutron mass ratio.*/ 
	const double tauProtonMassRatioUncertainty =									0.00017;       				/**< \f$\frac{m_\tau}{m_p} \ (1)\f$ Uncertainty in tau-proton mass ratio.*/ 	
	#endif  
	/// @}
	
    /// @addtogroup NISTConst-Thomson
	/// @{    
	const double ThomsonCrossSection =												0.66524587158e-28;			/**< \f$\sigma_e \ (m^2)\f$ Thomson cross section in meters squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double ThomsonCrossSectionUncertainty =									0.00000000091e-28;			/**< \f$\sigma_e \ (m^2)\f$ Uncertainty in Thomson cross section in meters squared.*/
	#endif  
	/// @}	

	/// @addtogroup NISTConst-Triton
	/// @{
	const double tritonElectronMassRatio =											5496.92153588;				/**< \f$\frac{m_{\textrm{T}}}{m_e} \ (1)\f$ Triton-electron mass ratio.*/
	const double tritongFactor =													5.957924920;				/**< \f$g_{\textrm{T}} \ (1)\f$ Triton g factor.*/       
	const double tritonMagneticMoment =												1.504609503e-26;			/**< \f$\mu_{\textrm{T}} \ (\frac{J}{T})\f$ Triton magnetic moment in joules per tesla.*/
	const double tritonMagneticMomentToBohrMagnetonRatio =							1.6223936616e-3;			/**< \f$\frac{\mu_{\textrm{T}}}{\mu_B} \ (1)\f$ Triton magnetic moment to Bohr magneton ratio.*/
	const double tritonMagneticMomentToNuclearMagnetonRatio =						2.978962460;				/**< \f$\frac{\mu_{\textrm{T}}}{\mu_N} \ (1)\f$ Triton magnetic moment to nuclear magneton ratio*/
	const double tritonMass =														5.007356665e-27;			/**< \f$m_{\textrm{T}} \ (kg)\f$ Triton mass in kilograms.*/ 
	const double tritonMassInJPercSquared =											4.500387735e-10;			/**< \f$m_{\textrm{T}} \ (\frac{J}{c^2})\f$ Triton mass in joules per speed of light squared.*/ 
	const double tritonMassInMeVPercSquared =										2808.921112;				/**< \f$m_{\textrm{T}} \ (\frac{MeV}{c^2})\f$ Triton mass in megaelectron volts per speed of light squared.*/ 
	const double tritonMassInu =													3.01550071632;				/**< \f$m_{\textrm{T}} \ (u)\f$ Triton mass in unified atomic mass units. */ 
	const double tritonMolarMass =													3.01550071632e-3;			/**< \f$M_{\textrm{T}} \ (\frac{kg}{mol})\f$ Triton molar mass in kilograms per mole.*/ 
	const double tritonProtonMassRatio =											2.99371703348;				/**< \f$\frac{m_{\textrm{T}}}{m_p} \ (1)\f$ Triton-proton mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double tritonElectronMassRatioUncertainty =								0.00000026;					/**< \f$\frac{m_{\textrm{T}}}{m_e} \ (1)\f$ Uncertainty in triton-electron mass ratio.*/
	const double tritongFactorUncertainty =											0.000000028;				/**< \f$g_{\textrm{T}} \ (1)\f$ Uncertainty in triton g factor.*/       
	const double tritonMagneticMomentUncertainty =									0.000000012e-26;			/**< \f$\mu_{\textrm{T}} \ (\frac{J}{T})\f$ Uncertainty in triton magnetic moment in joules per tesla.*/
	const double tritonMagneticMomentToBohrMagnetonRatioUncertainty =				0.0000000076e-3;			/**< \f$\frac{\mu_{\textrm{T}}}{\mu_B} \ (1)\f$ Uncertainty in triton magnetic moment to Bohr magneton ratio.*/
	const double tritonMagneticMomentToNuclearMagnetonRatioUncertainty =			0.000000014;				/**< \f$\frac{\mu_{\textrm{T}}}{\mu_N} \ (1)\f$ Uncertainty in triton magnetic moment to nuclear magneton ratio.*/
	const double tritonMassUncertainty =											0.000000062e-27;			/**< \f$m_{\textrm{T}} \ (kg)\f$ Uncertainty in triton mass in kilograms.*/ 
	const double tritonMassInJPercSquaredUncertainty =								0.000000055e-10;			/**< \f$m_{\textrm{T}} \ (\frac{J}{c^2})\f$ Uncertainty in triton mass in joules per speed of light squared.*/ 
	const double tritonMassInMeVPercSquaredUncertainty =							0.000017; 					/**< \f$m_{\textrm{T}} \ (\frac{MeV}{c^2})\f$ Uncertainty in triton mass in megaelectron volts per speed of light squared.*/ 
	const double tritonMassInuUncertainty =											0.00000000011;				/**< \f$m_{\textrm{T}} \ (u)\f$ Uncertainty in triton mass in unified atomic mass units.*/ 
	const double tritonMolarMassUncertainty =										0.00000000011e-3;			/**< \f$M_{\textrm{T}} \ (\frac{kg}{mol})\f$ Uncertainty in triton molar mass in kilograms per mole.*/ 
	const double tritonProtonMassRatioUncertainty =									0.00000000022;				/**< \f$\frac{m_{\textrm{T}}}{m_p} \ (1)\f$ Uncertainty in triton-proton mass ratio.*/ 
	#endif  
	/// @}	
	
	/// @addtogroup NISTConst-UnifiedAtomicMassUnit
	/// @{
	const double unifiedAtomicMassUnit =											1.660539040e-27;			/**< \f$u \ (kg)\f$ Unified atomic mass unit in kilograms.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double unifiedAtomicMassUnitUncertainty =									0.000000020e-27;			/**< \f$u \ (kg)\f$ Uncertainty in unified atomic mass unit in kilograms.*/ 
	#endif  
	/// @}	
	
	/// @addtogroup NISTConst-vonKlitzingConstant
	/// @{
	const double vonKlitzingConstant =												25812.8074555;				/**< \f$R_K \ (\Omega)\f$ von Klitzing constant in ohms.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double vonKlitzingConstantUncertainty =									0.0000059;           		/**< \f$R_K \ (\Omega)\f$ Uncertainty in von Klitzing constant in ohms.*/
	#endif  
	/// @}	
	
	/// @addtogroup NISTConst-WeakMixingAngle 
	/// @{
	const double weakMixingAngle =													0.2223;						/**< \f$sin^2 \theta_W \ (1)\f$ Weak mixing angle.*/              
	#ifdef NISTCONST_UNCERTAINTY
	const double weakMixingAngleUncertainty =										0.0021;						/**< \f$sin^2 \theta_W \ (1)\f$ Uncertainty in weak mixing angle.*/        
	#endif  
	/// @}	
	
	/// @addtogroup NISTConst-WienDisplacement 
	/// @{ 
	const double WienFrequencyDisplacementLawConstant =								5.8789238e10;				/**< \f$b' \ (\frac{Hz}{K})\f$ Wien frequency displacement law constant in hertz per kelvin.*/ 
	const double WienWavelengthDisplacementLawConstant =							2.8977729e-3;				/**< \f$b \ (m\ K)\f$ Wien wavelength displacement law constant in meters kelvin.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double WienFrequencyDisplacementLawConstantUncertainty =					0.0000034e10;				/**< \f$b' \ (\frac{Hz}{K})\f$ Uncertainty in Wien frequency displacement law constant in hertz per kelvin.*/ 
	const double WienWavelengthDisplacementLawConstantUncertainty =					0.0000017e-3;				/**< \f$b \ (m\ K)\f$ Uncertainty in Wien wavelength displacement law constant in meters kelvin.*/ 
	#endif  
	/// @}	

} //namespace NISTConst






//=================================
// Common names and symbols

#ifdef NISTCONST_COMMON_SYMBOLS_NAMES
namespace NISTConst
{
	/// @addtogroup NISTConst-AvogadroConstant 
	/// @{
	const double L = AvogadroConstant;																			/**< \f$L \ (\frac{1}{mol})\f$ Avogadro constant. Alias of AvogadroConstant.*/
	const double NA = AvogadroConstant; 																		/**< \f$N_A \ (\frac{1}{mol})\f$ Avogadro constant. Alias of AvogadroConstant.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double LUncertainty = AvogadroConstantUncertainty;													/**< \f$L \ (\frac{1}{mol})\f$ Uncertainty in Avogadro constant. Alias of AvogadroConstantUncertainty.*/
	const double NAUncertainty = AvogadroConstantUncertainty; 													/**< \f$N_A \ (\frac{1}{mol})\f$ Uncertainty in Avogadro constant. Alias of AvogadroConstantUncertainty.*/ 
	#endif  
	/// @}

	/// @addtogroup NISTConst-BoltzmannConstant 
	/// @{
	const double kB = BoltzmannConstant;																		/**< \f$k \ (\frac{J}{K})\f$  Boltzmann constant in joules per kelvin. Alias of BoltzmannConstant.*/
	const double kBIneVPerK = BoltzmannConstantIneVPerK;														/**< \f$k \ (\frac{J}{K})\f$  Boltzmann constant in electron volts per kelvin. Alias of BoltzmannConstantIneVPerK.*/
	const double kBInHzPerK = BoltzmannConstantInHzPerK;														/**< \f$\frac{k}{h} \ (\frac{Hz}{K})\f$  Boltzmann constant in hertz per kelvin. Alias of BoltzmannConstantInHzPerK.*/
	const double kBInInversemK = BoltzmannConstantInInversemK;													/**< \f$\frac{k}{h c} \ (\frac{1}{m\ K})\f$  Boltzmann constant in inverse meters kelvin. Alias of BoltzmannConstantInInversemK.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double kBUncertainty = BoltzmannConstantUncertainty;													/**< \f$k \ (\frac{J}{K})\f$  Uncertainty in Boltzmann constant in joules per kelvin. Alias of BoltzmannConstantUncertainty.*/
	const double kBIneVPerKUncertainty = BoltzmannConstantIneVPerKUncertainty;									/**< \f$k \ (\frac{J}{K})\f$  Uncertainty in Boltzmann constant in electron volts per kelvin. Alias of BoltzmannConstantIneVPerKUncertainty.*/
	const double kBInHzPerKUncertainty = BoltzmannConstantInHzPerKUncertainty;									/**< \f$\frac{k}{h} \ (\frac{Hz}{K})\f$  Uncertainty in Boltzmann constant in hertz per kelvin. Alias of BoltzmannConstantInHzPerKUncertainty.*/
	const double kBInInversemKUncertainty = BoltzmannConstantInInversemKUncertainty;							/**< \f$\frac{k}{h c} \ (\frac{1}{m\ K})\f$  Uncertainty in Boltzmann constant in inverse meters kelvin. Alias of BoltzmannConstantInInversemKUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-BohrMagneton 
	/// @{
	const double muB = BohrMagneton;																			/**< \f$\mu_B \ (\frac{J}{T})\f$ Bohr magneton in joules per tesla. Alias of BohrMagneton.*/ 
	const double muBIneVPerT = BohrMagnetonIneVPerT;															/**< \f$\mu_B \ (\frac{eV}{T})\f$ Bohr magneton in electron volts per tesla. Alias of BohrMagnetonIneVPerT.*/ 
	const double muBInHzPerT = BohrMagnetonInHzPerT;															/**< \f$\frac{\mu_B}{h} \ (\frac{Hz}{T})\f$ Bohr magneton in hertz per tesla. Alias of BohrMagnetonInHzPerT.*/
	const double muBInInversemPerT = BohrMagnetonInInversemT;													/**< \f$\frac{\mu_B}{hc} \ (\frac{1}{m\ T})\f$ Bohr magneton in inverse meters tesla. Alias of BohrMagnetonInInversemT.*/ 
	const double muBInKPerT = BohrMagnetonInKPerT;																/**< \f$\frac{\mu_B}{k} \ (\frac{K}{T})\f$ Bohr magneton in kelvin per tesla. Alias of BohrMagnetonInKPerT.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double muBUncertainty = BohrMagnetonUncertainty;														/**< \f$\mu_B \ (\frac{J}{T})\f$ Uncertainty in Bohr magneton in joules per tesla. Alias of BohrMagnetonUncertainty.*/ 
	const double muBIneVPerTUncertainty = BohrMagnetonIneVPerTUncertainty;										/**< \f$\mu_B \ (\frac{eV}{T})\f$ Uncertainty in Bohr magneton in electron volts per tesla. Alias of BohrMagnetonIneVPerTUncertainty.*/ 
	const double muBInHzPerTUncertainty = BohrMagnetonInHzPerTUncertainty;										/**< \f$\frac{\mu_B}{h} \ (\frac{Hz}{T})\f$ Uncertainty in Bohr magneton in hertz per tesla. Alias of BohrMagnetonInHzPerTUncertainty.*/
	const double muBInInversemPerTUncertainty = BohrMagnetonInInversemTUncertainty;								/**< \f$\frac{\mu_B}{hc} \ (\frac{1}{m\ T})\f$ Uncertainty in Bohr magneton in inverse meters tesla. Alias of BohrMagnetonInInversemTUncertainty.*/ 
	const double muBInKPerTUncertainty = BohrMagnetonInKPerTUncertainty;										/**< \f$\frac{\mu_B}{k} \ (\frac{K}{T})\f$ Uncertainty in Bohr magneton in kelvin per tesla. Alias of BohrMagnetonInKPerTUncertainty.*/
	#endif  
	/// @}

	/// @addtogroup NISTConst-BohrRadius 
	/// @{
	const double a0 = BohrRadius;																				/**< \f$a_0 \ (m)\f$ Bohr radius in meters. Alias of BohrRadius.*/ 
	const double rBohr = BohrRadius;																			/**< \f$a_0 \ (m)\f$ Bohr radius in meters. Alias of BohrRadius.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double a0Uncertainty = BohrRadiusUncertainty;															/**< \f$a_0 \ (m)\f$ Uncertainty in Bohr radius in meters. Alias of BohrRadiusUncertainty.*/ 
	const double rBohrUncertainty = BohrRadiusUncertainty;														/**< \f$a_0 \ (m)\f$ Uncertainty in Bohr radius in meters. Alias of BohrRadiusUncertainty.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ComptonWavelength 
	/// @{
	const double lambdaC = ComptonWavelength;																	/**< \f$\lambda_C \ (m)\f$ Compton wavelength in meters. Alias of ComptonWavelength.*/
	const double lambdaCOver2Pi = ComptonWavelengthOver2Pi;														/**< \f$\frac{\lambda_C}{2\pi} \ (m)\f$ Compton wavelength over 2 pi in meters. Alias of ComptonWavelengthOver2Pi.*/
	const double lambdabarC = ComptonWavelengthOver2Pi;															/**< \f$\frac{\lambda_C}{2\pi} \ (m)\f$ Compton wavelength over 2 pi in meters. Alias of ComptonWavelengthOver2Pi.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double lambdaCUncertainty = ComptonWavelengthUncertainty;												/**< \f$\lambda_C \ (m)\f$ Uncertainty in Compton wavelength in meters. Alias of ComptonWavelengthUncertainty.*/
	const double lambdaCOver2PiUncertainty = ComptonWavelengthOver2PiUncertainty;								/**< \f$\frac{\lambda_C}{2\pi} \ (m)\f$ Uncertainty in Compton wavelength over 2 pi in meters. Alias of ComptonWavelengthOver2PiUncertainty.*/
	const double lambdabarCUncertainty = ComptonWavelengthOver2PiUncertainty;									/**< \f$\frac{\lambda_C}{2\pi} \ (m)\f$ Uncertainty in Compton wavelength over 2 pi in meters. Alias of ComptonWavelengthOver2PiUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ConductanceQuantum 
	/// @{
	const double G0 = conductanceQuantum;																		/**< \f$G_0 \ (S)\f$ Conductance quantum in siemens. Alias of conductanceQuantum.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double G0Uncertainty = conductanceQuantumUncertainty;													/**< \f$G_0 \ (S)\f$ Uncertainty in conductance quantum in siemens. Alias of conductanceQuantumUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ElectricConstant
	/// @{
	const double e0 = electricConstant;																			/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Electric constant in farads per meter. Alias of electricConstant.*/
	const double vacuumPermittivity = electricConstant;															/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Electric constant in farads per meter. Alias of electricConstant.*/
	const double permittivityOfFreeSpace = electricConstant;													/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Electric constant in farads per meter. Alias of electricConstant.*/		
	const double permittivityOfVacuum = electricConstant;														/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Electric constant in farads per meter. Alias of electricConstant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double e0Uncertainty = electricConstantUncertainty;													/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Uncertainty in electric constant in farads per meter. Alias of electricConstantUncertainty.*/
	const double vacuumPermittivityUncertainty = electricConstantUncertainty;									/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Uncertainty in electric constant in farads per meter. Alias of electricConstantUncertainty.*/
	const double permittivityOfFreeSpaceUncertainty = electricConstantUncertainty;								/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Uncertainty in electric constant in farads per meter. Alias of electricConstantUncertainty.*/		
	const double permittivityOfVacuumUncertainty = electricConstantUncertainty;									/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Uncertainty in electric constant in farads per meter. Alias of electricConstantUncertainty.*/
	#endif  
	/// @}
	

	/// @addtogroup NISTConst-ElementaryCharge
	/// @{
	const double e = elementaryCharge;																			/**< \f$e \ (C)\f$ Elementary charge in coulombs. Alias of elementaryCharge.*/ 
	const double elementaryPositiveCharge = elementaryCharge;													/**< \f$e \ (C)\f$ Elementary charge in coulombs. Alias of elementaryCharge.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double eUncertainty = elementaryChargeUncertainty;													/**< \f$e \ (C)\f$ Uncertainty in elementary charge in coulombs. Alias of elementaryChargeUncertainty.*/ 
	const double elementaryPositiveChargeUncertainty = elementaryChargeUncertainty;								/**< \f$e \ (C)\f$ Uncertainty in elementary charge in coulombs. Alias of elementaryChargeUncertainty.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-ImpedanceOfVacuum
	/// @{
	const double Z0 = impedanceOfVacuum;																		/**< \f$Z_0 \ (\Omega)\f$ Characteristic impedance of vacuum in ohms. Alias of impedanceOfVacuum.*/ 
	const double impedanceOfFreeSpace = impedanceOfVacuum;														/**< \f$Z_0 \ (\Omega)\f$ Characteristic impedance of vacuum in ohms. Alias of impedanceOfVacuum.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double Z0Uncertainty = impedanceOfVacuumUncertainty;													/**< \f$Z_0 \ (\Omega)\f$ Uncertainty in characteristic impedance of vacuum in ohms. Alias of impedanceOfVacuumUncertainty.*/ 
	const double impedanceOfFreeSpaceUncertainty = impedanceOfVacuumUncertainty;								/**< \f$Z_0 \ (\Omega)\f$ Uncertainty in characteristic impedance of vacuum in ohms. Alias of impedanceOfVacuumUncertainty.*/
	#endif  
	/// @}	
	
	/// @addtogroup NISTConst-JosephsonConstant
	/// @{
	const double KJ = JosephsonConstant;																		/**< \f$K_J \ (\frac{Hz}{V})\f$ Josephson constant in hertz per volt. Alias of JosephsonConstant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double KJUncertainty = JosephsonConstantUncertainty;													/**< \f$K_J \ (\frac{Hz}{V})\f$ Uncertainty in Josephson constant in hertz per volt. Alias of JosephsonConstantUncertainty.*/
	#endif  
	/// @}
	
	
	/// @addtogroup NISTConst-FaradayConstant 
	/// @{
	const double F = FaradayConstant;																			/**< \f$F \ (\frac{C}{mol})\f$ Faraday constant in coulombs per mole. Alias of FaradayConstant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double FUncertainty = FaradayConstantUncertainty;														/**< \f$F \ (\frac{C}{mol})\f$ Uncertainty in Faraday constant in coulombs per mole. Alias of FaradayConstantUncertainty.*/
	#endif  
	/// @}

	/// @addtogroup NISTConst-FineStructureConstant 
	/// @{
	const double alpha = fineStructureConstant;																	/**< \f$\alpha \ (1)\f$ Fine-structure constant. Alias of fineStructureConstant.*/ 
	const double SommerfeldsConstant = fineStructureConstant;													/**< \f$\alpha \ (1)\f$ Fine-structure constant. Alias of fineStructureConstant.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double alphaUncertainty = fineStructureConstantUncertainty;											/**< \f$\alpha \ (1)\f$ Uncertainty in fine-structure constant. Alias of fineStructureConstantUncertainty.*/ 
	const double SommerfeldsConstantUncertainty = fineStructureConstantUncertainty;								/**< \f$\alpha \ (1)\f$ Uncertainty in fine-structure constant. Alias of fineStructureConstantUncertainty.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-HartreeEnergy  
	/// @{
	const double Eh = HartreeEnergy;																			/**< \f$E_h \ (J)\f$ Hartree energy in joules. Alias of HartreeEnergy.*/
	const double EhIneV = HartreeEnergyIneV;																	/**< \f$E_h \ (eV)\f$ Hartree energy in electron volts. Alias of HartreeEnergyIneV.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double EhUncertainty = HartreeEnergyUncertainty;														/**< \f$E_h \ (J)\f$ Uncertainty in Hartree energy in joules. Alias of HartreeEnergyUncertainty.*/
	const double EhIneVUncertainty = HartreeEnergyIneVUncertainty;												/**< \f$E_h \ (eV)\f$ Uncertainty in Hartree energy in electron volts. Alias of HartreeEnergyIneVUncertainty.*/ 
	#endif  
	/// @}

	/// @addtogroup NISTConst-LoschmidtConstant 
	/// @{
	const double n0 = LoschmidtConstant; 																		/**< \f$n_0 \ (\frac{1}{m^3})\f$ Loschmidt constant at 273.15 K, 100 kPa in inverse meters cubed. Alias of LoschmidtConstant.*/
	const double LoschmidtsNumber = LoschmidtConstant; 															/**< \f$n_0 \ (\frac{1}{m^3})\f$ Loschmidt constant at 273.15 K, 100 kPa in inverse meters cubed. Alias of LoschmidtConstant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double n0Uncertainty = LoschmidtConstantUncertainty; 													/**< \f$n_0 \ (\frac{1}{m^3})\f$ Uncertainty in Loschmidt constant at 273.15 K, 100 kPa in inverse meters cubed. Alias of LoschmidtConstantUncertainty.*/
	const double LoschmidtsNumberUncertainty = LoschmidtConstantUncertainty; 									/**< \f$n_0 \ (\frac{1}{m^3})\f$ Uncertainty in Loschmidt constant at 273.15 K, 100 kPa in inverse meters cubed. Alias of LoschmidtConstantUncertainty.*/
	#endif  
	/// @}

	/// @addtogroup NISTConst-MagneticConstant 
	/// @{
	const double mu0 = magneticConstant;																		/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Magnetic constant in newtons per ampere squared. Alias of magneticConstant.*/
	const double vacuumPermeability = magneticConstant;															/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Magnetic constant in newtons per ampere squared. Alias of magneticConstant.*/
	const double permeabilityOfFreeSpace = magneticConstant;													/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Magnetic constant in newtons per ampere squared. Alias of magneticConstant.*/
	const double permeabilityOfVacuum = magneticConstant;														/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Magnetic constant in newtons per ampere squared. Alias of magneticConstant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double mu0Uncertainty = magneticConstantUncertainty;													/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Uncertainty in magnetic constant in newtons per ampere squared. Alias of magneticConstantUncertainty.*/
	const double vacuumPermeabilityUncertainty = magneticConstantUncertainty;									/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Uncertainty in magnetic constant in newtons per ampere squared. Alias of magneticConstantUncertainty.*/
	const double permeabilityOfFreeSpaceUncertainty = magneticConstantUncertainty;								/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Uncertainty in magnetic constant in newtons per ampere squared. Alias of magneticConstantUncertainty.*/
	const double permeabilityOfVacuumUncertainty = magneticConstantUncertainty;									/**< \f$\mu_0 \ (\frac{N}{A^3})\f$ Uncertainty in magnetic constant in newtons per ampere squared. Alias of magneticConstantUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-MagneticFluxQuantum
	/// @{
	const double Phi0 = magneticFluxQuantum;																	/**< \f$\Phi_0 \ (Wb)\f$ Magnetic flux quantum in weber. Alias of magneticFluxQuantum.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double Phi0Uncertainty = magneticFluxQuantumUncertainty;												/**< \f$\Phi_0 \ (Wb)\f$ Uncertainty in magnetic flux quantum in weber. Alias of magneticFluxQuantumUncertainty.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-MolarGasConstant 
	/// @{
	const double R = molarGasConstant;																			/**< \f$R \ (\frac{J}{mol\ K})\f$ Molar gas constant in joules per mole kelvin. Alias of molarGasConstant.*/
	const double gasConstant = molarGasConstant;																/**< \f$R \ (\frac{J}{mol\ K})\f$ Molar gas constant in joules per mole kelvin. Alias of molarGasConstant.*/
	const double universalGasConstant = molarGasConstant;														/**< \f$R \ (\frac{J}{mol\ K})\f$ Molar gas constant in joules per mole kelvin. Alias of molarGasConstant.*/
	const double idealGasConstant = molarGasConstant;															/**< \f$R \ (\frac{J}{mol\ K})\f$ Molar gas constant in joules per mole kelvin. Alias of molarGasConstant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double RUncertainty = molarGasConstantUncertainty;													/**< \f$R \ (\frac{J}{mol\ K})\f$ Uncertainty in molar gas constant in joules per mole kelvin. Alias of molarGasConstantUncertainty.*/
	const double gasConstantUncertainty = molarGasConstantUncertainty;											/**< \f$R \ (\frac{J}{mol\ K})\f$ Uncertainty in molar gas constant in joules per mole kelvin. Alias of molarGasConstantUncertainty.*/
	const double universalGasConstantUncertainty = molarGasConstantUncertainty;									/**< \f$R \ (\frac{J}{mol\ K})\f$ Uncertainty in molar gas constant in joules per mole kelvin. Alias of molarGasConstantUncertainty.*/
	const double idealGasConstantUncertainty = molarGasConstantUncertainty;										/**< \f$R \ (\frac{J}{mol\ K})\f$ Uncertainty in molar gas constant in joules per mole kelvin. Alias of molarGasConstantUncertainty.*/
	#endif  
	/// @}

	/// @addtogroup NISTConst-MolarMassConstant 
	/// @{
	const double Mu = molarMassConstant;																		/**< \f$M_u \ (\frac{kg}{mol})\f$ Molar mass constant in kilograms per mole. Alias of molarMassConstant.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double MuUncertainty = molarMassConstantUncertainty;													/**< \f$M_u \ (\frac{kg}{mol})\f$ Uncertainty in molar mass constant in kilograms per mole. Alias of molarMassConstantUncertainty.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-NuclearMagneton
	/// @{
	const double muN = nuclearMagneton;																			/**< \f$\mu_N \ (\frac{J}{T})\f$ Nuclear magneton in joules per tesla. Alias of nuclearMagneton.*/
	const double muNIneVPerT = nuclearMagnetonIneVPerT;															/**< \f$ \ (\frac{eV}{T})\f$ Nuclear magneton in electron volts per tesla. Alias of nuclearMagnetonIneVPerT.*/
	const double muNInInversemT = nuclearMagnetonInInversemT;													/**< \f$\frac{\mu_N}{hc} \ (\frac{1}{m\ T})\f$ Nuclear magneton in inverse meters tesla. Alias of nuclearMagnetonInInversemT.*/
	const double muNInKPerT = nuclearMagnetonInKPerT;															/**< \f$\frac{\mu_N}{k} \ (\frac{K}{T})\f$ Nuclear magneton in kelvins per tesla. Alias of nuclearMagnetonInKPerT.*/
	const double muNInMHzPerT = nuclearMagnetonInMHzPerT;														/**< \f$\frac{\mu_N}{h} \ (\frac{MHz}{T})\f$ Nuclear magneton in megahertz per tesla. Alias of nuclearMagnetonInMHzPerT.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double muNUncertainty = nuclearMagnetonUncertainty;													/**< \f$\mu_N \ (\frac{J}{T})\f$ Uncertainty in nuclear magneton in joules per tesla. Alias of nuclearMagnetonUncertainty.*/
	const double muNIneVPerTUncertainty = nuclearMagnetonIneVPerTUncertainty;									/**< \f$ \ (\frac{eV}{T})\f$ Uncertainty in nuclear magneton in electron volts per tesla. Alias of nuclearMagnetonIneVPerTUncertainty.*/
	const double muNInInversemTUncertainty = nuclearMagnetonInInversemTUncertainty;								/**< \f$\frac{\mu_N}{hc} \ (\frac{1}{m\ T})\f$ Uncertainty in nuclear magneton in inverse meters tesla. Alias of nuclearMagnetonInInversemTUncertainty.*/
	const double muNInKPerTUncertainty = nuclearMagnetonInKPerTUncertainty;										/**< \f$\frac{\mu_N}{k} \ (\frac{K}{T})\f$ Uncertainty in nuclear magneton in kelvins per tesla. Alias of nuclearMagnetonInKPerTUncertainty.*/
	const double muNInMHzPerTUncertainty = nuclearMagnetonInMHzPerTUncertainty;									/**< \f$\frac{\mu_N}{h} \ (\frac{MHz}{T})\f$ Uncertainty in nuclear magneton in megahertz per tesla. Alias of nuclearMagnetonInMHzPerTUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-GravitationalConstant  
	/// @{
	const double G = NewtonianConstantOfGravitation;															/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Newtonian constant of gravitation in meters cubed per kilogram second squared. Alias of NewtonianConstantOfGravitation.*/
	const double gravitationalConstant = NewtonianConstantOfGravitation;										/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Newtonian constant of gravitation in meters cubed per kilogram second squared. Alias of NewtonianConstantOfGravitation.*/
	const double universalGravitationalConstant = NewtonianConstantOfGravitation;								/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Newtonian constant of gravitation in meters cubed per kilogram second squared. Alias of NewtonianConstantOfGravitation.*/
	const double NewtonsConstant = NewtonianConstantOfGravitation;												/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Newtonian constant of gravitation in meters cubed per kilogram second squared. Alias of NewtonianConstantOfGravitation.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double GUncertainty = NewtonianConstantOfGravitationUncertainty;										/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Uncertainty in Newtonian constant of gravitation in meters cubed per kilogram second squared. Alias of NewtonianConstantOfGravitationUncertainty.*/
	const double gravitationalConstantUncertainty = NewtonianConstantOfGravitationUncertainty;					/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Uncertainty in Newtonian constant of gravitation in meters cubed per kilogram second squared. Alias of NewtonianConstantOfGravitationUncertainty.*/
	const double universalGravitationalConstantUncertainty = NewtonianConstantOfGravitationUncertainty;			/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Uncertainty in Newtonian constant of gravitation in meters cubed per kilogram second squared. Alias of NewtonianConstantOfGravitationUncertainty.*/
	const double NewtonsConstantUncertainty = NewtonianConstantOfGravitationUncertainty;						/**< \f$G \ (\frac{m^3}{kg\ s^2})\f$ Uncertainty in Newtonian constant of gravitation in meters cubed per kilogram second squared. Alias of NewtonianConstantOfGravitationUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-PlanckConstant 
	/// @{
	const double h = PlanckConstant;																			/**< \f$h \ (J s)\f$ Planck constant in joule seconds. Alias of PlanckConstant.*/
	const double hIneVs = PlanckConstantIneVs;																	/**< \f$h \ (eV s)\f$ Planck constant in electron volt seconds. Alias of PlanckConstantIneVs.*/
	const double hbar= PlanckConstantOver2Pi;																	/**< \f$\hbar \ (J s)\f$ Planck constant over 2 pi in joule seconds. Alias of PlanckConstantOver2Pi.*/
	const double hbarIneVs = PlanckConstantOver2PiIneVs;														/**< \f$\hbar \ (eV s)\f$ Planck constant over 2 pi in electron volt seconds. Alias of PlanckConstantOver2PiIneVs.*/
	const double reducedPlanckConstant = PlanckConstantOver2Pi;													/**< \f$\hbar \ (J s)\f$ Planck constant over 2 pi in joule seconds. Alias of PlanckConstantOver2Pi.*/
	const double reducedPlanckConstantIneVs = PlanckConstantOver2PiIneVs;										/**< \f$\hbar \ (eV s)\f$ Planck constant over 2 pi in electron volt seconds. Alias of PlanckConstantOver2PiIneVs.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double hUncertainty = PlanckConstantUncertainty;														/**< \f$h \ (J s)\f$ Uncertainty in Planck constant in joule seconds. Alias of PlanckConstantUncertainty.*/
	const double hIneVsUncertainty = PlanckConstantIneVsUncertainty;											/**< \f$h \ (eV s)\f$ Uncertainty in Planck constant in electron volt seconds. Alias of PlanckConstantIneVsUncertainty.*/
	const double hbarUncertainty= PlanckConstantOver2PiUncertainty;												/**< \f$\hbar \ (J s)\f$ Uncertainty in Planck constant over 2 pi in joule seconds. Alias of PlanckConstantOver2PiUncertainty.*/
	const double hbarIneVsUncertainty = PlanckConstantOver2PiIneVsUncertainty;									/**< \f$\hbar \ (eV s)\f$ Uncertainty in Planck constant over 2 pi in electron volt seconds. Alias of PlanckConstantOver2PiIneVsUncertainty.*/
	const double reducedPlanckConstantUncertainty = PlanckConstantOver2PiUncertainty;							/**< \f$\hbar \ (J s)\f$ Uncertainty in Planck constant over 2 pi in joule seconds. Alias of PlanckConstantOver2PiUncertainty.*/
	const double reducedPlanckConstantIneVsUncertainty = PlanckConstantOver2PiIneVsUncertainty;					/**< \f$\hbar \ (eV s)\f$ Uncertainty in Planck constant over 2 pi in electron volt seconds. Alias of PlanckConstantOver2PiIneVsUncertainty.*/
	#endif  
	/// @}
	
	
	/// @addtogroup NISTConst-SpeedOfLight 
	/// @{
	const double c = speedOfLightInVacuum;																		/**< \f$c \ (\frac{m}{s})\f$ Speed of light in vacuum in meters per second. Alias of speedOfLightInVacuum.*/
	const double speedOfLight = speedOfLightInVacuum;															/**< \f$c \ (\frac{m}{s})\f$ Speed of light in vacuum in meters per second. Alias of speedOfLightInVacuum.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double cUncertainty = speedOfLightInVacuumUncertainty;												/**< \f$c \ (\frac{m}{s})\f$ Uncertainty in speed of light in vacuum in meters per second. Alias of speedOfLightInVacuumUncertainty.*/
	const double speedOfLightUncertainty = speedOfLightInVacuumUncertainty;										/**< \f$c \ (\frac{m}{s})\f$ Uncertainty in speed of light in vacuum in meters per second. Alias of speedOfLightInVacuumUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-GravityAcceleration
	/// @{
	const double g0 = standardAccelerationOfGravity;															/**< \f$g_n \ (\frac{m}{s^2})\f$ Standard acceleration of gravity in meters per second squared. Alias of standardAccelerationOfGravity.*/
	const double standardAccelerationDueToGravity = standardAccelerationOfGravity; 								/**< \f$g_n \ (\frac{m}{s^2})\f$ Standard acceleration of gravity in meters per second squared. Alias of standardAccelerationOfGravity.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double g0Uncertainty = standardAccelerationOfGravityUncertainty;										/**< \f$g_n \ (\frac{m}{s^2})\f$ Uncertainty in standard acceleration of gravity in meters per second squared. Alias of standardAccelerationOfGravityUncertainty.*/
	const double standardAccelerationDueToGravityUncertainty = standardAccelerationOfGravityUncertainty; 		/**< \f$g_n \ (\frac{m}{s^2})\f$ Uncertainty in standard acceleration of gravity in meters per second squared. Alias of standardAccelerationOfGravityUncertainty.*/
	#endif  
	/// @}

	/// @addtogroup NISTConst-StandardAtmosphere 
	/// @{
	const double atm = standardAtmosphere; 																		/**< \f$atm \ (Pa)\f$ Standard atmosphere in pascals. Alias of standardAtmosphere.*/
	const double atmosphericPressure = standardAtmosphere;														/**< \f$atm \ (Pa)\f$ Standard atmosphere in pascals. Alias of standardAtmosphere.*/
	const double barometricPressure = standardAtmosphere;														/**< \f$atm \ (Pa)\f$ Standard atmosphere in pascals. Alias of standardAtmosphere.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double atmUncertainty = standardAtmosphereUncertainty; 												/**< \f$atm \ (Pa)\f$ Uncertainty in standard atmosphere in pascals. Alias of standardAtmosphereUncertainty.*/
	const double atmosphericPressureUncertainty = standardAtmosphereUncertainty;								/**< \f$atm \ (Pa)\f$ Uncertainty in standard atmosphere in pascals. Alias of standardAtmosphereUncertainty.*/
	const double barometricPressureUncertainty = standardAtmosphereUncertainty;									/**< \f$atm \ (Pa)\f$ Uncertainty in standard atmosphere in pascals. Alias of standardAtmosphereUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-StefanBoltzmannConstant 
	/// @{
	const double sigma = StefanBoltzmannConstant; 																/**< \f$\sigma \ (\frac{W}{m^2 K^4})\f$ Stefan-Boltzmann constant in watts per meter squared kelvin to the 4th. Alias of StefanBoltzmannConstant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double sigmaUncertainty = StefanBoltzmannConstantUncertainty; 										/**< \f$\sigma \ (\frac{W}{m^2 K^4})\f$ Uncertainty in Stefan-Boltzmann constant in watts per meter squared kelvin to the 4th. Alias of StefanBoltzmannConstantUncertainty.*/
	#endif  
	/// @}
	
	/// @addtogroup NISTConst-vonKlitzingConstant 
	/// @{
	const double RK = vonKlitzingConstant;																		/**< \f$R_K \ (\Omega)\f$ von Klitzing constant in ohms. Alias of vonKlitzingConstant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double RKUncertainty = vonKlitzingConstantUncertainty;												/**< \f$R_K \ (\Omega)\f$ Uncertainty in von Klitzing constant in ohms. Alias of vonKlitzingConstantUncertainty.*/
	#endif  
	/// @}

	/// @addtogroup NISTConst-WeakMixingAngle 
	/// @{
	const double WeinbergAngle = weakMixingAngle; 																/**< \f$sin^2 \theta_W \ (1)\f$ Weak mixing angle. Alias of weakMixingAngle.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double WeinbergAngleUncertainty = weakMixingAngleUncertainty; 										/**< \f$sin^2 \theta_W \ (1)\f$ Uncertainty in weak mixing angle. Alias of weakMixingAngleUncertainty.*/
	#endif  
	/// @}
	
} //namespace NISTConst

#endif

