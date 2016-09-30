#ifndef LSDetectorConstruction_h
#define LSDetectorConstruction_h 1

#include "G4VUserDetectorConstruction.hh"
#include "G4RunManager.hh"
#include "G4NistManager.hh"
#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4SystemOfUnits.hh"
#include "globals.hh"

class G4VPhysicalVolume;
class G4LogicalVolume;

class LSDetectorConstruction : public G4VUserDetectorConstruction {
  public:
  LSDetectorConstruction();
  virtual ~LSDetectorConstruction();

  virtual G4VPhysicalVolume* Construct();

};


#endif
