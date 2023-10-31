#pragma once

#include <string>

/// Base Interface
class InsuranceModel
{
public:
	virtual ~InsuranceModel() {}

	virtual void populateModel() const = 0;

protected:
	std::string m_accountHolderName;
	std::string m_providerName;

private:

};

