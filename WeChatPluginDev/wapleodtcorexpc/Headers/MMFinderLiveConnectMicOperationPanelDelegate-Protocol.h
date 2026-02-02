//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicUser, MMFinderLivePaidConnectMicAnchorOperationPanelInfo, NSArray, NSDictionary, NSString;

@protocol MMFinderLiveConnectMicOperationPanelDelegate <NSObject>
- (void)onMMFinderLiveConnectMicOperationPanelGetPaidConnectMicPanelInfoForAnchor:(void (^)(MMFinderLivePaidConnectMicAnchorOperationPanelInfo *))arg1;
- (_Bool)onMMFinderLiveConnectMicOperationPanelIsApplyAudienceBattleBlocked;
- (_Bool)onMMFinderLiveConnectMicOperationPanelIsRandomMatchAnchorMicBlocked;
- (_Bool)onMMFinderLiveConnectMicOperationPanelIsSearchOnlineAnchorBlocked;
- (_Bool)onMMFinderLiveConnectMicOperationPanelIsChangeMicLayoutModeBlocked;
- (_Bool)onMMFinderLiveConnectMicOperationPanelIsFocusBlocked;
- (NSString *)onMMFinderLiveConnectMicOperationPanelGetFocusedUserId;
- (void)onMMFinderLiveConnectMicInvitePkPanelCloseMic;
- (void)onMMFinderLiveConnectMicInvitePkPanelTapPkView;
- (_Bool)onMMFinderLiveConnectMicOperationPanelGetIsWaitingMultiAnchorMicAcceptCGI;
- (unsigned long long)onMMFinderLiveConnectMicOperationPanelGetBannedConditionType;
- (NSDictionary *)onMMFinderLiveConnectMicOperationPanelGetInvitedMicAudienceDict;
- (NSArray *)onMMFinderLiveConnectMicOperationPanelGetConnectingAnchorUserList;
- (NSArray *)onMMFinderLiveConnectMicOperationPanelGetConnectMicUserListWithType:(unsigned long long)arg1;
- (_Bool)onMMFinderLiveConnectMicOperationPanelShouldShowRedDotAtTab:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelClose;

@optional
- (void)onMMFinderLiveConnectMicOperationPanelSwitchConnectMicMode;
- (void)onMMFinderLiveConnectMicOperationPanelClickPaidMicSettingWithPanelInfo:(MMFinderLivePaidConnectMicAnchorOperationPanelInfo *)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelShowKtvSongList;
- (void)onMMFinderLiveConnectMicNewInvitePkPanelTapPkViewWithOpponentScenario:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelUpdateMicLayoutMode:(unsigned long long)arg1 focusedUserId:(NSString *)arg2 userIndices:(NSDictionary *)arg3;
- (void)onMMFinderLiveConnectMicOperationPanelUpdateCanAutoConnect:(_Bool)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelRandomMatchAnchorMic;
- (void)onMMFinderLiveConnectMicOperationPanelChangeConditionTypeAudience:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelInviteMicToAudienceUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelCancelConnectToUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelCloseConnectToUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelApplyConnectToUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelAcceptConnectFromUser:(MMFinderLiveConnectMicUser *)arg1;
@end

