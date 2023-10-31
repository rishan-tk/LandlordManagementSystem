#include "BusinessModel.h"

#include <iterator>

/// <summary>
/// Function to return a Property Object with the associated Nick Name from the map, m_properties
/// </summary>
/// <param name="propertyNickname">The key to be used to search the map, m_properties</param>
/// <returns>The Property Object or throws and exception</returns>
PropertyModel* BusinessModel::getProperty(std::string propertyNickname) {
	std::map<std::string, PropertyModel>::iterator it; ///< Create iterator to search the map
	it = m_properties.find(propertyNickname);

	if (it != m_properties.end())
		return &(it->second);
	else
		return nullptr;
}

/// <summary>
/// Function to add a populated Property object to the map, m_properties 
/// </summary>
/// <param name="newProperty">Populated Property object to be inserted into the map, m_properties</param>
/// <returns>true is Property was added successfully, false if Property already exists</returns>
bool BusinessModel::addProperty(PropertyModel newProperty) {
	std::map<std::string, PropertyModel>::iterator it; ///< Create iterator to search the map
	it = m_properties.find(newProperty.getNickName());

	if (it != m_properties.end())
		return false;
	
	m_properties.insert(std::make_pair(newProperty.getNickName(), newProperty));
	return true; 
}
