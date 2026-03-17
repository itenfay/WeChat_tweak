//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MMFinderLiveConnectMicContainerViewDelegate <NSObject>

@optional
- (void)onFinderLiveConnectMicContainerViewModifyPaidConnectMicSetting;
- (void)onFinderLiveConnectMicContainerViewShowKtvSongList;
- (void)onFinderLiveConnectMicContainerViewInitiateAudiencePk;
- (void)onFinderLiveConnectMicContainerViewInviteAnchorPK:(NSArray *)arg1;
- (void)onFinderLiveConnectMicContainerViewCloseMic;
- (void)onFinderLiveConnectMicContainerViewShowSearchAudiencePannelWithMicUserList:(NSArray *)arg1;
- (void)onFinderLiveConnectMicContainerViewShowIncomingAudienceSettingsPanel;
- (void)onFinderLiveConnectMicContainerViewShowSelectMicLayoutModePannel;
- (void)onFinderLiveConnectMicContainerViewUpdateCanAutoConnect:(_Bool)arg1;
- (_Bool)onFinderLiveConnectMicContainerViewIsFocusBlocked;
- (void)onFinderLiveConnectMicContainerViewCloseDetailSettingView;
- (void)onFinderLiveConnectMicContainerViewChangeConditionTypeAudience:(unsigned long long)arg1;
- (void)onFinderLiveConnectMicContainerViewOpenDetailSettingViewForAudienceMic;
- (void)onFinderLiveConnectMicContainerViewRandomMatchButtonClicked;
- (void)onFinderLiveConnectMicContainerViewOpenSearchOnlineAnchor;
@end

