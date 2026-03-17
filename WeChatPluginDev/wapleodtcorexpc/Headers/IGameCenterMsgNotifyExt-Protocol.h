//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterMessageRedPointInfo;

@protocol IGameCenterMsgNotifyExt

@optional
- (void)onGameChatVcWillAppear;
- (void)onGameCenterMessageRedPointInfoChange:(GameCenterMessageRedPointInfo *)arg1;
- (void)onGameCenterUpdateGameLifeFindDot;
- (void)onGameCenterEntryReExposure;
- (void)onGameCenterEntryIconStatusChanged;
- (void)onGameCenterDeleteOneMsg:(unsigned int)arg1;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterClearAllRedDot;
- (void)onGameCenterMessageReceived;
@end

