#include <iostream>

using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id)
		: m_id(id)
	{ }

	long GetID() { return m_id; }
	void PlugAndPlay() {}
};

class NetworkDevice
{
private:
	long m_id;

public:
	NetworkDevice(long id) : m_id(id) {}

	long GetID() { return m_id; }

	void Networking() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		: USBDevice(usb_id), NetworkDevice(net_id)
	{ }

	//// CAN USE
	//USBNetworkDevice(long id)
	//	: USBDevice(id), NetworkDevice(id)
	//{
	//}
};

int main()
{
	USBNetworkDevice my_USBNetworkDeivce(3.14, 6.022);

	my_USBNetworkDeivce.Networking();
	my_USBNetworkDeivce.PlugAndPlay();

	//my_USBNetworkDeivce.GetID(); // ambiguous access of 'GetID'

	my_USBNetworkDeivce.USBDevice::GetID();
	my_USBNetworkDeivce.NetworkDevice::GetID();

	return 0;
}