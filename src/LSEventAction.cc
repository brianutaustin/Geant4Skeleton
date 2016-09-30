#include "LSEventAction.hh"
#include "LSRunAction.hh"

#include "G4RunManager.hh"
#include "G4Event.hh"

LSEventAction::LSEventAction(LSRunAction* runAction) : G4UserEventAction() {
}

LSEventAction::~LSEventAction() {
}

void LSEventAction::BeginOfEventAction(const G4Event *event) {
}

void LSEventAction::EndOfEventAction(const G4Event *event) {
}
