#pragma once
#include "../persistence/person.h"
#include "../persistence/personen_repository.h"
#include "../service/personen_service_exception.h"
#include "../service/blacklist_service.h"

class personen_service_impl {

    personen_repository& repo;


public:




    /*
     *	Vorname < 2 -> PSE
     *	Nachname < 2 -> PSE
     *
     *	Attila -> PSE
     *
     *	Alle Technische Exceptions -> PSE
     *
     *	Happy Day -> person an Save Methode �bergeben
     *
     */
    void speichern(person& person_) const
    {


    }

    void speichern(std::string vorname,std::string nachname) const
    {


    }
};
