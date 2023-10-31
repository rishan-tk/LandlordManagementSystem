#pragma once

#include "TariffModel.h"

#include <ctime>

/// Base Interface
class BillModel{
public:
	virtual ~BillModel() {}

	virtual void populateModel() const = 0;
	
	//Accessors
	int getAccountNumber() const { return m_accountNumber; }
	std::string getAccountHolderName() const { return m_accountHolderName; }
	std::string getAddress() const { return m_address; }
	std::string getProviderName() const { return m_providerName; }
	std::time_t getStartDate() const { return m_startDate; }
	std::time_t getEndDate() const { return m_endDate; }
	std::time_t getLastBillDate() const { return m_lastBillDate; }


	//Mutators
	void setAccountNumber(int accountNumber) { m_accountNumber = accountNumber; }
	void setAccountHolderName(std::string accountHolderName) { m_accountHolderName = accountHolderName; }
	void setAddress(std::string address) { m_address = address; }
	void setProviderName(std::string providerName) { m_providerName = providerName; }
	void setStartDate(std::time_t startDate) { m_startDate = startDate; }
	void setEndDate(std::time_t startDate) { m_startDate = startDate; }
	void setLastBillDate(std::time_t lastBillDate) { m_lastBillDate = lastBillDate; }

protected:
	int m_accountNumber;
	std::string m_accountHolderName;
	std::string m_address;
	std::string m_providerName;
	std::time_t m_startDate;
	std::time_t m_endDate;
	std::time_t m_lastBillDate;
	TariffModel m_tariff;


private:

};

class GasBillModel : public BillModel {
public:
	void populateModel() const override {
	
	}
};

class ElectricBillModel : public BillModel{
public:
	void populateModel() const override {

	}
};

class WaterBillModel : public BillModel{
public:
	void populateModel() const override {

	}
};

class InternetBillModel : public BillModel{
public:
	void populateModel() const override {

	}
};

class BillFactory {
public:
	virtual BillModel* createBillModel() const = 0;

};

class GasBillFactory : public BillFactory {
public:
	BillModel* createBillModel() const override {
		return new GasBillModel();
	}
};

class ElectricBillFactory : public BillFactory {
public:
	BillModel* createBillModel() const override {
		return new ElectricBillModel();
	}
};

class WaterBillFactory : public BillFactory {
public:
	BillModel* createBillModel() const override {
		return new WaterBillModel();
	}
};

class InternetBillFactory : public BillFactory {
public:
	BillModel* createBillModel() const override {
		return new InternetBillModel();
	}
};