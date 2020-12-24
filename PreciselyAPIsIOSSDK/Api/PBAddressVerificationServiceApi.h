#import <Foundation/Foundation.h>
#import "PBGetCityStateProvinceAPIRequest.h"
#import "PBGetCityStateProvinceAPIResponse.h"
#import "PBGetPostalCodesAPIRequest.h"
#import "PBGetPostalCodesAPIResponse.h"
#import "PBValidateMailingAddressResponse.h"
#import "PBValidateMailingAddressRequest.h"
#import "PBValidateMailingAddressPremiumResponse.h"
#import "PBValidateMailingAddressPremiumRequest.h"
#import "PBValidateMailingAddressProResponse.h"
#import "PBValidateMailingAddressProRequest.h"
#import "PBValidateMailingAddressUSCANAPIResponse.h"
#import "PBValidateMailingAddressUSCANAPIRequest.h"
#import "PBApi.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 10.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


@interface PBAddressVerificationServiceApi: NSObject <PBApi>

extern NSString* kPBAddressVerificationServiceApiErrorDomain;
extern NSInteger kPBAddressVerificationServiceApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// GetCityStateProvince
/// GetCityStateProvince returns a city and state/province for a given input postal code for U.S. and Canadian addresses.
///
/// @param inputAddress 
/// 
///  code:200 message:"OK"
///
/// @return PBGetCityStateProvinceAPIResponse*
-(NSNumber*) getCityStateProvinceWithInputAddress: (PBGetCityStateProvinceAPIRequest*) inputAddress
    completionHandler: (void (^)(PBGetCityStateProvinceAPIResponse* output, NSError* error)) handler;


/// GetPostalCodes
/// GetPostalCodes takes a city and state as input for U.S. addresses and returns the postal codes for that city.
///
/// @param inputAddress 
/// 
///  code:200 message:"OK"
///
/// @return PBGetPostalCodesAPIResponse*
-(NSNumber*) getPostalCodesWithInputAddress: (PBGetPostalCodesAPIRequest*) inputAddress
    completionHandler: (void (^)(PBGetPostalCodesAPIResponse* output, NSError* error)) handler;


/// ValidateMailingAddress
/// ValidateMailingAddress analyses and compares the input addresses against the known address databases around the world to output a standardized detail.
///
/// @param inputAddress 
/// 
///  code:200 message:"OK"
///
/// @return PBValidateMailingAddressResponse*
-(NSNumber*) validateMailingAddressWithInputAddress: (PBValidateMailingAddressRequest*) inputAddress
    completionHandler: (void (^)(PBValidateMailingAddressResponse* output, NSError* error)) handler;


/// ValidateMailingAddressPremium
/// ValidateMailing AddressPremium expands on the ValidateMailingAddressPro service by adding premium address data sources to get the best address validation result possible.
///
/// @param inputAddress 
/// 
///  code:200 message:"OK"
///
/// @return PBValidateMailingAddressPremiumResponse*
-(NSNumber*) validateMailingAddressPremiumWithInputAddress: (PBValidateMailingAddressPremiumRequest*) inputAddress
    completionHandler: (void (^)(PBValidateMailingAddressPremiumResponse* output, NSError* error)) handler;


/// ValidateMailingAddressPro
/// ValidateMailingAddressPro builds upon the ValidateMailingAddress service by using additional address databases so it can provide enhanced detail.
///
/// @param inputAddress 
/// 
///  code:200 message:"OK"
///
/// @return PBValidateMailingAddressProResponse*
-(NSNumber*) validateMailingAddressProWithInputAddress: (PBValidateMailingAddressProRequest*) inputAddress
    completionHandler: (void (^)(PBValidateMailingAddressProResponse* output, NSError* error)) handler;


/// ValidateMailingAddressUSCAN
/// ValidateMailingAddressUSCAN analyses and compares the input addresses against the known address databases around the world to output a standardized detail for US and CANADAIt gives RDI and DPV also along with other US/CAN specific functionalities.
///
/// @param inputAddress 
/// 
///  code:200 message:"OK"
///
/// @return PBValidateMailingAddressUSCANAPIResponse*
-(NSNumber*) validateMailingAddressUSCANWithInputAddress: (PBValidateMailingAddressUSCANAPIRequest*) inputAddress
    completionHandler: (void (^)(PBValidateMailingAddressUSCANAPIResponse* output, NSError* error)) handler;



@end
