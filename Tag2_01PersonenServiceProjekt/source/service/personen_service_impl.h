#pragma once
#include "../persistence/person.h"
#include "../persistence/personen_repository.h"
#include "../service/personen_service_exception.h"
#include "blacklisted_person_service.h"

class personen_service_impl {

    personen_repository& repo;
    blacklisted_person_service &blacklistedPersonService_;

    void speichern_impl(const person &person_) const {
        check_person(person_);
        repo.save_or_update(person_);
    }

    void check_person(const person &person_) const {
        validate(person_);
        business_check(person_);
    }

    void business_check(const person &person_) const {
        if (person_.getVorname() == "Attila")
            throw personen_service_exception{"Antipath"};
    }

    void validate(const person &person_) const {
        if (person_.getVorname().length() < 2)
            throw personen_service_exception{"Vorname zu kurz."};

        if (person_.getNachname().length() < 2)
            throw personen_service_exception{"Nachname zu kurz."};
    }

public:


    personen_service_impl(personen_repository &repo, blacklisted_person_service &blacklistedPersonService) : repo(repo),
                                                                                                             blacklistedPersonService_(
                                                                                                                     blacklistedPersonService) {}

    /*
     *	Vorname < 2 -> PSE
     *	Nachname < 2 -> PSE
     *
     *	Attila -> PSE
     *
     *	Alle Technische Exceptions -> PSE
     *
     *	Happy Day -> person an Save_or_update Methode uebergeben
     *
     */
    void speichern(person& person_) const
    {

        try {
            speichern_impl(person_);

        } catch(const personen_service_exception &ex) {
            throw ex;
        } catch(...) {
            throw personen_service_exception{"Fehler im Service"};
        }

    }




};
