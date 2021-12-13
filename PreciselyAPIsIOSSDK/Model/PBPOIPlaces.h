#import <Foundation/Foundation.h>
#import "PBObject.h"

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

#import "PBBusinessId.h"
#import "PBDistance.h"
#import "PBDomesticUltimateBusiness.h"
#import "PBEmployeeCount.h"
#import "PBGeometry.h"
#import "PBGlobalUltimateBusiness.h"
#import "PBParentBusiness.h"
#import "PBPoiClassification.h"
#import "PBPoiContactDetails.h"
#import "PBSalesVolume.h"


@protocol PBPOIPlaces
@end

@interface PBPOIPlaces : PBObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* poiId;

@property(nonatomic) NSString* pbkey;

@property(nonatomic) NSString* parentPbkey;

@property(nonatomic) NSString* geocodeConfidence;

@property(nonatomic) NSString* ceoName;

@property(nonatomic) NSString* ceoTitle;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* brandName;

@property(nonatomic) NSString* tradeName;

@property(nonatomic) NSString* franchiseName;

@property(nonatomic) NSString* open24Hours;

@property(nonatomic) PBDistance* distance;

@property(nonatomic) PBBusinessId* businessId;

@property(nonatomic) NSString* relevanceScore;

@property(nonatomic) PBPoiContactDetails* contactDetails;

@property(nonatomic) PBPoiClassification* poiClassification;

@property(nonatomic) NSArray<PBSalesVolume>* salesVolume;

@property(nonatomic) PBEmployeeCount* employeeCount;

@property(nonatomic) NSString* yearStart;

@property(nonatomic) NSString* goodsAgentCode;

@property(nonatomic) NSString* goodsAgentCodeDescription;

@property(nonatomic) NSString* legalStatusCode;

@property(nonatomic) NSString* organizationStatusCode;

@property(nonatomic) NSString* organizationStatusCodeDescription;

@property(nonatomic) NSString* subsidaryIndicator;

@property(nonatomic) NSString* subsidaryIndicatorDescription;

@property(nonatomic) PBParentBusiness* parentBusiness;

@property(nonatomic) PBDomesticUltimateBusiness* domesticUltimateBusiness;

@property(nonatomic) NSString* globalUltimateIndicator;

@property(nonatomic) PBGlobalUltimateBusiness* globalUltimateBusiness;

@property(nonatomic) NSString* familyMembers;

@property(nonatomic) NSString* hierarchyCode;

@property(nonatomic) NSString* tickerSymbol;

@property(nonatomic) NSString* exchangeName;

@property(nonatomic) PBGeometry* geometry;

@end
