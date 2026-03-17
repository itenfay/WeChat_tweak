//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@protocol IWXTalkieExt

@optional
- (void)onRemoteControlCheckShouldStop;
- (void)onRemoteControlCheckShouldPlay;
- (void)OnSomeOneCloseMode:(NSString *)arg1;
- (void)OnSomeOneOpenMode:(NSString *)arg1;
- (void)OnRestart;
- (void)OnPause;
- (void)OnReConnecting;
- (void)OnForceStopWXTalk;
- (void)onKickOutFromWXTalkRoom:(NSString *)arg1;
- (void)OnMyselfCloseMode:(NSString *)arg1;
- (void)OnNobodyTalking;
- (void)OnForceStopRecord;
- (void)OnError:(NSString *)arg1 ErrNo:(int)arg2;
- (void)OnRoomMemberChange:(NSArray *)arg1;
- (void)OnSomeoneTalking:(NSString *)arg1;
- (void)OnGetMicrophoneResult:(int)arg1;
- (void)OnOpenWXTalkModeOK:(NSArray *)arg1;
@end

