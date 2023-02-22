#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* The version of the OpenAPI document: 14.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "PBAbsenteeOwner.h"
#import "PBAmenities.h"
#import "PBBasementType.h"
#import "PBBuildgClass.h"
#import "PBBuildgCondition.h"
#import "PBBuildgFeaturesSqft.h"
#import "PBBuildgImproveArea.h"
#import "PBBuildgImproveType.h"
#import "PBBuildgQuality.h"
#import "PBBuildgStyle.h"
#import "PBBuildgType.h"
#import "PBBuildgView.h"
#import "PBBuildingSqftSource.h"
#import "PBCaExemptions.h"
#import "PBConstruction.h"
#import "PBCoolingType.h"
#import "PBEnergyType.h"
#import "PBExteriorWalls.h"
#import "PBExtraFeatureSqft.h"
#import "PBFireplaceType.h"
#import "PBFloorType.h"
#import "PBFormattedTaxAddress.h"
#import "PBFoundation.h"
#import "PBFuelType.h"
#import "PBGarageType.h"
#import "PBHeatingType.h"
#import "PBInteriorWall.h"
#import "PBLandUse.h"
#import "PBLocCode.h"
#import "PBOtherRooms.h"
#import "PBOwnerVestType.h"
#import "PBOwners.h"
#import "PBPoolType.h"
#import "PBPriorSaleCode.h"
#import "PBPropSiteInfluene.h"
#import "PBPropertyGeometry.h"
#import "PBRoofCoverType.h"
#import "PBRoofFrameType.h"
#import "PBRoofShapeType.h"
#import "PBSitusAddress.h"
#import "PBStories.h"
#import "PBTaxDocType.h"
#import "PBTaxExemption.h"
#import "PBTaxSalesPriceCode.h"
#import "PBVacancy.h"
@protocol PBAbsenteeOwner;
@class PBAbsenteeOwner;
@protocol PBAmenities;
@class PBAmenities;
@protocol PBBasementType;
@class PBBasementType;
@protocol PBBuildgClass;
@class PBBuildgClass;
@protocol PBBuildgCondition;
@class PBBuildgCondition;
@protocol PBBuildgFeaturesSqft;
@class PBBuildgFeaturesSqft;
@protocol PBBuildgImproveArea;
@class PBBuildgImproveArea;
@protocol PBBuildgImproveType;
@class PBBuildgImproveType;
@protocol PBBuildgQuality;
@class PBBuildgQuality;
@protocol PBBuildgStyle;
@class PBBuildgStyle;
@protocol PBBuildgType;
@class PBBuildgType;
@protocol PBBuildgView;
@class PBBuildgView;
@protocol PBBuildingSqftSource;
@class PBBuildingSqftSource;
@protocol PBCaExemptions;
@class PBCaExemptions;
@protocol PBConstruction;
@class PBConstruction;
@protocol PBCoolingType;
@class PBCoolingType;
@protocol PBEnergyType;
@class PBEnergyType;
@protocol PBExteriorWalls;
@class PBExteriorWalls;
@protocol PBExtraFeatureSqft;
@class PBExtraFeatureSqft;
@protocol PBFireplaceType;
@class PBFireplaceType;
@protocol PBFloorType;
@class PBFloorType;
@protocol PBFormattedTaxAddress;
@class PBFormattedTaxAddress;
@protocol PBFoundation;
@class PBFoundation;
@protocol PBFuelType;
@class PBFuelType;
@protocol PBGarageType;
@class PBGarageType;
@protocol PBHeatingType;
@class PBHeatingType;
@protocol PBInteriorWall;
@class PBInteriorWall;
@protocol PBLandUse;
@class PBLandUse;
@protocol PBLocCode;
@class PBLocCode;
@protocol PBOtherRooms;
@class PBOtherRooms;
@protocol PBOwnerVestType;
@class PBOwnerVestType;
@protocol PBOwners;
@class PBOwners;
@protocol PBPoolType;
@class PBPoolType;
@protocol PBPriorSaleCode;
@class PBPriorSaleCode;
@protocol PBPropSiteInfluene;
@class PBPropSiteInfluene;
@protocol PBPropertyGeometry;
@class PBPropertyGeometry;
@protocol PBRoofCoverType;
@class PBRoofCoverType;
@protocol PBRoofFrameType;
@class PBRoofFrameType;
@protocol PBRoofShapeType;
@class PBRoofShapeType;
@protocol PBSitusAddress;
@class PBSitusAddress;
@protocol PBStories;
@class PBStories;
@protocol PBTaxDocType;
@class PBTaxDocType;
@protocol PBTaxExemption;
@class PBTaxExemption;
@protocol PBTaxSalesPriceCode;
@class PBTaxSalesPriceCode;
@protocol PBVacancy;
@class PBVacancy;



