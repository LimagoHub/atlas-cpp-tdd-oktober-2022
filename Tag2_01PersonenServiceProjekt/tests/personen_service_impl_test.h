//
// Created by JoachimWagner on 18.10.2022.
//

#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Mockpersonen_repository.h"
#include "../source/service/personen_service_impl.h"
#include "../source/service/personen_service_exception.h"
#include "Mockblacklisted_person_service.h"
using namespace testing;

class personen_service_impl_test:public Test {
protected:
    Mockpersonen_repository repoMock;
    Mockblacklisted_person_service blacklistMock;
    personen_service_impl object_under_test{repoMock, blacklistMock};
};




