//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyBadgeCollection, MMLiveBeautySuite, NSArray, NSString;

@interface MMLiveBeautyPackage : NSObject
{
    NSArray *_suites;
    MMLiveBeautySuite *_defaultSuite;
    NSString *_resourcesRootPath;
    NSString *_opaqueResourcesPath;
    MMLiveBeautyBadgeCollection *_badges;
    MMLiveBeautySuite *_activeSuite;
}

+ (id)defaultSuiteInSuites:(id)arg1 byJsonDictionary:(id)arg2;
+ (id)defaultNoopPackage;
+ (id)beautyPackageInLocalDirectory:(id)arg1 withConfigurationPath:(id)arg2;
+ (id)beautyPackageInResourcePackage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautySuite *activeSuite; // @synthesize activeSuite=_activeSuite;
@property(retain, nonatomic) MMLiveBeautyBadgeCollection *badges; // @synthesize badges=_badges;
@property(retain, nonatomic) NSString *opaqueResourcesPath; // @synthesize opaqueResourcesPath=_opaqueResourcesPath;
@property(retain, nonatomic) NSString *resourcesRootPath; // @synthesize resourcesRootPath=_resourcesRootPath;
@property(retain, nonatomic) MMLiveBeautySuite *defaultSuite; // @synthesize defaultSuite=_defaultSuite;
@property(retain, nonatomic) NSArray *suites; // @synthesize suites=_suites;

@end

