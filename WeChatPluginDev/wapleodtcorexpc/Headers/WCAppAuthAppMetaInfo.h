//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAppAuthAppMetaInfo
{
    unsigned int _appType;
    NSString *_appId;
    NSString *_appName;
    NSString *_appTypeDesc;
    NSString *_appIconUrl;
    NSString *_wordingInScope;
}

+ (void)initialize;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_appTypeDesc;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *wordingInScope; // @synthesize wordingInScope=_wordingInScope;
@property(copy, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(copy, nonatomic) NSString *appTypeDesc; // @synthesize appTypeDesc=_appTypeDesc;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)init;
- (id)initWithAuthAppPBData:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

