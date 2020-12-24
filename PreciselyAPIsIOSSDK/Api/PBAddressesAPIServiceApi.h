#import <Foundation/Foundation.h>
#import "PBAddressesResponse.h"
#import "PBAddressesByBoundaryRequest.h"
#import "PBAddressesCount.h"
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


@interface PBAddressesAPIServiceApi: NSObject <PBApi>

extern NSString* kPBAddressesAPIServiceApiErrorDomain;
extern NSInteger kPBAddressesAPIServiceApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Addresses By Boundary Area.
/// This service accepts zip code, neighborhood, county, or city names, and returns all known & valid addresses associated with these names.
///
/// @param country Name of country. Acceptable values are CAN, USA.
/// @param areaName1 Specifies the largest geographical area, typically a state or province. (optional)
/// @param areaName2 Specifies the secondary geographic area, typically a county or district. (optional)
/// @param areaName3 Specifies a city or town name. (optional)
/// @param areaName4 Specifies a city subdivision or locality/neighborhood. (optional)
/// @param postCode Specifies the postcode (ZIP code) in the appropriate format for the country. (optional)
/// @param maxCandidates Maximum number of addresses to be returned in response. Max. value is 100 for XML/JSON, and 2000 for CSV. (optional)
/// @param page Response will indicate the page number. (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBAddressesResponse*
-(NSNumber*) getAddressesByBoundaryNameWithCountry: (NSString*) country
    areaName1: (NSString*) areaName1
    areaName2: (NSString*) areaName2
    areaName3: (NSString*) areaName3
    areaName4: (NSString*) areaName4
    postCode: (NSString*) postCode
    maxCandidates: (NSString*) maxCandidates
    page: (NSString*) page
    completionHandler: (void (^)(PBAddressesResponse* output, NSError* error)) handler;


/// Address Counts by Boundary.
/// This service accepts custom geographic boundaries or drivetimes & drive distances, returns the total number of addresses within these boundaries.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBAddressesCount*
-(NSNumber*) getAddressesCountByBoundaryWithBody: (PBAddressesByBoundaryRequest*) body
    completionHandler: (void (^)(PBAddressesCount* output, NSError* error)) handler;


/// Address Counts by Boundary Name.
/// This service accepts zip code, neighborhood, county, or city names, and returns the total number of addresses associated with these names. 
///
/// @param country Name of country. Acceptable values are CAN, USA.
/// @param areaName1 Specifies the largest geographical area, typically a state or province. (optional)
/// @param areaName2 Specifies the secondary geographic area, typically a county or district. (optional)
/// @param areaName3 Specifies a city or town name. (optional)
/// @param areaName4 Specifies a city subdivision or locality/neighborhood. (optional)
/// @param postCode Specifies the postcode (ZIP code) in the appropriate format for the country. (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBAddressesCount*
-(NSNumber*) getAddressesCountByBoundaryNameWithCountry: (NSString*) country
    areaName1: (NSString*) areaName1
    areaName2: (NSString*) areaName2
    areaName3: (NSString*) areaName3
    areaName4: (NSString*) areaName4
    postCode: (NSString*) postCode
    completionHandler: (void (^)(PBAddressesCount* output, NSError* error)) handler;


/// Addresses by Boundary.
/// This service accepts custom geographic boundaries or drivetimes & drive distances, returns all known & valid addresses within these boundaries.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBAddressesResponse*
-(NSNumber*) getAddressesbyBoundaryWithBody: (PBAddressesByBoundaryRequest*) body
    completionHandler: (void (^)(PBAddressesResponse* output, NSError* error)) handler;



@end
