//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PersonalDesigner, StoreEmotionPageShareLogic;

@interface LiteAppJsApiEmoticonDesignerProfileShare
{
    StoreEmotionPageShareLogic *_shareLogic;
    PersonalDesigner *_personalDesigner;
    NSString *_oldRedirectUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @synthesize oldRedirectUrl=_oldRedirectUrl;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @synthesize personalDesigner=_personalDesigner;
@property(retain, nonatomic) StoreEmotionPageShareLogic *shareLogic; // @synthesize shareLogic=_shareLogic;
- (void)onShareEnded;
- (id)getViewController;
- (void)endWithOK;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

