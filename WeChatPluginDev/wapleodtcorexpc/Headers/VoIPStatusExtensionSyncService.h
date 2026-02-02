//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VoIPStatusExtensionSyncService
{
    CDUnknownBlockType _updateAppStatusBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateAppStatusBlock; // @synthesize updateAppStatusBlock=_updateAppStatusBlock;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerDidOpenWindowWithContact:(id)arg1 isCaller:(_Bool)arg2 startInApp:(_Bool)arg3 isEarMode:(_Bool)arg4 isAudioMode:(_Bool)arg5 from:(unsigned long long)arg6;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)updateAppStatusContinually;
- (void)cancelUpdatingAppStatusContinually;
- (void)updateAppStatus;
- (void)resetAppStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

