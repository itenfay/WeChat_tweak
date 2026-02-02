//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AuthAppItem : NSObject
{
    int _appSettingFlag;
    NSString *_appID;
    NSString *_appIconURL;
    NSString *_appTypeList;
    NSString *_appName;
    NSString *_devInfo;
    NSString *_authInfo;
    NSString *_extInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_devInfo;
+ (void)PBArrayAdd_appSettingFlag;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appTypeList;
+ (void)PBArrayAdd_appIconURL;
+ (void)PBArrayAdd_appID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) NSString *devInfo; // @synthesize devInfo=_devInfo;
@property(nonatomic) int appSettingFlag; // @synthesize appSettingFlag=_appSettingFlag;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appTypeList; // @synthesize appTypeList=_appTypeList;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

