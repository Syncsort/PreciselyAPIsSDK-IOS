#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 9.0.0
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

#import "PBContactPerson.h"
#import "PBCounty.h"
#import "PBCoverage.h"
#import "PBMatchedAddress.h"
#import "PBSiteDetails.h"


@protocol PBPSAPResponse
@end

@interface PBPSAPResponse : PBObject


@property(nonatomic) NSString* fccId;

@property(nonatomic) NSString* type;

@property(nonatomic) NSNumber* count;

@property(nonatomic) NSString* agency;

@property(nonatomic) NSString* phone;

@property(nonatomic) PBCounty* county;

@property(nonatomic) PBCoverage* coverage;

@property(nonatomic) PBContactPerson* contactPerson;

@property(nonatomic) PBSiteDetails* siteDetails;

@property(nonatomic) PBMatchedAddress* mailingAddress;

@end
