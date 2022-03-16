#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 11.9.3
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

#import "PBFieldsMatching.h"
#import "PBGeocodeCustomPreferences.h"
#import "PBReturnFieldsDescriptor.h"


@protocol PBGeocodePreferences
@end

@interface PBGeocodePreferences : PBObject


@property(nonatomic) NSNumber* returnAllCandidateInfo;

@property(nonatomic) NSNumber* fallbackToGeographic;

@property(nonatomic) NSNumber* fallbackToPostal;

@property(nonatomic) NSString* maxReturnedCandidates;

@property(nonatomic) NSString* streetOffset;

@property(nonatomic) NSString* cornerOffset;

@property(nonatomic) NSString* matchMode;

@property(nonatomic) NSString* clientLocale;

@property(nonatomic) NSString* clientCoordSysName;

@property(nonatomic) NSString* streetOffsetUnits;

@property(nonatomic) NSString* cornerOffsetUnits;

@property(nonatomic) PBFieldsMatching* mustMatchFields;

@property(nonatomic) PBReturnFieldsDescriptor* returnFieldsDescriptor;

@property(nonatomic) NSString* outputRecordType;

@property(nonatomic) PBGeocodeCustomPreferences* customPreferences;

@property(nonatomic) NSArray<NSString*>* preferredDictionaryOrders;

@end
