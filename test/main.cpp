#include <iostream>
#define NISTCONST_UNCERTAINTY
#include "../NISTConst/c++/NISTConst.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


double MassDefectInu(int const atomicNumber, int const massNumber, double massAtom)
{
	double protonMass = atomicNumber * NISTConst::protonMassInu;
	double electronMass = atomicNumber * NISTConst::electronMassInu;
	double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInu;

	return protonMass + electronMass + neutronMass - massAtom;	
}

int main(int argc, char** argv) {
	std::cout << NISTConst::fineStructureConstant << std::endl;
	std::cout << "Mass defect of Carbon " << MassDefectInu(6,12,12.0) << std::endl;
	std::cout << "NISTConst::protonMassInuUncertainty " << NISTConst::protonMassInuUncertainty << std::endl;
	return 0;
	
	
}
