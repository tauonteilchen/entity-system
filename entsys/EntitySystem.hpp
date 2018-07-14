// Inexor entity system prototype
// (c)2018 Inexor

#ifndef INEXOR_ENTSYS_MAIN_HEADER
#define INEXOR_ENTSYS_MAIN_HEADER

#include "errorhandling/EntitySystemErrorCodesEnumeration.hpp"
#include "manager/EntityManager.hpp"

namespace inexor {
namespace entsys {

// Entity system singleton implementation
class CEntitySystem : public CEntityManager
{
    private:
        // singleton implementation:
        // private constructor to prevent double instancing
        CEntitySystem();
        static CEntitySystem* entsys_singleton_instance;

    public:
        ~CEntitySystem();
        static CEntitySystem* instance();

};

};
};

#endif // INEXOR_ENTSYS_MAIN_HEADER
