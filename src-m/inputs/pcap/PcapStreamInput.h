#ifndef PKTVISORD_PCAPSTREAMINPUT_H
#define PKTVISORD_PCAPSTREAMINPUT_H

#include "InputModuleDesc.h"

namespace pktvisor {
namespace input {
namespace pcap {

class PcapStreamInput : public pktvisor::InputModuleDesc
{
public:
    explicit PcapStreamInput(Corrade::PluginManager::AbstractManager &manager, const std::string &plugin)
        : pktvisor::InputModuleDesc{manager, plugin}
    {
    }

    std::string name() const override
    {
        return "Pcap Input";
    }
};

}
}
}

#endif //PKTVISORD_PCAPSTREAMINPUT_H
