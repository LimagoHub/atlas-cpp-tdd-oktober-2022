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

TEST_F(personen_service_impl_test, speichern__Antipath__throws_personen_service_exception){
    try {
        person invalid_person{"John", "Doe"};
        object_under_test.speichern(invalid_person);
        FAIL() << "Upps";
    }  catch(const personen_service_exception& ex) {
        EXPECT_STREQ("Antipath", ex.what());
    }

}

TEST_F(personen_service_impl_test, speichern__unexpected_exception_in_underlying_service__throws_personen_service_exception){
    try {
        person valid_person{"John", "Doe"};
        EXPECT_CALL(repoMock, save_or_update(_)).Times(1).WillOnce(Throw(std::out_of_range{"egal"}));
        object_under_test.speichern(valid_person);
        FAIL() << "Upps";
    }  catch(const personen_service_exception& ex) {
        EXPECT_STREQ("Fehler im Service", ex.what());
    }

}

TEST_F(personen_service_impl_test, speichern__happy_day__person_passed_to_repo_and_no_exception_is_thrown){

        person valid_person{"John", "Doe"};
        EXPECT_CALL(repoMock, save_or_update(valid_person)).Times(1);
        EXPECT_NO_THROW(object_under_test.speichern(valid_person));


}