#import <Foundation/Foundation.h>
#import "PBGeoLocationIpAddr.h"
#import "PBGeoLocationAccessPoint.h"
#import "PBApi.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 11.7.0
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


@interface PBGeolocationServiceApi: NSObject <PBApi>

extern NSString* kPBGeolocationServiceApiErrorDomain;
extern NSInteger kPBGeolocationServiceApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Location By IP Address.
/// This service accepts an IP address and returns the location coordinates corresponding to that IP address.
///
/// @param ipAddress This is the ip address of network connected device. It must be a standard IPv4 octet and a valid external address.
/// 
///  code:200 message:"successful operation"
///
/// @return PBGeoLocationIpAddr*
-(NSNumber*) getLocationByIPAddressWithIpAddress: (NSString*) ipAddress
    completionHandler: (void (^)(PBGeoLocationIpAddr* output, NSError* error)) handler;


/// Location by WiFi Access Point.
/// This service accepts a WiFi access point MAC address and returns the location coordinates corresponding to that access point. Only mac or accessPoint are mandatory parameters (one of them has to be provided), rest are optional.
///
/// @param mac This should be the 48 bit mac address (or BSSID) of wireless access point. Accepted format is Six groups of two hexadecimal digits, separated by hyphens (-) or colons. (optional)
/// @param ssid The service set identifier for wi-fi access point. It should be alphanumeric with maximum 32 characters. (optional)
/// @param rsid This is the received signal strength indicator from particular wi-fi access point. It should be a number from -113 to 0 and the unit of this strength is dBm. (optional)
/// @param speed This is the connection speed for wi-fi. It should be a number from 0 to 6930 and the unit should be Mbps. (optional)
/// @param accessPoint This is the JSON based list of wifi access points in the vicinity of device to be located. This parameter is helpful in case, multiple wifi points are visible and we want to make sure that the location of device is best calculated considering all the access points location. (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBGeoLocationAccessPoint*
-(NSNumber*) getLocationByWiFiAccessPointWithMac: (NSString*) mac
    ssid: (NSString*) ssid
    rsid: (NSString*) rsid
    speed: (NSString*) speed
    accessPoint: (NSString*) accessPoint
    completionHandler: (void (^)(PBGeoLocationAccessPoint* output, NSError* error)) handler;



@end
