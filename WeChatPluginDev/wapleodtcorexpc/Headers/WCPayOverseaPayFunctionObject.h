//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCPayOverseaPayFunctionObject : NSObject
{
    unsigned int _m_functionId;
    unsigned int _m_propertyType;
    unsigned int _m_weapp_version;
    NSString *_m_functionName;
    NSString *_m_functionIconUrl;
    NSString *_m_functionHDIconUrl;
    NSString *_m_functionForegroundIconUrl;
    NSString *_m_h5Url;
    NSString *_m_nativeUrl;
    NSMutableArray *_m_activityInfoList;
    NSString *_m_disclaimer;
    NSString *_m_weapp_username;
    NSString *_m_weapp_pagepath;
    NSString *_m_subtitle;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_subtitle;
+ (void)PBArrayAdd_m_weapp_version;
+ (void)PBArrayAdd_m_weapp_pagepath;
+ (void)PBArrayAdd_m_weapp_username;
+ (void)PBArrayAdd_m_disclaimer;
+ (void)PBArrayAdd_m_activityInfoList;
+ (void)PBArrayAdd_m_propertyType;
+ (void)PBArrayAdd_m_nativeUrl;
+ (void)PBArrayAdd_m_h5Url;
+ (void)PBArrayAdd_m_functionForegroundIconUrl;
+ (void)PBArrayAdd_m_functionHDIconUrl;
+ (void)PBArrayAdd_m_functionIconUrl;
+ (void)PBArrayAdd_m_functionName;
+ (void)PBArrayAdd_m_functionId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_subtitle; // @synthesize m_subtitle=_m_subtitle;
@property(nonatomic) unsigned int m_weapp_version; // @synthesize m_weapp_version=_m_weapp_version;
@property(retain, nonatomic) NSString *m_weapp_pagepath; // @synthesize m_weapp_pagepath=_m_weapp_pagepath;
@property(retain, nonatomic) NSString *m_weapp_username; // @synthesize m_weapp_username=_m_weapp_username;
@property(retain, nonatomic) NSString *m_disclaimer; // @synthesize m_disclaimer=_m_disclaimer;
@property(retain, nonatomic) NSMutableArray *m_activityInfoList; // @synthesize m_activityInfoList=_m_activityInfoList;
@property(nonatomic) unsigned int m_propertyType; // @synthesize m_propertyType=_m_propertyType;
@property(retain, nonatomic) NSString *m_nativeUrl; // @synthesize m_nativeUrl=_m_nativeUrl;
@property(retain, nonatomic) NSString *m_h5Url; // @synthesize m_h5Url=_m_h5Url;
@property(retain, nonatomic) NSString *m_functionForegroundIconUrl; // @synthesize m_functionForegroundIconUrl=_m_functionForegroundIconUrl;
@property(retain, nonatomic) NSString *m_functionHDIconUrl; // @synthesize m_functionHDIconUrl=_m_functionHDIconUrl;
@property(retain, nonatomic) NSString *m_functionIconUrl; // @synthesize m_functionIconUrl=_m_functionIconUrl;
@property(retain, nonatomic) NSString *m_functionName; // @synthesize m_functionName=_m_functionName;
@property(nonatomic) unsigned int m_functionId; // @synthesize m_functionId=_m_functionId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

