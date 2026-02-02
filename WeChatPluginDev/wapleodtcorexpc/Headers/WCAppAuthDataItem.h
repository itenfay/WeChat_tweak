//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAppAuthAppMetaInfo, WCAppAuthAuthInfo;

@interface WCAppAuthDataItem
{
    WCAppAuthAppMetaInfo *_appInfo;
    WCAppAuthAuthInfo *_authInfo;
    NSString *_tips;
}

+ (void)initialize;
+ (void)PBArrayAdd_tips;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_appInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) WCAppAuthAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) WCAppAuthAppMetaInfo *appInfo; // @synthesize appInfo=_appInfo;
- (_Bool)hasUnEditableScope;
- (id)genAuthInfoScopeList;
- (id)genAuthInfoDescription;
- (void)updateScope:(id)arg1 state:(unsigned int)arg2;
- (id)getScopes;
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