@protocol PBPropertyAttributes
@end

@interface PBPropertyAttributes : PBObject


@property(nonatomic) NSString* pbKey;

@property(nonatomic) NSString* propApn;

@property(nonatomic) NSString* propType;

@property(nonatomic) NSString* propSqFt;

@property(nonatomic) NSString* buildgSqFt;

@property(nonatomic) PBBuildingSqftSource* buildgSqFtSource;

@property(nonatomic) PBLandUse* landUse;

@property(nonatomic) PBConstruction* construction;

@property(nonatomic) PBRoofCoverType* roofCoverType;

@property(nonatomic) NSString* subdivision;

@property(nonatomic) PBPropertyGeometry* geometry;

@property(nonatomic) NSString* builtYear;

@property(nonatomic) NSString* bedrooms;

@property(nonatomic) NSString* baths;

@property(nonatomic) NSString* partialBaths;

@property(nonatomic) NSString* bathFixtures;

@property(nonatomic) NSString* pool;

@property(nonatomic) PBPoolType* poolType;

@property(nonatomic) NSString* fireplace;

@property(nonatomic) PBFireplaceType* fireplaceType;

@property(nonatomic) NSString* mobileHome;

@property(nonatomic) PBHeatingType* heatingType;

@property(nonatomic) PBCoolingType* coolingType;

@property(nonatomic) NSString* assessedValue;

@property(nonatomic) NSString* marketValue;

@property(nonatomic) NSString* appraisedValue;

@property(nonatomic) NSString* taxAmount;

@property(nonatomic) NSArray<PBTaxExemption>* taxExemptions;

@property(nonatomic) PBCaExemptions* caExemptions;

@property(nonatomic) NSString* salesDate;

@property(nonatomic) NSString* priorSaleDate;

@property(nonatomic) NSString* priorSalesPrice;

@property(nonatomic) NSString* priorSaleDocType;

@property(nonatomic) PBPriorSaleCode* priorSaleCode;

@property(nonatomic) NSString* priorSaleFolioNumber;

@property(nonatomic) NSString* priorSalePageNumber;

@property(nonatomic) NSString* priorSaleDocNumber;

@property(nonatomic) PBStories* stories;

@property(nonatomic) NSString* livingSqFt;

@property(nonatomic) PBRoofFrameType* roofFrameType;

@property(nonatomic) PBFoundation* foundation;

@property(nonatomic) PBBuildgCondition* buildgCondition;

@property(nonatomic) NSString* buildgCount;

@property(nonatomic) NSString* buildgUnitNo;

@property(nonatomic) NSArray<PBBuildgFeaturesSqft>* buildgFeaturesSqFt;

@property(nonatomic) NSString* taxAddress;

@property(nonatomic) PBFormattedTaxAddress* formattedTaxAddress;

@property(nonatomic) PBSitusAddress* situsAddress;

@property(nonatomic) PBVacancy* vacancy;

@property(nonatomic) NSArray<PBOwners>* owners;

@property(nonatomic) NSString* appraisedValueImp;

@property(nonatomic) NSString* assessedValueImp;

@property(nonatomic) PBBuildgType* buildgType;

@property(nonatomic) PBBasementType* basementType;

@property(nonatomic) NSString* effectiveBuiltYear;

@property(nonatomic) PBExteriorWalls* exteriorWalls;

@property(nonatomic) PBGarageType* garageType;

