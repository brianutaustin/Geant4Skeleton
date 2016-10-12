#include "LSRunAction.hh"

LSRunAction::LSRunAction() : G4UserRunAction() {
}

LSRunAction::~LSRunAction() {
}

void LSRunAction::BeginOfRunAction(const G4Run * run) {
  runID = run->GetRunID();
  G4cout << "Run number: " << runID << " started." << G4endl;

  G4AnalysisManager *AnalysisMan = G4AnalysisManager::Instance();
  AnalysisMan->OpenFile("OutputData");
  AnalysisMan->CreateH1("OPW", "Optical Photon Wavelength", 50, 110, 210);
  G4cout << "Analysis Histogram is initialized." << G4endl;

  return;
}

void LSRunAction::EndOfRunAction(const G4Run * run) {
  runID = run->GetRunID();

  G4AnalysisManager *AnalysisMan = G4AnalysisManager::Instance();
  AnalysisMan->Write();
  AnalysisMan->CloseFile();
  G4cout << "Analysis Histogram is terminated." << G4endl;

  G4cout << "----------------------------------------------------------" << G4endl << G4endl << G4endl;

  return;
}
