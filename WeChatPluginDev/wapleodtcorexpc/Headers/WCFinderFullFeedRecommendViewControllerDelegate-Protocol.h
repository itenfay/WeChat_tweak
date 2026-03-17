//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderTimelineTabDelegateProtocol-Protocol.h"

@class FinderRecommendCloseConfig, NSArray, NSData, NSString, UIViewController, WCFinderAppendTabDatasModel, WCFinderDataItem, WCFinderFeedContentVM, WCFinderTLFeedInfo;

@protocol WCFinderFullFeedRecommendViewControllerDelegate <WCFinderTimelineTabDelegateProtocol>

@optional
- (void)onFeedReccommendClickMoreHotContent;
- (void)onTLFeedClickMiaoJianMusic:(WCFinderFeedContentVM *)arg1 musicId:(NSString *)arg2 tingListenId:(NSString *)arg3;
- (void)onTLFeedMediaDidEndPlay:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(WCFinderTLFeedInfo *)arg3;
- (void)onTLCheckPopupDisplayAtTabType:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(WCFinderTLFeedInfo *)arg3 isFocusFeed:(_Bool)arg4 enablePopUpShow:(_Bool)arg5;
- (void)onClickLeadToMachineTabWithDataItem:(WCFinderDataItem *)arg1;
- (void)updateFeedPostInfoBy:(NSString *)arg1 onLoadingState:(_Bool)arg2;
- (void)onFeedShowPostEntranceByContentVM:(WCFinderFeedContentVM *)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)currentTabViewControllerPopOthers:(int)arg1;
- (void)currentTabViewControllerPushOthers:(int)arg1;
- (_Bool)onFeedRecommendIsByFindPage;
- (FinderRecommendCloseConfig *)onRecommendGetTimelineTabConfig;
- (void)onRecommendResetAppendTabDatasModel;
- (WCFinderAppendTabDatasModel *)onRecommendGetAppendTabDatasModel;
- (void)onFeedRecommendClickJumpView;
- (void)onFeedRecommendShowJumpViewWithContentArray:(NSArray *)arg1;
- (void)onFeedRecommendClickHotCardItemWithContentArray:(NSArray *)arg1 scrollToContentVM:(WCFinderFeedContentVM *)arg2;
- (NSArray *)onTabUnreadCacheFeedsWithoutTab:(long long)arg1;
- (void)onRecommendFeedChanged;
- (_Bool)onFeedRecommendGetHotTabNeedTopRefresh;
- (NSData *)onRecommendGetHotTabLastBuff;
- (UIViewController *)getTabViewControllerWithType:(long long)arg1;
- (_Bool)onRecommendTimelineNoMoreCanShowHotSwitch;
- (void)onRecommendTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
@end

