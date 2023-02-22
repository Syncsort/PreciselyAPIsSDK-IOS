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


#import "PBAddress.h"
#import "PBDistance.h"
#import "PBGeometry.h"
#import "PBGradeLevelsTaught.h"
#import "PBGreatschools.h"
#import "PBSchoolDistrict.h"
#import "PBSchoolProfile.h"
#import "PBSchoolRanking.h"
@protocol PBAddress;
@class PBAddress;
@protocol PBDistance;
@class PBDistance;
@protocol PBGeometry;
@class PBGeometry;
@protocol PBGradeLevelsTaught;
@class PBGradeLevelsTaught;
@protocol PBGreatschools;
@class PBGreatschools;
@protocol PBSchoolDistrict;
@class PBSchoolDistrict;
@protocol PBSchoolProfile;
@class PBSchoolProfile;
@protocol PBSchoolRanking;
@class PBSchoolRanking;



@protocol PBSchool
@end

@interface PBSchool : PBObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* assigned;

@property(nonatomic) NSString* phone;

@property(nonatomic) NSString* website;

@property(nonatomic) NSString* addressType;

@property(nonatomic) PBAddress* address;

@property(nonatomic) NSString* lowestGrade;

@property(nonatomic) NSString* highestGrade;

@property(nonatomic) NSString* schoolType;

@property(nonatomic) NSString* schoolTypeDesc;

@property(nonatomic) NSString* schoolSubType;

@property(nonatomic) NSString* schoolSubTypeDesc;

@property(nonatomic) NSString* gender;

@property(nonatomic) NSString* genderDesc;

@property(nonatomic) NSString* educationLevel;

@property(nonatomic) NSString* educationLevelDesc;

@property(nonatomic) PBGreatschools* greatschools;

@property(nonatomic) NSString* ncesSchoolId;

@property(nonatomic) NSString* ncesDistrictId;

@property(nonatomic) NSString* ncesDataYear;

@property(nonatomic) NSArray<PBSchoolRanking>* schoolRanking;

@property(nonatomic) NSString* students;

@property(nonatomic) NSString* teachers;

@property(nonatomic) NSString* status;

@property(nonatomic) NSString* studentTeacherRatio;

@property(nonatomic) NSString* choice;

@property(nonatomic) NSString* coextensiv;

@property(nonatomic) PBSchoolDistrict* schoolDistricts;

@property(nonatomic) PBSchoolProfile* schoolProfile;

@property(nonatomic) PBGradeLevelsTaught* gradeLevelsTaught;

@property(nonatomic) PBDistance* distance;

@property(nonatomic) PBGeometry* geometry;

@end
