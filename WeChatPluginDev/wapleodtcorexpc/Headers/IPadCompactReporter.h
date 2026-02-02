//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface IPadCompactReporter
{
    _Bool _checkVisionPlatform;
}

@property(nonatomic) _Bool checkVisionPlatform; // @synthesize checkVisionPlatform=_checkVisionPlatform;
- (void)onKickQuit;
- (void)onManulLogOut;
- (void)onManulLoginOK;
- (void)onVoipAccept:(id)arg1;
- (void)UIManagerDidOpenWindowWithContact:(id)arg1 isCaller:(_Bool)arg2 startInApp:(_Bool)arg3 isEarMode:(_Bool)arg4 isAudioMode:(_Bool)arg5 from:(unsigned long long)arg6;
- (void)onServiceEnterForeground;
- (void)reportFindFriendRowSelect:(unsigned long long)arg1;
- (void)reportMainTabIndexChange:(unsigned long long)arg1;
- (void)reportAction:(long long)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

