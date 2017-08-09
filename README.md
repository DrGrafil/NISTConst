# NISTConst
Containst fundemental phisical constants compiled by NIST

A total of 335 constats with their associated uncertainties.

## About
This library provides access to the current set of basic constants and conversion factors for physics and chemistry recommended by the [Committee on Data for Science and Technology (CODATA)](http://www.codata.org/) for international use. 

The data was compiled from the [National Institute of Standards and Technology (NIST)](https://physics.nist.gov/cuu/Constants/). Currently NISTConst is based off of the 2014 CODATA recommended values.

All constants are fully documented. You can read the documentation [HERE](./doc/html/index.html)

## Usage



## FAQ

1. Why does wikipedia and google disagree with some of your values?

It is because NISTConst values are frozen to the values present in 2014 CODATA while google and wikipedia are able to pick values from any source. An example of this is for the mass of the proton. As of 8/8/17:

1.007276466879 u -Value present in NISTConst from NIST/Codata 2014
1.007276466879 u -Wikipedia
1.007276466812 u -Google
1.007276466583 u -Latest value from ["High-Precision Measurement of the Proton’s Atomic Mass"](https://doi.org/10.1103/PhysRevLett.119.033001) 

The latest value will probably be adopted by both google and wikipedia in the near future.

2. Why are you missing _____ constant?

Currently NISTConst intends to only have the constants defined by CODATA and listed by NIST as well as some common aliases. There are some obvious omitions especially in for atomic constants. Eventually we will release a way to include these "missing" constants.  

---
## Latest Release