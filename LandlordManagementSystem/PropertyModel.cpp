#include "PropertyModel.h"

void PropertyModel::addGasBill() {
	GasBillFactory gasBillFactory;
	addBills(gasBillFactory, BillType::GAS);
}

void PropertyModel::addElectricBill(){
	ElectricBillFactory electricBillFactory;
	addBills(electricBillFactory, BillType::ELECTRIC);
}

void PropertyModel::addWaterBill(){
	WaterBillFactory waterBillFactory;
	addBills(waterBillFactory, BillType::WATER);
}

void PropertyModel::addInternetBill(){
	InternetBillFactory internetBillFactory;
	addBills(internetBillFactory, BillType::INTERNET);
}


void PropertyModel::addBills(const BillFactory& factory, BillType billType){
	BillModel* bill = factory.createBillModel();
	switch (billType) {
		case BillType::GAS:
			m_gasBills.push_back(bill);
			break;
		case BillType::ELECTRIC:
			m_electricBills.push_back(bill);
			break;
		case BillType::WATER:
			m_waterBills.push_back(bill);
			break;
		case BillType::INTERNET:
			m_internetBills.push_back(bill);
			break;
		default:
			break;
	}
}
