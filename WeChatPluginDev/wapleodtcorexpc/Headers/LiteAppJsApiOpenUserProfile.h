//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface LiteAppJsApiOpenUserProfile
{
    NSDictionary *_param;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void)showErrorWhenNoContact;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

