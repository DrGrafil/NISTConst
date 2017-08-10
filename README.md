# NISTConst
NISTConst is a header only C/C++ constants library for physics and chemistry. It contains a total of 335 constants compiled by the [National Institute of Standards and Technology (NIST)](https://www.nist.gov/) as well as their associated uncertainties. 

## About
This library provides access to the current set of basic constants and conversion factors for physics and chemistry recommended by the [Committee on Data for Science and Technology (CODATA)](http://www.codata.org/) for international use. 

The data was compiled from the [Physical Measurement Laboratory of NIST](https://physics.nist.gov/cuu/Constants/). Currently NISTConst is based off of the 2014 CODATA recommended values.

All constants are fully documented. You can read the documentation [HERE](https://rawgit.com/Metex/NISTConst/master/doc/html/index.html)

## Usage

```cpp
#define NISTCONST_UNCERTAINTY // To include uncertainties
#include <NISTConst/NISTConst.hpp>

//Calculates the mass defect, the difference between the mass of the atom 
//and the sum of the masses of its parts in unified atomic mass units.
double MassDefectInu(int const atomicNumber, int const massNumber, double massAtom)
{
	double protonMass = atomicNumber * NISTConst::protonMassInu;
	double electronMass = atomicNumber * NISTConst::electronMassInu;
	double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInu;

	return protonMass + electronMass + neutronMass - massAtom;	
}
```

## FAQ

1. Will you support other languages besides C/C++?

   Yes. We eventually intend to support Swift, GO, Java and a few other languages.

2. Why are you missing _____ constant?

   Currently NISTConst intends to only have the constants defined by CODATA and listed by NIST as well as some common aliases. There are some obvious omitions especially in for atomic constants. Eventually we will release a way to include these "missing" constants. 

3. Why does wikipedia and google disagree with some of your values?

   It is because NISTConst values are frozen to the values present in 2014 CODATA while google and wikipedia are able to pick values from any source. An example of this is for the mass of the proton. As of 8/8/17:

   | Proton Mass | Source |
| --- | --- |
| 1.007276466879 u | NISTConst from NIST/CODATA 2014 |
| 1.007276466879 u | Wikipedia |
| 1.007276466812 u | Google |
| 1.007276466583 u | Latest value from ["High-Precision Measurement of the Proton’s Atomic Mass"](https://doi.org/10.1103/PhysRevLett.119.033001) |

   The latest value will probably be adopted by both google and wikipedia in the near future.

4. The value of _____ is wrong! Can you change it to ...?

   Check either from [HERE](https://github.com/Metex/NISTConst/blob/master/CODATA/Table%20of%20NIST%20Constant%20CODATA%202014.txt) or [HERE](https://physics.nist.gov/cuu/Constants/) before e-mailing us. NISTConst sticks stricktly to the values reported by NIST/CODATA. If NISTConst disagrees with NIST/CODATA we will change the value to be in agreement with NIST/CODATA.

---
## Release notes

### [NISTConst 0.7.7](https://github.com/Metex/NISTConst/releases/latest)
#### Features:
- Completed documentation.

#### Improvements:
- Added units in documentation to all atomic units.
- Clarified atomic mass unit to unified atomic mass unit.
- Added spaces where necissary in units documentation.
- Moved inverse fine structure constant to be under Fine structure constant.
- Brining tau particle and triton notation inline with other particles.
- Renamed PlanckMassInGeV to PlanckMassInGeVpercSquared.
- Replaced lambdabar with lambda/2pi in documentation.

#### Fixes:
- Fixed issue when compiling with NISTCONST_UNCERTAINTY defined.  
- Fixed uncertainty constant names for: electronVolt
- Fixed error in name of NewtonianConstantOfGravitationOverhbarc
- Fixed misspelling of tesla in few places
---

### [NISTConst 0.7.0](https://github.com/Metex/NISTConst/tree/0.7.0)
#### Features:
- All NIST constants and uncertainties are now included.  
- Passes compile check.

---