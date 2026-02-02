//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCWeAppInfo : NSObject
{
    unsigned int _version;
    unsigned int _debugMode;
    unsigned int _isGame;
    unsigned int _subType;
    NSString *_appUserName;
    NSString *_pagePath;
    NSString *_shareActionId;
    NSString *_messageExtraData;
    NSString *_preloadResources;
}

+ (void)initialize;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_messageExtraData;
+ (void)PBArrayAdd_shareActionId;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_appUserName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *preloadResources; // @synthesize preloadResources=_preloadResources;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned int isGame; // @synthesize isGame=_isGame;
@property(retain, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(retain, nonatomic) NSString *shareActionId; // @synthesize shareActionId=_shareActionId;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

