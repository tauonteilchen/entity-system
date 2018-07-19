// Inexor entity system prototype
// (c)2018 Inexor

#ifndef INEXOR_ENTSYS_TESTING_FRAMEWORK_HEADER
#define INEXOR_ENTSYS_TESTING_FRAMEWORK_HEADER

#include <iostream>
using namespace std;

// Time 
#include <ctime>
#include <ratio>
#include <chrono>
using namespace std::chrono;


// Components which have to be tested:
#include "../data-container/DataContainer.hpp"
#include "../entity-manager/entity-attributes-manager/entity-attribute-type/EntityAttributeType.hpp"

namespace inexor {
namespace entsys {

// Points in time.
high_resolution_clock::time_point t1;

// Start test: remember start time in milliseconds
void start_test()
{
    t1 = high_resolution_clock::now();
}

// End test: remember end time in milliseconds
void end_test()
{
    // Calculate time difference in milliseconds.
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    // Print out how many milliseconds have passed during this test.
    std::cout << "Time passed: " << time_span.count() << " milliseconds." << endl  << endl;
}



// Testing multiple purpose data container.
void Test_EntitySystemDataContainers()
{
    DataContainer dc_int(0);
    DataContainer dc_bigint(std::int64_t(0));
    DataContainer dc_string(std::string(""));
    DataContainer dc_bool(false);
    DataContainer dc_float(0.0f);
    DataContainer dc_double(0.0);
    
    start_test();
    cout << "Call DataContainer::operator=(int) 1000 times:" << endl;
    for(int i=0; i<1000; i++) {
        dc_int.set(0);
        dc_int = i;
    }
    end_test();

    start_test();
    cout << "Call DataContainer::operator=(float) 1000 times:" << endl;
    for(float i=0.0f; i<1000.0f; i+=1.0f) {
        dc_float.set(0.0f);
        dc_float = i;
    }
    end_test();

    start_test();
    cout << "Call DataContainer::operator=(double) 1000 times:" << endl;
    for(double i=0.0f; i<1000.0f; i+=1.0f) {
        dc_double.set(0.0);
        dc_double = i;
    }
    end_test();

    start_test();
    cout << "Call DataContainer::operator=(bool) 1000 times:" << endl;
    for(int i=0; i<1000; i+=1) {
        dc_bool.set(false);
        dc_bool = (0==(i%2)) ? true : false;
    }
    end_test();

    start_test();
    cout << "Call DataContainer::operator=(std::int64_t) 1000 times:" << endl;
    for(int64_t i=0; i<1000; i+=1) {
        dc_bigint.set(0);
        dc_bigint = i;
    }
    end_test();

    start_test();
    cout << "Call DataContainer::operator=(std::string) 1000 times:" << endl;
    for(int i=0; i<1000; i+=1) {
        dc_string.set(std::string(""));
        dc_string = std::to_string(i);
    }
    end_test();

    // add, sub, mul, div
    // TODO: Why is this constructor call for add, sub, mul, div 
    // methods even working btw?

    start_test();
    cout << "Call DataContainer::add(int) 1000 times:" << endl;
    for(int i=0; i<1000; i+=1) dc_int.add(1);
    end_test();

    start_test();
    dc_int.set(1000);
    cout << "Call DataContainer::sub(int) 1000 times:" << endl;
    for(int i=0; i<1000; i+=1) dc_int.sub(1);
    end_test();

    start_test();
    dc_int.set(2);
    cout << "Call DataContainer::mul(int) 1000 times:" << endl;
    for(int i=0; i<1000; i+=1) dc_int.mul(2);
    end_test();

    start_test();
    cout << "Call DataContainer::mul(int) 1000 times:" << endl;
    for(int i=0; i<1000; i+=1) dc_int.div(2);
    end_test();

    start_test();
    int test_int = 0;
    cout << "Call DataContainer::get_intval() 1 million times:" << endl;
    for(int i=0; i<1000000; i++) test_int = dc_int.get_intval();
    end_test();
    
    start_test();
    cout << "Call DataContainer::get_data_type() 1 million times:" << endl;
    for(int i=0; i<1000000; i++) ENTSYS_DATA_TYPE test_type = dc_int.get_data_type();
    end_test();

    start_test();
    cout << "Call DataContainer::operator=(int) 1 million times" << endl;
    end_test();
}


void Test_EntityAttributeTypes()
{
    EntityAttributeType attr1;

    cout << "Setting attribute name" << endl;
    start_test();
    attr1.set_name(std::string("color"));
    end_test();

    std::string finished_yet = std::string("false");

    if(attr1.is_finished()) finished_yet = std::string("true");
    cout << "Are we finished yet?: " << finished_yet.c_str() << endl;

    cout << "Setting attribute data type" << endl;
    start_test();
    attr1.set_data_type(ENTSYS_DATA_TYPE_FLOAT);
    end_test();

    if(attr1.is_finished()) finished_yet = std::string("true");
    cout << "Are we finished yet?: " << finished_yet.c_str() << endl;

    attr1.finish();

    if(attr1.is_finished()) finished_yet = std::string("true");
    cout << "Are we finished yet?: " << finished_yet.c_str() << endl;


}

};
};

#endif // INEXOR_ENTSYS_TESTING_FRAMEWORK_HEADER
