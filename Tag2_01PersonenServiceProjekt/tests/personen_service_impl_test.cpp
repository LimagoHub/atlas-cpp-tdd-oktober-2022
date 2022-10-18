//
// Created by JoachimWagner on 18.10.2022.
//

#include "personen_service_impl_test.h"

TEST_F(personen_service_impl_test, speichern__vorname_zu_kurz__throws_personen_service_exception){
    try {
        person invalid_person{"J", "Doe"};
        object_under_test.speichern(invalid_person);
        FAIL() << "Upps";
    }  catch(const personen_service_exception& ex) {
        EXPECT_STREQ("Vorname zu kurz.", ex.what());
    }

}

TEST_F(personen_service_impl_test, speichern__nachname_zu_kurz__throws_personen_service_exception){
    try {
        person invalid_person{"Joe", "D"};
        object_under_test.speichern(invalid_person);
        FAIL() << "Upps";
    }  catch(const personen_service_exception& ex) {
        EXPECT_STREQ("Nachname zu kurz.", ex.what());
    }

}