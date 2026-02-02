//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_shareAppMessageDirectly
{
    _Bool _isSharing;
}

- (void)onConfirmCancel;
- (void)onSuccess:(id)arg1;
- (void)onError:(id)arg1;
- (void)shareMsg:(id)arg1 toContacts:(id)arg2 forNativeWeApp:(_Bool)arg3;
- (void)shareMsg:(id)arg1 toContacts:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

