//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMLiveConnectMicActionDelegate-Protocol.h"

@class MMFinderLiveConnectMicUser, NSString;

@protocol MMFinderLiveConnectMicActionDelegate <MMLiveConnectMicActionDelegate>

@optional
- (void)onMMFinderLiveConnectMicLogicConnectMicLayoutModeDidChangeFrom:(unsigned long long)arg1 toLayoutMode:(unsigned long long)arg2;
- (void)onMMFinderLiveConnectMicLogicRequestOpenWebUrl:(NSString *)arg1;
- (void)onFinderLiveConnectedMicUserListUpdated;
- (void)onFinderLiveConnectMicEndWithUserInfo:(MMFinderLiveConnectMicUser *)arg1;
- (void)onFinderLiveConnectMicStartWithUserInfo:(MMFinderLiveConnectMicUser *)arg1;
- (void)onFinderLiveSwitchUserRoleBeforeConnectingMic;
- (void)onFinderLiveConnectedMicUserAreaTappedWithMicUserInfo:(MMFinderLiveConnectMicUser *)arg1 isAvatarTapped:(_Bool)arg2 highlightRect:(struct CGRect)arg3 highlightRectCornerRadius:(double)arg4;
- (void)onFinderLivePolicyShownForFreeMic;
- (void)onFinderLiveVerifyRealNameForFreeMic;
- (void)onFinderLivePolicyShown;
- (void)onFinderLiveVerifyRealNameForConnectMic;
@end

