#include "kato/log.hpp"
#include "link/serial_link.hpp"

inline void onError()
{
    kato::log::cout << KATO_RED << "Error" << KATO_RESET << std::endl;
}

int main()
{
    SerialLink link("/dev/ttyGS0", B115200, onError);
    return 0;
}