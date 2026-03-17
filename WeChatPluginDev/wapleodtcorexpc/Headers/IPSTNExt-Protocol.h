//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PSTNCheckNumberRespInfo, PSTNDialData;

@protocol IPSTNExt

@optional
- (void)OnPSTNInviteGap:(int)arg1;
- (void)OnPSTNAutoHangUp:(PSTNDialData *)arg1;
- (void)OnPSTNCallInterrupt:(PSTNDialData *)arg1;
- (void)OnPSTNLightInterrupt:(_Bool)arg1;
- (void)OnPSTNTellMeViewIsExist:(_Bool *)arg1;
- (void)OnPSTNTalkBrokenError:(PSTNDialData *)arg1 ErrNo:(int)arg2;
- (void)OnPSTNNetWorkError:(PSTNDialData *)arg1 ErrNo:(int)arg2;
- (void)OnPSTNSyncError:(PSTNDialData *)arg1 ErrNo:(int)arg2;
- (void)OnPSTNNotifyError:(PSTNDialData *)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(NSString *)arg4 ErrTitle:(NSString *)arg5;
- (void)OnPSTNInviteError:(PSTNDialData *)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(NSString *)arg4 ErrTitle:(NSString *)arg5;
- (void)OnPSTNError:(PSTNDialData *)arg1 ErrNo:(int)arg2 ErrMsg:(NSString *)arg3 ErrTitle:(NSString *)arg4;
- (void)OnPSTNTimeOut:(PSTNDialData *)arg1;
- (void)OnPSTNInterrupt:(PSTNDialData *)arg1;
- (void)OnPSTNBeginTalk:(PSTNDialData *)arg1;
- (void)OnPSTNBeginConnect:(PSTNDialData *)arg1;
- (void)OnPSTNBeHanguped:(PSTNDialData *)arg1;
- (void)OnPSTNBeRejected:(PSTNDialData *)arg1;
- (void)OnPSTNPreConnect:(PSTNDialData *)arg1;
- (void)OnPSTNDataConnected:(PSTNDialData *)arg1;
- (void)OnPSTNBeAccepted:(PSTNDialData *)arg1;
- (void)OnPSTNNoAnswer:(PSTNDialData *)arg1;
- (void)OnPSTNRing:(PSTNDialData *)arg1;
- (void)onPSTNCheckNumberResp:(PSTNCheckNumberRespInfo *)arg1;
- (void)OnPSTNCall:(PSTNDialData *)arg1 ErrNo:(int)arg2;
@end

