#import <Foundation/Foundation.h>
#import "PBTimezoneResponse.h"
#import "PBTimezoneAddressRequest.h"
#import "PBTimezoneLocationRequest.h"
#import "PBTimezoneLocationResponse.h"
#import "PBTimezone.h"
#import "PBTimezoneLocation.h"
#import "PBApi.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 9.5.0
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


@interface PBTimeZoneServiceApi: NSObject <PBApi>

extern NSString* kPBTimeZoneServiceApiErrorDomain;
extern NSInteger kPBTimeZoneServiceApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Timezone Batch by Address
/// Identifies and retrieves the local time of any location in the world for a given address and time. The input and retrieved time format is in milliseconds. 
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBTimezoneResponse*
-(NSNumber*) getBatchTimezoneByAddressWithBody: (PBTimezoneAddressRequest*) body
    completionHandler: (void (^)(PBTimezoneResponse* output, NSError* error)) handler;


/// Timezone Batch by Location
/// Identifies and retrieves the local time of any location in the world for a given latitude, longitude and time. The input and retrieved time format is in milliseconds. 
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBTimezoneLocationResponse*
-(NSNumber*) getBatchTimezoneByLocationWithBody: (PBTimezoneLocationRequest*) body
    completionHandler: (void (^)(PBTimezoneLocationResponse* output, NSError* error)) handler;


/// Timezone By Address.
/// Identifies and retrieves the local time of any location in the world for a given address and time. The input and retrieved time format is in milliseconds.
///
/// @param timestamp Timestamp in miliseconds.
/// @param address The address to be searched.
/// @param matchMode Match modes determine the leniency used to make a match between the input address and the reference data. (optional) (default to Relaxed)
/// @param country Country ISO code. (optional) (default to USA)
/// 
///  code:200 message:"successful operation"
///
/// @return PBTimezone*
-(NSNumber*) getTimezoneByAddressWithTimestamp: (NSString*) timestamp
    address: (NSString*) address
    matchMode: (NSString*) matchMode
    country: (NSString*) country
    completionHandler: (void (^)(PBTimezone* output, NSError* error)) handler;


/// Timezone By Location.
/// Identifies and retrieves the local time of any location in the world for a given latitude, longitude and time. The input and retrieved time format is in milliseconds.
///
/// @param timestamp Timestamp in miliseconds.
/// @param longitude Longitude of the location.
/// @param latitude Latitude of the location.
/// 
///  code:200 message:"successful operation"
///
/// @return PBTimezoneLocation*
-(NSNumber*) getTimezoneByLocationWithTimestamp: (NSString*) timestamp
    longitude: (NSString*) longitude
    latitude: (NSString*) latitude
    completionHandler: (void (^)(PBTimezoneLocation* output, NSError* error)) handler;



@end
