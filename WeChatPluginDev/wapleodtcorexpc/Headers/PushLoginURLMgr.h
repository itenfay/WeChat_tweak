//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetA8KeyLogic, NSString;

@interface PushLoginURLMgr
{
    GetA8KeyLogic *_getA8KeyLogic;
}

+ (void)clearOneClickLoginInfo;
+ (_Bool)shouldShowOneClickLogin;
- (void).cxx_destruct;
- (void)onManulLogOut;
- (void)onGetA8KeyOneClickLoginWithURL:(id)arg1 extraInfo:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)loginByBlueToothWithURL:(id)arg1;
- (void)loginFormOtherApp:(id)arg1 bundleID:(id)arg2;
- (id)getGetA8KeyLogic;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

