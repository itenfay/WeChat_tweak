//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSHashTable, NSString;

@interface GameHaowanPostEventDispatcher
{
    NSHashTable *_webviewControllers;
}

- (void).cxx_destruct;
- (void)onGameHaowanPostCanceled:(id)arg1;
- (void)onGameHaowanPostFailed:(id)arg1 error:(id)arg2;
- (void)onGameHaowanPostSucceed:(id)arg1;
- (void)onGameHaowanPostProgress:(id)arg1 percent:(float)arg2;
- (void)putWebviewController:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

