//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMLiveLogicDelegate-Protocol.h"

@class FinderCreateLiveWarnPage, FinderLiveAppMsgAlertInfo, FinderLiveAppMsgToastInfo, FinderLiveAutoSwipeInfo, FinderLiveErrorPage, MMFinderLiveConnectMicUser, MMLivePollingFetchRequestBufferModel, NSError, NSString;

@protocol MMFinderLiveLogicDelegate <MMLiveLogicDelegate>

@optional
- (MMLivePollingFetchRequestBufferModel *)pollingFetchRequestBufferByCmdId:(long long)arg1;
- (void)onMMFinderLiveConnectMicLayoutModeDidChangeFrom:(unsigned long long)arg1 toLayoutMode:(unsigned long long)arg2;
- (void)onMMFinderLiveLogicRequestOpenWebUrl:(NSString *)arg1;
- (void)onNeedAutoSwipe:(FinderLiveAutoSwipeInfo *)arg1;
- (void)onLiveClosed:(NSError *)arg1 source:(unsigned long long)arg2;
- (void)onShowWarnPage:(FinderCreateLiveWarnPage *)arg1 isMiniGameLive:(_Bool)arg2;
- (void)onLoadingStop;
- (void)onLiveHalfScreenViewEnd:(_Bool)arg1 fromScene:(long long)arg2;
- (void)onSwitchUserRoleBeforeOpeningRedPacket;
- (void)onSwitchUserRoleBeforeConnectingMic;
- (void)onConnectedMicUserListUpdated;
- (void)onShowConnectedMicUserProfileWithMicUserInfo:(MMFinderLiveConnectMicUser *)arg1 isAvatarTapped:(_Bool)arg2 highlightRect:(struct CGRect)arg3 highlightRectCornerRadius:(double)arg4;
- (void)onShowLiveHalfScreenViewFromScene:(long long)arg1 forcePortrait:(_Bool)arg2;
- (void)onShowToastFromAppMsg:(FinderLiveAppMsgToastInfo *)arg1;
- (void)onShowAlertFromAppMsg:(FinderLiveAppMsgAlertInfo *)arg1;
- (void)onAnchorPayGameSettedValueChanged;
- (void)onShowForbidLiveViewWithError:(NSError *)arg1;
- (void)onShowErrorPage:(FinderLiveErrorPage *)arg1;
- (void)onFinderDataItemUpdated;
- (void)onKickedOut;
@end

