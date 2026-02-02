//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderTimelineTabDelegateProtocol-Protocol.h"

@class NSArray, NSString, WCFinderAppendTabDatasModel, WCFinderFeedContentVM, WCFinderTLFeedInfo;

@protocol WCFinderFullFeedMachineViewControllerDelegate <WCFinderTimelineTabDelegateProtocol>

@optional
- (void)onMachineResetTLRefreshState;
- (void)onTLFeedClickMiaoJianMusic:(WCFinderFeedContentVM *)arg1 musicId:(NSString *)arg2 tingListenId:(NSString *)arg3;
- (void)onTLFeedMediaDidEndPlay:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(WCFinderTLFeedInfo *)arg3;
- (void)onTLCheckPopupDisplayAtTabType:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(WCFinderTLFeedInfo *)arg3 isFocusFeed:(_Bool)arg4 enablePopUpShow:(_Bool)arg5;
- (void)updateFeedPostInfoBy:(NSString *)arg1 onLoadingState:(_Bool)arg2;
- (void)onFeedShowPostEntranceByContentVM:(WCFinderFeedContentVM *)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)currentTabViewControllerPopOthers:(int)arg1;
- (void)currentTabViewControllerPushOthers:(int)arg1;
- (void)onMachineFetchSucBySpecialRequestScene:(int)arg1;
- (void)onMachineMsgBubbleAlphaChanged:(double)arg1;
- (_Bool)onMachineFIsByFindPage;
- (NSArray *)onTabUnreadCacheFeedsWithoutTab:(long long)arg1;
- (void)onMachineFeedChanged;
- (void)onMachineFeedVMDataPullRefreshError:(int)arg1;
- (void)onMachineResetAppendTabDatasModel;
- (WCFinderAppendTabDatasModel *)onMachineGetAppendTabDatasModel;
- (void)onMachineUpdateTabSesstionID;
- (void)onMachineTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
@end

