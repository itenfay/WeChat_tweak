//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderLiveIdentityModel : NSObject
{
    NSArray *_aliasInfoArray;
    unsigned long long _currentAliasRoleType;
    unsigned long long _aliasRoleModAvailableTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_aliasRoleModAvailableTime;
+ (void)PBArrayAdd_aliasInfoArray;
+ (void)PBArrayAdd_currentAliasRoleType;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long aliasRoleModAvailableTime; // @synthesize aliasRoleModAvailableTime=_aliasRoleModAvailableTime;
@property(nonatomic) unsigned long long currentAliasRoleType; // @synthesize currentAliasRoleType=_currentAliasRoleType;
@property(copy, nonatomic) NSArray *aliasInfoArray; // @synthesize aliasInfoArray=_aliasInfoArray;
- (_Bool)isValid;
- (id)currentAliasInfo;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

