#include "LSDetectorConstruction.hh"

LSDetectorConstruction::LSDetectorConstruction() : G4VUserDetectorConstruction() {
}

LSDetectorConstruction::~LSDetectorConstruction() {
}


G4VPhysicalVolume * LSDetectorConstruction::Construct() {
  G4NistManager * nist = G4NistManager::Instance();

  // check overlapping
  G4bool checkOverlaps = true;

  // dimensions of world volume
  G4double world_hx = 1.0 * m;
  G4double world_hy = 1.0 * m;
  G4double world_hz = 1.0 * m;

  // material for World volume
  G4Material * world_mat = nist->FindOrBuildMaterial("G4_AIR");

  // create world volume
  G4Box * worldBox = new G4Box("World", world_hx, world_hy, world_hz);

  // create world logical volume
  G4LogicalVolume * worldLog = new G4LogicalVolume(worldBox, world_mat, "World");

  // create world physical volume centered at origin and unrotated
  G4VPhysicalVolume * physWorld = new G4PVPlacement(0, G4ThreeVector(), worldLog, "World", 0, false, 0, checkOverlaps);

  return physWorld;
}
