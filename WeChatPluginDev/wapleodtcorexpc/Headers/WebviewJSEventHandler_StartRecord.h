//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebviewJSEventHandler_StartRecord
{
    _Bool _isCheckingPermission;
    unsigned long long _duration;
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isCheckingPermission; // @synthesize isCheckingPermission=_isCheckingPermission;
- (void)onFinishedRecord:(id)arg1 ErrCode:(int)arg2 stopReason:(long long)arg3;
- (void)onStartRecord:(long long)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)updateWebviewTitle;
- (void)realStartRecord;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
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

