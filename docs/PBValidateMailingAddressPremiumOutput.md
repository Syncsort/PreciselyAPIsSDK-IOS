# PBValidateMailingAddressPremiumOutput

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**userFields** | [**NSArray&lt;PBValidateMailingAddressInputRowUserFields&gt;***](PBValidateMailingAddressInputRowUserFields.md) | These fields are returned, unmodified, in the user_fields section of the response. | [optional] 
**status** | **NSString*** | Reports the success or failure of the match attempt. | [optional] 
**statusCode** | **NSString*** | Reason for failure, if there is one. | [optional] 
**statusDescription** | **NSString*** | Description of the problem, if there is one. | [optional] 
**confidence** | **NSString*** | The level of confidence assigned to the address being returned. | [optional] 
**recordType** | **NSString*** | Type of address record. | [optional] 
**recordTypeDefault** | **NSString*** | Code indicating the default match. | [optional] 
**multipleMatches** | **NSString*** | Indicates which address component had multiple matches. | [optional] 
**couldNotValidate** | **NSString*** | Mentions the address component that could not be validated, in case no match is found. | [optional] 
**countryLevel** | **NSString*** | The category of address matching available. | [optional] 
**addressFormat** | **NSString*** | The type of address data being returned. | [optional] 
**addressLine1** | **NSString*** | The first line of the validated address. | [optional] 
**addressLine2** | **NSString*** | The second line of the validated address. | [optional] 
**addressLine3** | **NSString*** | The third line of the validated address. | [optional] 
**addressLine4** | **NSString*** | The fourth line of the validated address. | [optional] 
**city** | **NSString*** | The validated city name. | [optional] 
**stateProvince** | **NSString*** | The validated state or province abbreviation. | [optional] 
**postalCode** | **NSString*** | The validated ZIP Code or postal code. | [optional] 
**postalCodeBase** | **NSString*** | The 5-digit ZIP Code. | [optional] 
**postalCodeAddOn** | **NSString*** | The 4-digit add-on part of the ZIP Code. | [optional] 
**country** | **NSString*** | The country in the format determined by what you selected. | [optional] 
**additionalInputData** | **NSString*** | Input data that could not be matched to a particular address component. | [optional] 
**firmName** | **NSString*** | The validated firm or company name. | [optional] 
**houseNumber** | **NSString*** | House number. | [optional] 
**leadingDirectional** | **NSString*** | Leading directional. | [optional] 
**streetName** | **NSString*** | Street name. | [optional] 
**streetSuffix** | **NSString*** | Street suffix. | [optional] 
**trailingDirectional** | **NSString*** | Trailing directional. | [optional] 
**apartmentLabel** | **NSString*** | Apartment designator (such as STE or APT). | [optional] 
**apartmentNumber** | **NSString*** | Apartment number. | [optional] 
**apartmentLabel2** | **NSString*** | Secondary apartment designator. | [optional] 
**apartmentNumber2** | **NSString*** | Secondary apartment number. | [optional] 
**rRHC** | **NSString*** | Rural Route/Highway Contract indicator. | [optional] 
**pOBox** | **NSString*** | Post office box number. | [optional] 
**privateMailbox** | **NSString*** | Private mailbox indicator. | [optional] 
**privateMailboxType** | **NSString*** | The type of private mailbox. | [optional] 
**houseNumberInput** | **NSString*** | House number. | [optional] 
**leadingDirectionalInput** | **NSString*** | Leading directional. | [optional] 
**streetNameInput** | **NSString*** | Street name. | [optional] 
**streetSuffixInput** | **NSString*** | Street suffix. | [optional] 
**trailingDirectionalInput** | **NSString*** | Trailing directional. | [optional] 
**apartmentLabelInput** | **NSString*** | Apartment designator (such as STE or APT). | [optional] 
**apartmentNumberInput** | **NSString*** | Apartment number. | [optional] 
**rRHCInput** | **NSString*** | Rural Route/Highway Contract indicator. | [optional] 
**pOBoxInput** | **NSString*** | Post office box number. | [optional] 
**privateMailboxInput** | **NSString*** | Private mailbox indicator. | [optional] 
**privateMailboxTypeInput** | **NSString*** | The type of private mailbox. | [optional] 
**cityInput** | **NSString*** | Validated city name. | [optional] 
**stateProvinceInput** | **NSString*** | Validated state or province name. | [optional] 
**postalCodeInput** | **NSString*** | Validated postal code. | [optional] 
**countryInput** | **NSString*** | Country. Format is determined by what you selected in OutputCountryFormat. | [optional] 
**firmNameInput** | **NSString*** | The validated firm or company name. | [optional] 
**houseNumberResult** | **NSString*** | The field-level result indicator for HouseNumber. | [optional] 
**leadingDirectionalResult** | **NSString*** | The field-level result indicator for LeadingDirectional. | [optional] 
**streetResult** | **NSString*** | The field-level result indicator for Street. | [optional] 
**streetNameResult** | **NSString*** | The field-level result indicator for StreetName. | [optional] 
**streetNameAliasType** | **NSString*** | The field-level result indicator for StreetName Alias. | [optional] 
**streetSuffixResult** | **NSString*** | The field-level result indicator for StreetSuffix. | [optional] 
**trailingDirectionalResult** | **NSString*** | The field-level result indicator for TrailingDirectional. | [optional] 
**apartmentLabelResult** | **NSString*** | The field-level result indicator for ApartmentLabel. | [optional] 
**apartmentNumberResult** | **NSString*** | The field-level result indicator for ApartmentNumber. | [optional] 
**apartmentLabel2Result** | **NSString*** | The field-level result indicator for ApartmentLabel2. | [optional] 
**apartmentNumber2Result** | **NSString*** | The field-level result indicator for ApartmentNumber2. | [optional] 
**rRHCResult** | **NSString*** | The field-level result indicator for RRHC. | [optional] 
**rRHCType** | **NSString*** | The field-level result indicator for RRHC Type. | [optional] 
**pOBoxResult** | **NSString*** | The field-level result indicator for POBox. | [optional] 
**cityResult** | **NSString*** | The field-level result indicator for City. | [optional] 
**stateProvinceResult** | **NSString*** | The field-level result indicator for StateProvince. | [optional] 
**postalCodeResult** | **NSString*** | The field-level result indicator for PostalCode. | [optional] 
**postalCodeCityResult** | **NSString*** | The field-level result indicator for PostalCodeCity. | [optional] 
**addressRecordResult** | **NSString*** | The field-level result indicator for AddressRecord. | [optional] 
**postalCodeSource** | **NSString*** | The field-level result indicator for PostalCode Source. | [optional] 
**postalCodeType** | **NSString*** | Indicates the type of postal code returned. | [optional] 
**countryResult** | **NSString*** | The validated firm or company name. | [optional] 
**firmNameResult** | **NSString*** | Indicates if the firm name got validated. | [optional] 
**streetNamePreferredAliasResult** | **NSString*** | Indicates the result of preferred alias processing. | [optional] 
**streetNameAbbreviatedAliasResult** | **NSString*** | Indicates the result of abbreviated alias processing. | [optional] 
**addressLine5** | **NSString*** | The fifth line of the validated address. | [optional] 
**addressQuality** | **NSString*** | A two character code indicating overall quality of the resulting address. | [optional] 
**deliverability** | **NSString*** | An estimate of confidence that an item mailed or shipped to this address would be successfully delivered. | [optional] 
**addressType** | **NSString*** | A single letter code that indicates the type of address. | [optional] 
**locality** | **NSString*** | A locality is a village in rural areas or it may be a suburb in urban areas. | [optional] 
**changeScore** | **NSString*** | A value of 0 and 100 that reflects how much the address has changed to make it valid. | [optional] 
**suburb** | **NSString*** | The validated firm or company name. | [optional] 
**blockAddress** | **NSString*** | It is the formatted address, as it would appear on a physical mail piece. | [optional] 
**latitude** | **NSString*** | Seven-digit number in degrees, calculated to four decimal places. | [optional] 
**longitude** | **NSString*** | Seven-digit number in degrees, calculated to four decimal places. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

