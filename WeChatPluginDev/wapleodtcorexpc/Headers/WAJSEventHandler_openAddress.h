//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_openAddress
{
    _Bool _isForbidDarkMode;
    _Bool _isDirectOpenEditor;
    _Bool _isFromGift;
}

@property(nonatomic) _Bool isFromGift; // @synthesize isFromGift=_isFromGift;
@property(nonatomic) _Bool isDirectOpenEditor; // @synthesize isDirectOpenEditor=_isDirectOpenEditor;
@property(nonatomic) _Bool isForbidDarkMode; // @synthesize isForbidDarkMode=_isForbidDarkMode;
- (void)startEditAddress;
- (void)onAddressEditEnd:(id)arg1;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

