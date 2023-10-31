#pragma once

#include "PropertyModel.h"

#include <map>


enum class BusinessType {
	SOLE_TRADER,
	LIMITED_COMPANY
};

class BusinessModel{
public:
	BusinessModel(BusinessType businessType) { m_businessType = businessType; }
	~BusinessModel() {}

	PropertyModel* getProperty(std::string propertyNickname);
	bool addProperty(PropertyModel newProperty);

	//Accessors
	std::string getBusinessType() const { return (m_businessType == BusinessType::SOLE_TRADER) ? "Sole Trader" : "Limited Company"; }
	std::string getBusinessName() const { return m_businessName; }
	std::string getOwnerName() const { return m_ownerName; }

	//Mutators
	void setBusinessType(BusinessType businessType) { m_businessType = businessType; }
	void setBusinessName(std::string businessName) { m_businessName = businessName; }
	void setOwnerName(std::string ownerName) { m_ownerName = ownerName; }

private:

	BusinessType m_businessType; ///< Type of business, (Sole Trader or Limited Company)
	std::string m_businessName; ///< Name of the owner(Sole Trader) or Name of the business(Limited Company)
	std::string m_ownerName; ///< Name of the individual who owns the business
	std::map<std::string, PropertyModel> m_properties; ///< Map of all the properties owned/handled by the business
};

