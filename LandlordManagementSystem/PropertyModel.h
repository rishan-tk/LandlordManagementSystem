#pragma once

#include "BillModel.h"

#include <vector>
#include <string>

enum class BillType {GAS, ELECTRIC, WATER, INTERNET};

class PropertyModel{
public:
	PropertyModel() {}
	~PropertyModel() {}

	void addGasBill();
	void addElectricBill();
	void addWaterBill();
	void addInternetBill();

	//Accessors
	std::string getAddress() const { return m_address; }
	std::string getNickName() const { return m_nickName; }
	std::vector<BillModel*> getGasBills() { return m_gasBills; }

	//Mutators
	void setAddress(std::string address) { m_address = address; }
	void setNickName(std::string nickName) { m_nickName = nickName; }

private:
	std::string m_address;
	std::string m_nickName;
	std::vector<BillModel*> m_gasBills;
	std::vector<BillModel*> m_electricBills;
	std::vector<BillModel*> m_waterBills;
	std::vector<BillModel*> m_internetBills;

	void addBills(const BillFactory &factory, BillType billType);
};

