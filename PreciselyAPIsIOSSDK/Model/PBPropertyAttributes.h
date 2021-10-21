#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 11.6.0
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

#import "PBBuildgCondition.h"
#import "PBBuildgFeaturesSqft.h"
#import "PBBuildingSqftSource.h"
#import "PBCaExemptions.h"
#import "PBConstruction.h"
#import "PBCoolingType.h"
#import "PBFoundation.h"
#import "PBGeometry.h"
#import "PBHeatingType.h"
#import "PBLandUse.h"
#import "PBRoofFrameType.h"
#import "PBRoofType.h"
#import "PBStories.h"
#import "PBTaxExemption.h"


@protocol PBPropertyAttributes
@end

@interface PBPropertyAttributes : PBObject


@property(nonatomic) NSString* pbKey;

@property(nonatomic) NSString* propApn;

@property(nonatomic) NSString* propType;

@property(nonatomic) NSString* propSqFt;

@property(nonatomic) NSString* buildgSqFt;

@property(nonatomic) PBBuildingSqftSource* buildgSqSource;

@property(nonatomic) PBLandUse* landUse;

@property(nonatomic) PBConstruction* construction;

@property(nonatomic) PBRoofType* roofType;

@property(nonatomic) NSString* subdivision;

@property(nonatomic) PBGeometry* geometry;

@property(nonatomic) NSString* builtYear;

@property(nonatomic) NSString* bedrooms;

@property(nonatomic) NSString* baths;

@property(nonatomic) NSString* pool;

@property(nonatomic) NSString* firePlace;

@property(nonatomic) NSString* mobileHome;

@property(nonatomic) PBHeatingType* heatingType;

@property(nonatomic) PBCoolingType* coolingType;

@property(nonatomic) NSString* assessedValue;

@property(nonatomic) NSString* marketValue;

@property(nonatomic) NSString* appraisedValue;

@property(nonatomic) NSString* taxAmount;

@property(nonatomic) NSArray<PBTaxExemption>* taxExemptions;

@property(nonatomic) PBCaExemptions* caExemptions;

@property(nonatomic) PBStories* stories;

@property(nonatomic) NSString* salesDate;

@property(nonatomic) NSString* priorSaleDate;

@property(nonatomic) NSString* priorSalesPrice;

@property(nonatomic) NSString* livingSqft;

@property(nonatomic) PBRoofFrameType* roofFrameType;

@property(nonatomic) PBFoundation* foundation;

@property(nonatomic) PBBuildgCondition* buildgCondition;

@property(nonatomic) NSString* buildgCount;

@property(nonatomic) NSString* buildgUnitNo;

@property(nonatomic) NSArray<PBBuildgFeaturesSqft>* buildgFeaturesSqft;

@end