@property(nonatomic) NSString* lastUpdated;

@property(nonatomic) NSString* marketValueImp;

@property(nonatomic) PBAbsenteeOwner* absenteeOwner;

@property(nonatomic) NSString* parkingSqFt;

@property(nonatomic) NSString* replacementCost;

@property(nonatomic) PBRoofShapeType* roofShapeType;

@property(nonatomic) PBBuildgStyle* buildgStyle;

@property(nonatomic) NSString* basementSqFt;

@property(nonatomic) NSString* ownerType;

@property(nonatomic) PBOwnerVestType* ownerVestType;

@property(nonatomic) NSString* elevator;

@property(nonatomic) NSString* propApnSequence;

@property(nonatomic) NSString* fipsCode;

@property(nonatomic) NSString* propZoning;

@property(nonatomic) PBLocCode* locCode;

@property(nonatomic) NSString* legalMapRef;

@property(nonatomic) NSString* legalAssessorDesc;

@property(nonatomic) NSString* legalFullDesc;

@property(nonatomic) NSString* legalLotCode;

@property(nonatomic) NSString* legalLotNumber;

@property(nonatomic) NSString* legalLandLot;

@property(nonatomic) NSString* legalTractNumber;

@property(nonatomic) NSString* legalBlock;

@property(nonatomic) NSString* legalSection;

@property(nonatomic) NSString* legalDistrict;

@property(nonatomic) NSString* legalUnitNumber;

@property(nonatomic) NSString* legalPhaseNumber;

@property(nonatomic) NSString* legalSubName;

@property(nonatomic) NSString* legalTownMuniName;

@property(nonatomic) NSString* legalSectionTownshipRange;

@property(nonatomic) NSString* propAcres;

@property(nonatomic) NSString* propFrontFootage;

@property(nonatomic) NSString* propDepthFootage;

@property(nonatomic) PBBuildgView* buildgView;

@property(nonatomic) PBPropSiteInfluene* propSiteInfluene;

@property(nonatomic) NSString* buildgName;

@property(nonatomic) PBBuildgQuality* buildgQuality;

@property(nonatomic) PBBuildgImproveType* buildgImproveType;

@property(nonatomic) NSString* grossSqft;

@property(nonatomic) NSString* adjGrossSqft;

@property(nonatomic) PBBuildgClass* buildgClass;

@property(nonatomic) PBInteriorWall* interiorWall;

@property(nonatomic) PBFloorType* floorType;

@property(nonatomic) NSString* rooms;

@property(nonatomic) PBOtherRooms* otherRooms;

@property(nonatomic) NSString* plumbingFixtures;

@property(nonatomic) NSString* parkingCapacity;

@property(nonatomic) PBEnergyType* energyType;

@property(nonatomic) PBFuelType* fuelType;

@property(nonatomic) NSString* sewerType;

@property(nonatomic) NSString* waterType;

@property(nonatomic) PBAmenities* amenities;

@property(nonatomic) NSArray<PBExtraFeatureSqft>* extraFeatureSqft;

@property(nonatomic) NSArray<PBBuildgImproveArea>* buildgImproveArea;

@property(nonatomic) NSString* taxAccountNumber;

@property(nonatomic) NSString* taxTapeCutDate;

@property(nonatomic) PBTaxDocType* taxDocType;

@property(nonatomic) NSString* taxSalesPrice;

@property(nonatomic) PBTaxSalesPriceCode* taxSalesPriceCode;

@property(nonatomic) NSString* recBookNumber;

@property(nonatomic) NSString* recPageNumber;

@property(nonatomic) NSString* recDocNumber;

@property(nonatomic) NSString* taxYear;

@property(nonatomic) NSString* taxDelYear;

@property(nonatomic) NSString* assessedYear;

@property(nonatomic) NSString* assessedLandValue;

@property(nonatomic) NSString* marketValueYear;

@property(nonatomic) NSString* marketValueLand;

@property(nonatomic) NSString* appraisedValueLand;

@property(nonatomic) NSString* taxRateCode;

@property(nonatomic) NSString* propLinkId;

@property(nonatomic) NSString* geoId;

@end
